#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int a1, b1, c1, a2, b2, c2;
    scanf("%d%d%d%d%d%d", &a1, &b1, &c1, &a2, &b2, &c2);
    int deltax1,deltax2,delta;
    float x1, x2;
    deltax1=c1*b2-b1*c2;
    deltax2=a1*c2-c1*a2;
    delta=a1*b2-a2*b1;
    if(delta != 0)
    {
        x1=(float)deltax1/delta;
        x2=(float)deltax2/delta;
        printf("x=%.2f\n", x1);
        printf("y=%.2f\n", x2);
    }
    else
    {
        if(deltax1==0 && deltax2==0)
            cout<<"Too many"<<endl;
        else
            cout<<"No answer"<<endl;
    }
}