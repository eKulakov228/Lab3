#include <stdio.h>

int main(){
    int year, ind; 
    float cost;
    year=2019;
    cost=20;
    ind=1626; //индейцы

    for (ind=1626; ind <= year; ++ind)
    {
        cost+=cost*0.04;
    }
    
    printf("Today's cost = %.f $\n", cost);
    return 0;
}
