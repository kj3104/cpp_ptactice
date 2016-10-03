#include "twostrings.h"

void TwoStrings::setString1(std::string s)
{
  m_string1 = s;
}

void TwoStrings::setString2(std::string s)
{
  m_string2 = s;
}

std::string TwoStrings::getString1()
{
  return m_string1;
}

std::string TwoStrings::getString2()
{
  return m_string2;
}

std::string TwoStrings::getConnectedString()
{
  return m_string1 + m_string2;
}

int TwoStrings::getConnectedLength()
{
  return m_string1.length() + m_string2.length();
}
