#include <stdio.h>
#include<math.h>
double dis(int x1,int y1,int x2,int y2){
    return pow(x1-x2,2)+pow(y1-y2,2);
}
int main(){
    int x1,y1,x2,y2;
    int N;
    printf("enter the intitial location of system\n");
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    printf("the amount of missile:\n");
    scanf("%d",&N);
    double a[1000][2]={0};
    for(int i=0;i<N;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        a[i][0]=dis(x,y,x1,y1);
        a[i][1]=dis(x,y,x2,y2);
    }
    //降序排序
    for(int i=0;i<N-1;i++){
        int MAX_index=i;
        for(int j=i+1;j<N;j++){
            if(a[MAX_index][0]<a[j][0]){
                MAX_index=j;
            }
            // 交换两列数据
            double temp0 = a[i][0];
            double temp1 = a[i][1];
            a[i][0] = a[MAX_index][0];
            a[i][1] = a[MAX_index][1];
            a[MAX_index][0] = temp0;
            a[MAX_index][1] = temp1;
        }
        double temp=a[i][0];
        a[i][0]=a[MAX_index][0];
        a[MAX_index][0]=temp;
    }
    double r1,r2;
    r1=a[0][0];
    r2=0.0;
    double temp=r1;
    for(int i=1;i<N;i++){//不断缩减r1的半径，从而遍历比较找到r1+r2的最小值
        r1=a[i][0];
        int index=0;
        for(int j=i;j>=0;j--){//找到前i项的r2系统的最大值的索引值
            if(a[index][1]<=a[j][1]){
                index=j;
            }
        }
        r2=a[index][1];
        if(r1+r2<=temp){
            temp=r1+r2;
        }
    }
    printf("%d",(int)temp);
    return 0;
}