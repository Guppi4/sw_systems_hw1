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
int isStrong(int num){
  int  temp, remaind, sum = 0, i; 
  long fact;
  temp=num;
  int strong=0;
 while( temp > 0)
    {
     fact = 1, i = 1; 
     remaind = temp % 10;
     while (i <= remaind)
     {
     	fact = fact * i;
     	i++;
     }
     
     sum = sum + fact;
     temp = temp /10;
   }
  if ( num == sum ){
        strong=1;
  }
return strong;
}
  
  
  