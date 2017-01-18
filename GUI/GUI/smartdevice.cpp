#include "smartdevice.h"

SmartDevice::SmartDevice(QWidget *parent, const QString deviceBluetooth) : QPushButton{parent}
{
    deviceBluetoothName = deviceBluetooth;
    groupName = "defaultGroup";
    deviceName = "defaultName";
    deviceID = 0;
    deviceStatus = false;

}

SmartDevice::SmartDevice(QWidget *parent, const QString& deviceBluetooth,
                         const QString& groupName, const QString& deviceName, int id) : SmartDevice{parent, deviceBluetooth}
{


    if(groupName.isEmpty())
        QMessageBox::information(nullptr, QString{"warning"}, QString{"Error. Empty group name"});
    else
        this->groupName = groupName;

    if(deviceName.isEmpty())
        QMessageBox::information(nullptr, QString{"warning"}, QString{"Error. Empty device name"});
    else
        this->deviceName = deviceName;

    if(id < 0)
        QMessageBox::information(nullptr, QString{"warning"}, QString{"Error. Invalid device ID"});
    else
        deviceID = id;
}

SmartDevice::~SmartDevice()
{

}


void SmartDevice::startFabric(std::string devicePort)
{

}

bool SmartDevice::setGroupName(const QString& name)
{
    QString temp = groupName;

    if(name.isEmpty())
    {
        QMessageBox::information(nullptr, QString{"warning"}, QString{"Error. Empty group name"});
        return false;
    }
    else
    {
        groupName = name;
        if(uploadDeviceConfig())
            return true;
        else
        {
            groupName = temp;
            QMessageBox::information(nullptr, QString{"warning"}, QString{"Error. Cannot upload config"});
            return false;
        }

    }
    return true;
}

bool SmartDevice::setDeviceName(const QString &name)
{
    QString temp = deviceName;

    if(name.isEmpty())
    {
        QMessageBox::information(nullptr, QString{"warning"}, QString{"Error. Empty device name"});
        return false;
    }
    else
    {
        deviceName = name;
        if(uploadDeviceConfig())
            return true;
        else
        {
            deviceName = temp;
            QMessageBox::information(nullptr, QString{"warning"}, QString{"Error. Cannot upload config"});
            return false;
        }
    }
    return true;
}



QString SmartDevice::getDeviceBluetoothName() const
{
    return deviceBluetoothName;
}
bool  SmartDevice::setDeviceID(int id)
{
    int temp = deviceID;
    if(id < 0)
    {
        QMessageBox::information(nullptr, QString{"warning"}, QString{"Error. Invalid device ID"});
        return false;
    }
    else
    {
        deviceID = id;
        if(uploadDeviceConfig())
            return true;
        else
        {
            deviceID = temp;
            QMessageBox::information(nullptr, QString{"warning"}, QString{"Error. Cannot upload config"});
            return false;
        }
    }
    return true;
}

bool SmartDevice::turnOnDevice()
{
    bool temp =  deviceStatus;
    deviceStatus = true;

    // TODO:
    //
    // вызвать функцию включения лампочки
    // связать через deviceBluetoothName

    if(uploadDeviceConfig())
        return true;
    else
    {
        deviceStatus = temp;
        QMessageBox::information(nullptr, QString{"warning"}, QString{"Error. Cannot upload config"});
        return false;
    }
}

bool SmartDevice::turnOffDevice()
{
    bool temp =  deviceStatus;
    deviceStatus = false;

    // TODO:
    //
    // вызвать функцию выключения лампочки
    // связать через deviceBluetoothName

    if(uploadDeviceConfig())
        return true;
    else
    {
        deviceStatus = temp;
        QMessageBox::information(nullptr, QString{"warning"}, QString{"Error. Cannot upload config"});
        return false;
    }
}

bool SmartDevice::getDeviceStatus() const
{
    return deviceStatus;
}


QString SmartDevice::getGroupName() const
{
    return groupName;
}

QString SmartDevice::getDeviceName() const
{
    return deviceName;
}

int SmartDevice::getDeviceID() const
{
    return deviceID;
}

bool SmartDevice::updateDeviceConfig()
{
    return true;
}

bool SmartDevice::uploadDeviceConfig()
{
    return true;
}




