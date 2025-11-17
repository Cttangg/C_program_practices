#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int power(int a){//阶乘
    int num=1;
    for(int i = a ; i >= 1 ; i--){
        num = num * i;
    }
    return num;
}
int arrange(int a , int b ){//排列数
    int num=1;
    // for(int i = a ; i >= a-b+1 ; i--){
    //     num = num * i;
    // }
    num = power(a)/power(a-b);
    return num;
}
int combine(int a , int b ){//组合数
    int num=1;
    num=arrange(a,b)/arrange(b,b);
    return num;
}
int main(){
    // int a=0;
    // int b=0;
    // scanf("%d %d",&a,&b);
    // printf("%d\n",power(a));
    // printf("%d\n",arrange(a,b));
    // printf("%d\n",combine(a,b));
    // int c=1;
    // while(c<=10001){
    //     printf("%d ",c);
    //     c+=2;
    // }
    // int sum=0,b=0;
    // scanf("%d",&sum);
    // do
    // {
    //     b = b*10 + sum%10;
    //     sum /=10;
    // }
    // while(sum!=0);
    // printf("%d",b);
    // double sum = 0;
    // int i = 1;
    // while (1)
    // {
    //     double temp=1;
    //     temp /= i;
    //     if(i/2%2 == 0)
    //     {
    //         sum += temp;
    //     }else{
    //         sum -= temp;
    //     }
    //     i+=2;
    //     if(temp<=0.000000001){
    //         break;
    //     }
    // }
    // printf("%.9f",sum*4);
    // long long a = 1;
    // for(int i = 1;i<=10;i++)
    // {
    //     long long temp = 1;
    //     for(int j = 1;j <= i;j++)
    //     {
    //         temp = temp * j;
    //     }
    //     a = a + temp;
    // }
    // printf("%d",a);
    // char a;
    // int flag = 0;
    // while(1)
    // {
    //     a = getchar();
    //     printf("%c",a);
    //     if(a == '*'){
    //         break;
    //     }else if((a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z'))
    //     {
    //         continue;
    //     }else{
    //         flag++;
    //     }
    // }
    // printf("%d",flag);
    // for(int i = 100;i <= 200;i++){
    //     if(i%10 != 0)
    //     {
    //         continue;
    //     }
    //     printf("%d",i);
    // }
    // float a[5] = {1,2,3,4,5},max = a[0];
    // for(int i = 0;i < 5;i++)
    // {
    //     if(max < a[i])
    //     {
    //         max = a[i];
    //     }
    // }
    // printf("%f",max);
    // float a[5] = {3,10,7,25,100};
    // for(int i = 0;i < 5;i++)
    // {
    //     if(a[i] > 10)
    //     {
    //         a[i] =  a[i]*0.8;
    //     }
    //     printf("%f ",a[i]);
    // }
    // int len = 0;
    // char str[100]={"Hello world!!!"};
    // len=strlen(str);
    // printf("%d",len);
    // getchar();getchar();
    char str[100] = {0};
    fgets(str,100,stdin);
    int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    printf("%d",count-1);
    //compare str and str1 without using strcmp
    char str1[100];
    fgets(str1,100,stdin);
    int flag = 0;
    for(int i = 0;i < count;i++){
        if(str[i] > str1[i])
        {
            printf("str is greater than str1");
            flag = 1;
            break;
        }else if (str[i] < str1[i])
        {
            printf("str is less than str1");
            flag = 1;
            break;
        }else{
            continue;
        }
    }
    if(!flag){
        printf("str is equal to str1");
    }
    char str2[200] = {0};
    strcat(str2,str);
    strcat(str2,str1);
    system("pause");
    return 0;
}