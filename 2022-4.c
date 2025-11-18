#include<stdio.h>
#include<windows.h>

int main()
{
    int n=0,m=0,max=0;//max表示最大值下标
    scanf("%d %d",&n,&m);
    int a[10][10]={0};
    for(int i = 0;i<n;i++)//n行
    {
        for(int j = 0;j<m;j++)//m列
        {
            scanf("%d",&a[i][j]);
            a[i][m] +=a[i][j];
        }
        if(a[i][m]>a[max][m])max=i;
    }
    printf("Their total score are:");
    for(int i = 0;i<n;i++)
    {
        printf("%5d",a[i][m]);
    }
    printf("\nstudent number %d got the highest score %d",max+1,a[max][m]);
    Sleep(3000);
    return 0;
}