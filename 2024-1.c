#include<stdio.h>
#include<windows.h>
#include<math.h>

int main()
{
    double x = 0;
    scanf("%lf",&x);
    if(x < 0)
    {
        printf("f(%.2lf)=%.2lf",x,-x);
    }else if(0 <= x && x < 2)
    {
        printf("f(%.2lf)=%.2lf",x,sqrt(x+1));
    }else if(2 <= x && x < 4)
    {
        printf("f(%.2lf)=%.2lf",x,pow(x+2,2));
    }else if(4 <= x && x < 10)
    {
        printf("f(%.2lf)=%.2lf",x,2*x + 5);
    }else
    {
        printf("Out of range");
    }
    Sleep(3000);
    return 0;
}