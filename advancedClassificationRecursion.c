#include<stdio.h>
#include"NumClass.h"
#include <math.h>
int reverse(int num)
{
    //Find number of digits in num 
    int digit = (int)log10(num);
    
    //Recursion base condition 
    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));
}
   
int check(int num,int h)
{
     if(num>0){
     int num2=num/10;
    return (pow(num%10,h)+check(num2,h));
     }
 return 0;
}

int isArmstrong(int num){//arm
  int count=0;
   int num2=num;
   int num3=num;
     do
    {
        
        count++;

       
        num2 /= 10;
    } while(num2 != 0);
   
 
   if(check(num3,count)==num)
    {
     return 1;
   
    }
    return 0;

 }
      
 int isPalindrome(int num)
{
     //Check if the given number is equal to 
      
      //its reverse.
    if(num == reverse(num))
    {
        return 1;
    } 
    return 0;
}

    
    




 

    

  
  
      

    
 
 
 
   
 
