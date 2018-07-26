#include <stdio.h>
#include <math.h>

void main()
{ 
    int i;
    //double di=sqrt((double) i);
    //double di=sqrt(2.0);

    printf("\t Number \t\t Square Root of Number\n\n");

    for (i=0; i<=360; ++i)
        printf("\t %d \t\t\t %f \n", i, sqrt((double) i));
        //printf("\t %d \t\t\t %d \n", i, sqrt(double(i)));
        //printf("\t %d \t\t\t %d \n", i, di);

}
