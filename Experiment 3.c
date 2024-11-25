/*Aim: WAP to design a menu driven calculator  using switch and goto.
Name:Aayush Nerurkar
Class:FE
UIN:241A036
*/
#include<stdio.h>;

int main ()
{
    printf("\t\t\t***Calculator***\n\n");
    printf("\t\tOperations :\n");
    printf("\t\t\t+ for Addition\n");
    printf("\t\t\t- for Subtraction\n");
    printf("\t\t\t* for Multiplication\n");
    printf("\t\t\t/ for Division\n");
    printf("\t\t\t%% for Modulus\n");

    float num1,num2,result;
    char op,choice;
    int mod_result;

    backagain:

    printf("\nEnter num1:");
    scanf("%f", &num1);
    printf("\nEnter num2:");
    scanf("%f", &num2);
    printf("\nEnter Operation:");
    scanf(" %c", &op);
    switch (op)
    {
        case '+':
        result = num1+num2;
        printf("%.1f+%.1f=%.1f",num1,num2,result);
        break;

        case '-':
        result = num1-num2;
        printf("%.1f-%.1f=%.1f",num1,num2,result);
        break;

        case '*':
        result = num1*num2;
        printf("%.1f*%.1f=%.2f",num1,num2,result);
        break;

        case '/':
            if (num2!=0){
                    result = num1/num2;
                    printf("%.1f/%.1f=%.1f",num1,num2,result);
            }
            else {
                printf("Answer is Not defined");
            }
        break;

        case '%':
        mod_result = (int)num1%(int)num2;
        printf("%.0f %% %.0f=%d",num1,num2,mod_result);
        break;

        default:
            printf("Invalid Operator. Try Again.");
            break;
    }

        printf ("\n\t\t\tDo you want to continue? \n\t\t\tY/N \n");
        scanf (" %c",&choice);
        if (choice=='Y' || choice=='y') {
            goto backagain;
        }
        return 0;
}
/*Output:
  ***Calculator***

                Operations :
                        + for Addition
                        - for Subtraction
                        * for Multiplication
                        / for Division
                        % for Modulus

Enter num1:5

Enter num2:2

Enter Operation:%
5 % 2=1
                        Do you want to continue?
                        Y/N
Y

Enter num1:2

Enter num2:3

Enter Operation:*
2.0*3.0=6.00
                        Do you want to continue?
                        Y/N*/
