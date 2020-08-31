#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    double x, y, pi;
    int NumT, NumPC, userN; //NumT = total number generated, NumPC = Number of points inside of the circule
    printf("Type how many points will be used to find pi: ");
    NumPC = 0;
    NumT = 0;
    scanf("%d", &userN);
    srand((unsigned int)time(NULL));
    while (NumT < userN) //code to manage the generation of points
    {   
        x = (double)rand() / ((double)RAND_MAX + 1);
        y = (double)rand() / ((double)RAND_MAX + 1);
        double distance = (x*x + y*y);
        if ( distance <= 1) //finding out if this point is inside the circle
        {
            NumPC++;
        }
        NumT++;
    } 
   pi = 4* (double) NumPC/NumT; //Formula to find Pi using Circle's area/square's area = NumT/NumPC
   printf("NumT = %d, NumPC = %d, pi = %f\n", NumT, NumPC , pi);
}
