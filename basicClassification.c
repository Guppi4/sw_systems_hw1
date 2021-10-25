#include <stdio.h>
#include"NumClass.h"

int isPrime(int p){
 
 int i,prime=1;
 
 for (i = 2; i <= p / 2; ++i) {
   
    if (p % i == 0) {
      prime = 0;
      break;
    }
  }
    if(p==1){
     prime=0;
 }
    return prime;
  }

  