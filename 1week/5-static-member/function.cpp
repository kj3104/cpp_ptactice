#include "function.h"

int Function::max(int m, int n){
  if(m > n){
    return m;
  }else{
    return n;
  }
}

int Function::min(int m, int n){
  if(m > n){
    return n;
  }else{
    return m;
  }
}
