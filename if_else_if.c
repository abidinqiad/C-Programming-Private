#include<stdio.h>


int main()
{

    int mark=120, extra_cur = 10, govt_job = 2;


    if( mark>= 200)
    {

        printf("Admitted");
    }
    else if ( mark>= 180 && extra_cur == 10)
    {

        printf("Admitted");
    }

    else if ( mark>=150 && govt_job == 2){
        printf("Admitted");
    }

    else {
        printf("Not Admitted");
    }



    return 0;
}
