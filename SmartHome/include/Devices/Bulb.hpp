#ifndef BULB_H
#define BULB_H

#pragma once

#include <string>
#include <exception>
#include "Device.hpp"

/*!
 * \namespace Jarvis
 * \brief Основной namespace для всего проекта
 */
namespace Jarvis {
  namespace Devices {
#define methods
#define params
#define structs
    
    class Bulb : public Device {
      public methods:
      Bulb(const Device::name &name, const Connection::SerialPort::portName &portName, const Connection::SerialPort::portRate portRate = 9600);
       ~Bulb() = default;
      
      private methods:
      Device::command makeRequest(const Device::command &command) const override;
    };
  }
}

#endif // BULB_H
