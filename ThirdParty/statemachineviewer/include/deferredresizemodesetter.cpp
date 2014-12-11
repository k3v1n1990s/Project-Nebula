/*
  deferredresizemodesetter.cpp

  This file is part of GammaRay, the Qt application inspection and
  manipulation tool.

  Copyright (C) 2013-2014 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com
  Author: Volker Krause <volker.krause@kdab.com>

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deferredresizemodesetter.h"

using namespace GammaRay;

DeferredResizeModeSetter::DeferredResizeModeSetter(QHeaderView* headerView, int section, QHeaderView::ResizeMode resizeMode):
  QObject(headerView),
  m_view(headerView),
  m_section(section),
  m_resizeMode(resizeMode)
{
  connect(m_view, SIGNAL(sectionCountChanged(int,int)), SLOT(setSectionResizeMode()));
  setSectionResizeMode();
}

DeferredResizeModeSetter::~DeferredResizeModeSetter()
{
}

void DeferredResizeModeSetter::setSectionResizeMode()
{
  if (m_view->count() <= m_section)
    return; // section not loaded yet

#ifdef QT5
  m_view->setSectionResizeMode(m_section, m_resizeMode);
#else
  m_view->setResizeMode(m_section, m_resizeMode);
#endif
}
