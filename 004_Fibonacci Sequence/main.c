#include "stdio.h"


int main()
{
    int number;
    printf("Number of Terms: ");    //Number of Terms
    scanf("%d",&number);
    int a = 0,b = 1 ,result;
    for (int i=1;i<=number;i++)
    {
        printf("%d\t",a);
        result = a + b;
        a = b;
        b = result;
    }

    return 0;
}