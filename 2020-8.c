/*现今人们都非常注重自己的日常锻炼，计步作为一种有效记录锻炼的监控手段，被广泛应用在移动终端的应用
中。手机通过采集加速度传感器垂直方向的数值来判定行走步数，图1为行走过程中垂直方向加速度曲线轨
迹，每走一步就会产生一组峰值（包含一个波峰和波谷）。 
编程要求：所有浮点数输出精确到小数点后4位，请不要改动题目给出的部分代码，只需要补全代码实现功
能。 

第1小题（6分）（一维数组，求极值）★★★ 
给定一组行走过程中采集的垂直加速度值，编程判定峰值出现位置并统计波峰和波谷个数，打印波峰及波
谷的总个数、索引位置和数值。详见期望输出。 
编程步骤提示： 
• 统计波峰和波谷：从第二个数组元素开始到倒数第二个，遍历给定数组的所有元素。如果当前数组元
素数值比相邻元素（包括前后）值都大，则判定为波峰，元素索引值写入数组index，峰值类型写入
• 定义数组index[N],type[N]，分别记录峰值出现位置（即在给定数组az中的下标）和峰值种类（1
为波峰，-1为波谷）。 
数组type，波峰总数加1；如果比相邻元素值都小则判定为波谷，操作与波峰相同，波谷总数加1。
需要定义变量来记录数组index和type的真实元素个数。 
• 打印波峰或波谷，需要根据type数组元素值来判断是否打印当前数组元素值。 
部分代码： 
*/
#include<stdio.h> 
#define N 20 
 
/* vertical acceleration */ 
const static float az[N]={-0.0815,-0.4429,0.1076,0.0485,0.3695,0.4920, 
0.8371,0.1004,0.0908,0.6239,-0.2191,0.1728,-1.1820,0.7978,0.2940, -0.8045,-0.1717,-0.2917,0.1296,-0.1868}; 
 
int main() 
{ 
    int index[N]; // array store the peak index 
    int type[N];  // array store the peak type  
    /* 补全代码 */ 
    int flag = 0;
    int count_peak = 0;
    int count_valley = 0;
    for(int i = 1;i < N-1;i++)
    {   
        //count peak;
        if(az[i] > az[i-1] && az[i] > az[i+1])
        {
            index[flag] = i;
            type[flag] = 1;
            flag++;
            count_peak++;
        }
        //count valley;
        if(az[i] < az[i-1] && az[i] < az[i+1])
        {
            index[flag] = i;
            type[flag] = -1;
            flag++;
            count_valley++;
        }
    }
    printf("the total number of crests = %d",count_peak);
}