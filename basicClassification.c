#include <stdio.h>


/* will return if a number is prime*/
int isPrime(int p){
 
 int i,prime=1;
 
 for (i = 2; i <= p / 2; ++i) {
   
    if (p % i == 0) {
      prime = 0;
      break;
    }
  }
    
    return prime;
  }
/*Strong number is a special number whose sum of the factorial of digits is equal to the original
number. For Example: 145 is strong number
1! + 4! + 5! = 145
*/
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
  
  
  