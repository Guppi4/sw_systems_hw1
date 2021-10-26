#include<stdio.h>
#include"NumClass.h"
#include <math.h>


int isArmstrong(int num){
 int  Num, remaind, n = 0;
   float res = 0.0;
  int arm=0;
   Num = num;

  //count numbers
   for (Num = num; Num != 0; ++n) {
       Num /= 10;
   }
   
   for (Num = num; Num != 0; Num /= 10) {
       remaind = Num % 10;

      
      res += pow(remaind, n);
   }

   
   if ((int)res == num){
       arm=1;
   }
    
    
    
    return arm;
 }
int isPalindrome(int x){
int  rev = 0, rema ;
   int t=0;
    
  int x1=x;
    // reversed integer is stored in reversed variable
    while (x1 != 0) {
        rema = x1 % 10;
        rev = rev * 10 + rema;
        x1 /= 10;
    }
 printf("\n%d+%d\n",rev,x);
  if(rev==x){
       
      t=1;
   }
 
 return t;
}