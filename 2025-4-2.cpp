#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000]={0};
    gets(a);//hahahahahahahahahaha
    //fgets(a,1000,stdin);
    //so strange!
    int dot=0,space=0;
    int flag = 0;
    if(a[0] == ' ')flag++;
    if(a[strlen(a)-1] == ' ')flag++;//hhh
    for(int i = 0;i<strlen(a);i++)
    {
        //printf("%c",a[i]);
        if(a[i] == '.')dot++;
        if(a[i] == ' ' && a[i+1] != ' ')space++;
    }
    if(flag == 0 && strlen(a) != 0)//hhhhhhhhhh
    {
        space++;
    }else if(flag == 1)
    {
    }else if(flag == 2){
        space--;
    }else{
        //hhhhhhhhhh
    }
    /*
    假设有n个' ',m个'.',且'.'后一定有' '，那么
    aaa bb c. dd ee f. gg hh i. 
    */
    printf("the total word is %d\n",space);
    printf("the total sentence is %d\n",dot);
}
