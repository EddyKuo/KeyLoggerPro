/**
 * KeyPair.cpp
 *
 * @author Raul Butuc
 * @version 1.0.0 - 23/07/2016
 */

#include "stdafx.h"
#include "KeyPair.h"

namespace KeyLoggerPro {

  KeyPair::KeyPair(const std::string& vKey = "",
                   const std::string& name = "")
      : m_vKey(vKey), m_Name(name) { }

  std::string KeyPair::getVKey(void) const {
    return m_vKey;
  }

  std::string KeyPair::getName(void) const {
    return m_Name;
  }

  void KeyPair::setVKey(const std::string& vKey = "") {
    this->m_vKey = vKey;
  }

  void KeyPair::setName(const std::string& name = "") {
    this->m_Name = name;
  }

}