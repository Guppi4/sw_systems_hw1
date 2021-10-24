#include <stdio.h>
#include"NumClass.h"

int isPrime(int p){
 
 int i,prime=0;
 
 for (i = 2; i <= p / 2; ++i) {
   
    if (p % i == 0) {
      prime = 1;
      break;
    }
  }
    return prime;
  }