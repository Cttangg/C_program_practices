#include <stdio.h>
#include <stdlib.h>
int main()
{
    // printf("Hello World!\n");
    // printf("你好世界！\n");
    // system("pause");    // 防止运行后自动退出，需头文件stdlib.h
    // int n;
    // scanf("%d",&n);
    // for(int i = n;i>=1;i--)
    // {
    //     for(int j = i;j>=1;j--)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    int temp=1,a,b;
    a=36,b=78;
    while(temp){
        temp = a%b;
        a=b;
        b=temp;
    }
    printf("%d %d",a,b);
    getchar();getchar();
    return 0;
}