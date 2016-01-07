/*=====================================================================
 
 QGroundControl Open Source Ground Control Station
 
 (c) 2009 - 2015 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 
 This file is part of the QGROUNDCONTROL project
 
 QGROUNDCONTROL is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 QGROUNDCONTROL is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with QGROUNDCONTROL. If not, see <http://www.gnu.org/licenses/>.
 
 ======================================================================*/

#ifndef QGCHILCONFIGURATION_H
#define QGCHILCONFIGURATION_H

#include <QWidget>

#include "Vehicle.h"

namespace Ui {
class QGCHilConfiguration;
}

class QGCHilConfiguration : public QWidget
{
    Q_OBJECT
    
public:
    QGCHilConfiguration(Vehicle* vehicle, QWidget *parent = 0);
    ~QGCHilConfiguration();

public slots:
    /** @brief Receive status message */
    void receiveStatusMessage(const QString& message);
    void setVersion(QString version);

private slots:
    void on_simComboBox_currentIndexChanged(int index);

private:
    Vehicle* _vehicle;
    
    Ui::QGCHilConfiguration *ui;
};

#endif // QGCHILCONFIGURATION_H
