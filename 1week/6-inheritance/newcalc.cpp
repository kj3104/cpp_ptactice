#include "newCalc.h"

NewCalc::NewCalc()
{
}

double NewCalc::mul(){
  return getNumber1() * getNumber2();
}

double NewCalc::div(){
  return getNumber1()/getNumber2();
}
