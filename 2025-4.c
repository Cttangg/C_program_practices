#include<stdio.h>
#include<windows.h>

int main()
{
    double a[10]={0};
    double sum = 0;
    double average = 0;
    int flag = 0;
    double max = 0;
    for(int i = 0;i < 10;i++)
    {
        scanf("%lf",&a[i]);
        sum += a[i];
    }
    average = sum/10.0;
    for(int i = 0;i < 10;i++)
    {
        if(a[i]>=average)flag++;
        if(a[i]>max)max = a[i];
    }
    printf("The average is %.3lfm, and the number of values greater than or equal to the average is %d\n",average,flag);
    printf("The maximum value is %.2lfm, with indices:",max);
    for(int i = 0;i < 10;i++)
    {
        if(a[i]>=max)printf("%d ",i);
    }
    Sleep(3000);
    return 0;
}