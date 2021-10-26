#include<stdio.h>
#include"NumClass.h"
#include <math.h>


int isArmstrong(int num){
int  sum = 0, temp, remainder, digits = 0;
 
   
 
   temp = num;
   // check the number of digits in given number
   while (temp != 0) {
      digits++;
      temp = temp/10;
   }
 
   temp = num;
 

    return (pow(num%10,3) +check_ArmstrongNumber(num/10));;
 }
