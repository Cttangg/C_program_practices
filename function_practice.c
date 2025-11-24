#include<stdio.h>
#include<windows.h>
//define a function to return the maximum value between two integers
int maximum(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    int a=0,b=0;
    scanf("%d %d",&a,&b);
    printf("The maximum value is: %d\n", maximum(a,b));
    Sleep(3000);
    return 0;
}