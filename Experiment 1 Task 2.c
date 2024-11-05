/*
Aim:WAP to get student's PCM marks from the user and find it's average.
Class:FE
Name:Aayush Nerurkar
UIN:241A036
*/

#include<stdio.h>

int main(){
int phy, chem, math, avg;

printf("\t\t\t *** Student Eligiblity Calculator \t\t\t \n");

printf("Enter Physics Marks : ");
scanf("%d", &phy );

printf("Enter Chemistry Marks : ");
scanf("%d", &chem );

printf("Enter maths Marks : ");
scanf("%d", &math );

avg = (phy + chem + math)/ 3;

printf("PCM Average = %.d\n", avg);

avg> 50 ? printf(" You are eligible for Admission. \n") : printf("you are not eligible for admission.\n");

return 0;
/* *** Student Eligiblity Calculator
Enter Physics Marks : 45
Enter Chemistry Marks : 45
Enter maths Marks : 45
PCM Average = 45
you are not eligible for admission.
*/







}
