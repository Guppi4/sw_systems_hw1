#include<stdio.h>
#include"NumClass.h"
#include <math.h>

int ezerArmstrong (int number, int r)
{
  static int  Sum = 0;
  int rem;
  if (number > 0)
   {
     rem = number %10;
     Sum = Sum + pow(rem, r);
     ezerArmstrong (number /10, r);
     return Sum;
   }
   else
     return 0;
}
int isArmstrong(int num){
  
    int  ns=0, r =0,t;
    t = num;
  while (t!= 0) 
   {
     r = r + 1;
     t = t / 10;
   } 
   
   if(num==ezerArmstrong(num,r)){
        ns=1;
    }

    return ns;
 }
      
  int isPalindrome(int x){
int  rev = 0, rema ;
   int t=0;
    

    // reversed integer is stored in reversed variable
    while (x != 0) {
        rema = x % 10;
        rev = rev * 10 + rema;
        x /= 10;
    }
  if(rev==x){
     t=1;
  }
 
 return t;
}
   
    

  
  
      

    
 
 
 
   
 
