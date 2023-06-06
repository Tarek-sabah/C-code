#include "stdio.h"

float Calculate(float *Ptr_num1,float *Ptr_num2, char *Ptr_operand);

int main()
{
    float Local_num1,Local_num2;
    float Local_result;
    char Local_operand;
    printf("Enter First Number: ");
    scanf("%f",&Local_num1);

    printf("Enter Second Number: ");
    scanf("%f",&Local_num2);

    printf("Enter Operand: ");
    scanf(" %c",&Local_operand);

    Local_result = Calculate(&Local_num1,&Local_num2,&Local_operand);
 
    printf("Result = %.2f",Local_result);
    return 0;
}

float Calculate(float *Ptr_num1,float *Ptr_num2, char *Ptr_operand)
{
    switch(*Ptr_operand)
    {
        case '+':return ((*Ptr_num1) + (*Ptr_num2));break;
        case '-':return ((*Ptr_num1) - (*Ptr_num2));break;
        case '*':return ((*Ptr_num1) * (*Ptr_num2));break;
        case '/':return ((*Ptr_num1) / (*Ptr_num2));break;
        case '%':return (((int)*Ptr_num1) % ((int)*Ptr_num2));break;
        default: printf("Operator is wrong");
    }
}