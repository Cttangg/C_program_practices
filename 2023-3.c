#include<stdio.h>
#include<windows.h>
/*计算整数之和并排序 
【题目描述】 
编写程序计算输入的整数之和，输入的数不超过 5 个。当输入整数之和超过 50 时或者输入数字个数达到 5
个时停止，将参与求和的整数按降序输出。 
*/
int main()
{
    int a[5]={0},t,sum=0,n=0,num=0;
    for(int i = 0; i < 5; i++)
    {   
        if(scanf("%d", &num) == 1)  // Check if input is successful
        {
            a[n] = num;         // Store in array
            sum += num;             // Add to sum
            n++;                // Increase count
            
            // Stop if sum exceeds 50 or we have 5 numbers
            if(sum > 50 || n == 5)
                break;
        }
    }
    
    // for(int i =0;scanf("%d",&a[i]) == 1;i++)
    // {
    //     if(sum > 50 || n>5)
    //     {
    //         break;
    //     }
    //     scanf("%d ",&a[i]);
    //     sum +=a[i];
    //     n++;
    // }
    //print a[]
    printf("The original input is:");
    for(int i = 0;i < n;i++)
    {
        printf(" %d",a[i]);
    }
    //rank it!
    for(int i = 0;i < n;i++)
    {
        for(int j = 0 ;j < n;j++)
        {
            if(a[i]<a[j])
            {
                //then swap them
                int temp = a[i];
                a[i] = a[j];
                a[i] = temp;
            }
        }
    }
    //print a[]
    printf("The sorted input is:");
    for(int i = 0;i < n;i++)
    {
        printf(" %d",a[i]);
    }
    // getchar();getchar();
    Sleep(2000);
    return 0;
}