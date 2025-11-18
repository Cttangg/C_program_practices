#include<stdio.h>
#include<windows.h>

int main()
{
    int n = 0;
    printf("Please input a positive integer:\n");
    scanf("%d",&n);
    int a = n%5;
    if(a>0){
        switch(a)
        {
            case 0:
            case 1:
            case 2:
                printf("Fishing on day %d",n);
                break;
            case 3:
            case 4:
                printf("Drying on day %d",n);
                break;
            default:
                printf("Input error");
        }
    }else{
        printf("Input error");
    }
    Sleep(3000);
    return 0;
}