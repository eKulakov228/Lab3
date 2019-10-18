#include <stdio.h>

int main(){
    int C=0,S=100,a,b,c,d; // a - 50, b - 20, c - 5, d - 2, S - 100
    for(a=0;a<=2;++a)
    {
        for(b=0;b<=5;++b)
        {
            for(c=0;c<=20;++c)
            {
                for(d=0;d<=50;++d)
                {
                    if(S==a*50+b*20+c*5+d*2)
                    {
                        C++;
                    }
                }
            }

        }
    }
    printf("Sposobov nabora: %d\n", C );
    return 0;
}

