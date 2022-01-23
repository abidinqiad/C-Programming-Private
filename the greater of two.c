#include<stdio.h>

int main()
{

    int a, b;

    printf("Please enter first number: ");
    scanf("%d",&a);
    printf("Please enter second number: ");
    scanf("%d",&b);

    if (a>b)
    {
        printf("%d is greater than %d",a,b);
    }

    else
    {
        printf("%d is greater than %d",b,a);
    }





    return 0;
}
