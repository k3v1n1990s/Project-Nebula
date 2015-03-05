/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */
#include <Common/Base/hkBase.h>
#include <Common/Base/Math/Vector/hkVector4Util.h>

void hkRotationd::set(hkQuaterniondParameter qi)
{
	hkVector4dUtil::convertQuaternionToRotation(qi, *this);
}


void hkRotationd::setAxisAngle(hkVector4dParameter axis, hkDouble64 angle)
{
	hkQuaterniond q;
	q.setAxisAngle( axis, angle );
	this->set(q);
}

void hkRotationd::setAxisAngle(hkVector4dParameter axis, hkSimdDouble64Parameter angle)
{
	hkQuaterniond q;
	q.setAxisAngle( axis, angle );
	this->set(q);
}

bool hkRotationd::isOrthonormal( hkDouble64 epsilon ) const
{
	hkSimdDouble64 sEps; sEps.setFromFloat(epsilon);
	const hkSimdDouble64 one = hkSimdDouble64::getConstant<HK_QUADREAL_1>();

	// Check length of cols is 1

	const hkSimdDouble64 dot0 = m_col0.lengthSquared<3>();
	if( dot0 - one > sEps)
	{
		return false;
	}

	const hkSimdDouble64 dot1 = m_col1.lengthSquared<3>();
	if( dot1 - one > sEps)
	{
		return false;
	}

	const hkSimdDouble64 dot2 = m_col2.lengthSquared<3>();
	if( dot2 - one > sEps)
	{
		return false;
	}

	// Check not reflection cannot be done, because constraints exploit this identity
// 	hkVector4d diag;
// 	hkMatrix3dUtil::_getDiagonal(*this, diag);
// 	if (diag.horizontalAdd<3>().getReal() <= -1) return false;

	hkVector4d col0CrossCol1;
	col0CrossCol1.setCross(m_col0, m_col1);

	return col0CrossCol1.allEqual<3>(m_col2, sEps);
}

bool hkRotationd::isOk() const
{
	return(isOrthonormal() && hkMatrix3d::isOk());
}

void hkRotationd::renormalize()
{
#if 0
	// Graphics Gems I, p464
	// may be faster depending on the number of terms used
	hkMatrix3d correction; correction.setIdentity();
	hkMatrix3d residual; residual.setMulInverse( *this, *this );
	residual.sub( correction );
	const hkDouble64 factors[] = { 1.0f/2, 3.0f/8, 5.0f/16, 35.0f/128, -65.0f/256, 231.0f/1024, -429/2048 };
	const int numFactors = sizeof(factors)/sizeof(hkDouble64);
	for( int i = 0; i < numFactors; ++i )
	{
		correction.addMul( factors[i], residual );
		residual.mul(residual);
	}
	this->mul(correction);
#endif
	hkQuaterniond q; q.setAndNormalize(*this);
	this->set(q);
}

/*
 * Havok SDK - Base file, BUILD(#20130912)
 * 
 * Confidential Information of Havok.  (C) Copyright 1999-2013
 * Telekinesys Research Limited t/a Havok. All Rights Reserved. The Havok
 * Logo, and the Havok buzzsaw logo are trademarks of Havok.  Title, ownership
 * rights, and intellectual property rights in the Havok software remain in
 * Havok and/or its suppliers.
 * 
 * Use of this software for evaluation purposes is subject to and indicates
 * acceptance of the End User licence Agreement for this product. A copy of
 * the license is included with this software and is also available from salesteam@havok.com.
 * 
 */