#include "stdio.h"

int Factorial(int *Number);

int main()
{
    int Local_number;
    
    printf("Enter a Number: ");
    scanf("%d",&Local_number);

    printf("The Factorial is = %d",Factorial(&Local_number));
    return 0;
}

int Factorial(int *Number)
{
    int Local_Answer=1;
    while((*Number)!=0)
    {
        Local_Answer *= (*Number);
        (*Number)--;
    }
    return Local_Answer;
}