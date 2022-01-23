#include<stdio.h>


int main()
{

    int a = 10, b=10, c=0;


    if(a>b)
    {

        if(a>c)
        {
            printf("a is greater than b and c");
        }
        else
        {

            printf("c is greater than b and a");

        }


    }
    else
    {

        if(b>c)
        {
            printf("b is greater than a and c");
        }
        else
        {

            printf("c is greater than b and a");
        }


    }


    return 0;
}
