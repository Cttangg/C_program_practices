#include<stdio.h>
#include<string.h>
int main()
{
    char a[100]={0};
    //gets(a);
    fgets(a,100,stdin);
    int dot=0,space=0;
    int flag = 0;
    if(a[0] == ' ')flag++;
    if(a[strlen(a)-1] == ' ')flag++;
    printf("%c %c ",a[0],a[strlen(a)-1]);
    printf("%d\n",strlen(a));
    for(int i = 0;i<strlen(a);i++)
    {
        printf("%c",a[i]);
        if(a[i] == '.'){
		printf("found . in %d\n",i);
			dot++;
		}
        if(a[i] == ' ' && a[i+1] != ' ')
		{
		printf("found   in %d\n",i);
			space++;
		}
    }
    printf("%d",flag);
    if(flag == 0 && strlen(a) != 0)
    {
        space++;
    }else if(flag == 1)
    {
    }else if(flag == 2){
        space--;
    }else{
    	//hhh
	}
    /*
    假设有n个' ',m个'.',且'.'后一定有' '，那么
    aaa bb c. dd ee f. gg hh i._
    Hello world. There is bjtu.     I love bjtu. 
    */
    printf("the total word is %d\n",space);
    printf("the total sentence is %d\n",dot);
}

