#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
    int arrow[15] = {0};
    // input the value
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &arrow[i]);
    }
    // print arrow
    for(int i = 0;i < 15;i++)
    {
        printf("%d ",arrow[i]);
    }
    printf("\n");
    //find a in arrow[] and print its index
    int a = 0;
    a = scanf("%d",&a);
    for (int i = 0; i < 15; i++)
    {
        if(arrow[i] == a)
        {
            printf("the index of %d is: %d\n",a,i);
            break;
        }
    }
    //find the same value in arrow[] and print their index
    for (int i = 0; i < 15; i++)
    {
        for(int j = i + 1;j < 15;j++)
        {
            if(arrow[i] == arrow[j])
            {
                printf("the same value %d is at index: %d and %d\n",arrow[i],i,j);
                break;
            }
        }
    }
    Sleep(5000);
    getchar();
    getchar();
    return 0;
}