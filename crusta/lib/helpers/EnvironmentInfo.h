/* ============================================================
* Crusta - Qt5 webengine browser
* Copyright (C) 2018 Anmol Gautam <anmol@crustabrowser.com>
*
* THIS FILE IS A PART OF CRUSTA
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distrib   uted in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
* ============================================================ */

#ifndef CRUSTA_ENVIRONMENTINFO_H
#define CRUSTA_ENVIRONMENTINFO_H

#include <QSysInfo>
#include <QString>
#include <QLocale>

namespace env
{
    class system
    {
        QString getOS();
        QString getCountry();
        QString getLanguage();
    };
}

#endif //CRUSTA_ENVIRONMENTINFO_H
