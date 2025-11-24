#include<stdio.h>
#include<windows.h>
int maxf(int s[],int n)
{
    int max,i;
    max=s[0];
    for(i=0;i<n;i++)
    {
        if(s[i]>max)
            max=s[i];
    }
    return max;
}
int main()
{
    
    Sleep(3000);
    return 0;
}