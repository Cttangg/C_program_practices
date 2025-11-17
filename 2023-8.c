#include<stdio.h>
#include<windows.h>
int main()
{
    double a=0;
    int n = 0;
    double ar = 1;//初始近似值
    printf("please input a value:\n");
    scanf("%lf",&a);
    printf("please input iteration number:\n");
    scanf("%d",&n);
    double n1 =n;
    if(a<=0)
    {
        printf("the input value is not positive");
    }else
    {
        for(int i = 1;i<=n;i++)
        {   
            double temp = ar;
            ar = (ar+(double)a/ar)/2.0;
            if(temp == ar)
            {
                printf("%d: %.12lf\n",i,ar);
                break;
            }
        }
    }
    //getchar();getchar();
    Sleep(3000);
    return 0;
}