#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //ss stands for start size and es stands for end size
    int ss, es ;

    //prompt for start size
    do
    {
        ss = get_int("Input Starting Population: ") ;
    }
    while (ss < 9) ;

    //prompt for end size
    do
    {
        es = get_int("Input Ending Population: ") ;
    }
    while (es < ss) ;

    //n is the variable for number of years
    int n = 0 ;

    //calculating number of years
    while (ss < es)
    {
        ss = ss + (ss / 3) - (ss / 4) ;
        n++ ;
    }

    //printing number of years it takes to reach end size
    printf("Years: %i\n", n) ;

}