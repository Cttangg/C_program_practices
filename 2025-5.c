#include<stdio.h>
#include<windows.h>
int main()
{
    double a[7]={0};
    for(int i = 0;i < 7;i++)
    {
        scanf("%lf",&a[i]);
    }
    //sort
    for(int i = 0;i<7-1;i++)
    {
        for(int j = i+1;j<7;j++)
        {
            if(a[i]>a[j])
            {
                double temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("The scores after sorting are:");
    for(int i = 0;i < 7;i++)
    {
        printf(" %.1lf",a[i]);
    }
    printf("\nThe final score is: %.1lf",(a[2]+a[3]+a[4])*2.0);
    Sleep(3000);
    return 0;
}