#include<stdio.h>
#include"NumClass.h"


int main()
{
int m,n,num;


scanf("%d%d", &m,&n);
//int a=isPalindrome(2332);
//int b=isPalindrome(3033);
//int c=isArmstrong(555);
//printf(" %d",a);
//printf(" %d",b);
//printf(" %d",c);
printf("The Armstrong numbers are:");

for (num = m; num <= n; num++) {
  
  if(isArmstrong(num)==1){
   printf(" %d",num);
  }

}
printf("\n");
printf("The Palindromes are:");
for (num = m; num <= n; num++) {
   //int y =isPalindrome(num);
   if(isPalindrome(num)==1){
   printf(" %d",num);
  }

}
printf("\n");
printf("The Prime numbers are:");
for (num = m; num <= n; num++) {
 if(1==isPrime(num)){
   printf(" %d",num);
  }

}
printf("\n");
printf("The Strong numbers are:");
for (num = m; num <= n; num++) {
 if(1==isStrong(num)){
   printf(" %d",num);
  }

}
printf("\n");
return 0;

}
