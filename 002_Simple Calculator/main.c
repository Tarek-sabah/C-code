#include "stdio.h"

int Calculate(int *Ptr_num1,int *Ptr_num2, char *Ptr_operand);

int main()
{
    int Local_num1,Local_num2,Local_result;
    char Local_operand;
    printf("Enter First Number: ");
    scanf("%d",&Local_num1);

    printf("Enter Second Number: ");
    scanf("%d",&Local_num2);

    printf("Enter Operand: ");
    scanf(" %c",&Local_operand);

    Local_result = Calculate(&Local_num1,&Local_num2,&Local_operand);
 
    printf("Result = %d",Local_result);
    return 0;
}

int Calculate(int *Ptr_num1,int *Ptr_num2, char *Ptr_operand)
{
    switch(*Ptr_operand)
    {
        case '+':return ((*Ptr_num1) + (*Ptr_num2));break;
        case '-':return ((*Ptr_num1) - (*Ptr_num2));break;
        case '*':return ((*Ptr_num1) * (*Ptr_num2));break;
        case '/':return ((*Ptr_num1) / (*Ptr_num2));break;
        case '%':return ((*Ptr_num1) % (*Ptr_num2));break;
        default: printf("Operator is wrong");
    }
}