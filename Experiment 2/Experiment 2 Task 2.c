/*Aim: WAP to find the sum of all the odd numbers between numbers entered by the user.
Name:Aayush Nerurkar
Class:FE
UIN:241A036
*/
#include <stdio.h>
int main()
{
int i,start_num,end_num,sum=0;
printf("\n\t\t\t\t\t\t\t***Sum Of Odd Numbers***");
printf("\n\n\t\t\t\t\t\t\tEnter your starting number:");
scanf("%d",&start_num);
printf("\n\t\t\t\t\t\t\tEnter your ending number:");
scanf("%d",&end_num);
if(start_num>end_num)
{printf("\n\t\t\t\t\t\t\tError!\n\t\t\t\t\t\t\tEnding Number should be higher!");
 return 1;
}
for(i=start_num;i<=end_num;++i)
{
  if(i%2==1)
  {
  sum=sum+i;
  }
}
printf("\n\t\t\t\t\t\t\tYour required sum is:%d",sum);
return 0;
}
/*Output:
 ***Sum Of Odd Numbers***

                                                        Enter your starting number:1

                                                        Enter your ending number:5

                                                        Your required sum is:9/*
