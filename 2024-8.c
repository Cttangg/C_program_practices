#include<stdio.h>
#include<windows.h>
#include<math.h>
#define MAX 10
#define PI 3.14
int main() {
    int n = 0;
    double a[MAX][2] = {0};
    scanf("%d",&n);
    for(int i = 0;i < n;i++)
    {
        scanf("%lf",&a[i][0]);
        scanf("%lf",&a[i][1]);
    }
    printf("The certices of the %d-gon are:",n);
    for(int i = 0;i < n;i++)
    {
        printf("(%.2f, %.2f)",a[i][0],a[i][1]);
    }


    double b[1][2];
    scanf("%lf %lf",&b[0][0],&b[0][1]);
    for(int i = 0;i < n;i++)
    {
        if(a[i][0] == b[0][0] && a[i][1] == b[0][1])
        {
            //swap a[i][0] and a[i][1] to a[0][0] and a[0][1]
            int temp = a[i][0];
            a[i][0] = a[0][0];
            a[0][0] = temp;
            
            temp = a[i][1];
            a[i][1] = a[0][1];
            a[0][1] = temp;
        }
    }

    //change

    for(int i = 1;i < n;i++)
    {
        a[i][0] -=a[0][0];
        a[i][1] -=a[0][1];
    }
    a[0][0] = 0;
    a[0][1] = 0;

    double arctan_value[MAX] = {0};
    for(int i = 1;i < n;i++)
    {
        //arctan_value[i] = atan(a[i][1]/a[i][0]);
        //a[i][1]纵坐标,a [i][0]横坐标

        /*
        atan(dy/dx) 的值域是(−π/2,π/2)，只能覆盖第一、四象限。我们需要根据 dx 和 dy 的符号来判断实际象限：
        dx > 0, dy ≥ 0：第一象限，angle = atan(dy/dx)
        dx > 0, dy < 0：第四象限，angle = atan(dy/dx) + 2π
        dx < 0：第二或第三象限，angle = atan(dy/dx) + π
        dx = 0, dy > 0：正y轴，angle = π/2
        dx = 0, dy < 0：负y轴，angle = 3π/2
        dx = 0, dy = 0：同一点，angle = 0
        */

        if(a[i][0] > 0 && a[i][1] >= 0)//第一象限
        {
            arctan_value[i] = atan(a[i][1]/a[i][0]);
        }else if(a[i][0] > 0 && a[i][1] < 0)
        {
            arctan_value[i] = atan(a[i][1]/a[i][0]) + 2*PI;
        }else if(a[i][0] < 0)
        {
            arctan_value[i] = atan(a[i][1]/a[i][0]) + PI;
        }else if(a[i][0] == 0 && a[i][1] > 0)
        {
            arctan_value[i] = PI/2;
        }else if(a[i][0] == 0 && a[i][1] < 0)
        {
            arctan_value[i] = 3*PI/2; 
        }else{
            arctan_value[i] = 0;
        }
    }
    for(int i = 1;i < n;i++)
    {
        for(int j = i + 1;j < n;j++)
        {
            if(arctan_value[i] > arctan_value[j])
            {
                //swap them and a[i][j]
                int temp = 0;
                temp = arctan_value[i];
                arctan_value[i] = arctan_value[j];
                arctan_value[j] = temp;

                temp = a[i][0];
                a[i][0] = a[j][0];
                a[j][0] = temp;

                temp = a[i][1];
                a[i][1] = a[j][1];
                a[j][1] = temp;
            }
        }
        }
    printf("The counterclockwise arrangement of the %d-gon is:",n);
    for(int i = 0;i < n;i++)
    {
        printf("(%.2lf, %.2lf)",a[i][0],a[i][1]);
    }


    // for(int i = 0;i < n-1;i++)
    // {
    //     a1 = sqrt((a[(i)%n][0]-a[(i+1)%n][0])*(a[i][0]-a[i+1][0]) + (a[(i)%n][1]-a[(i+1)%n][1])*(a[(i)%n][1]-a[(i+1)%n][1]));
    //     b1 = sqrt((a[(i+1)%n][0]-a[(i+2)%n][0])*(a[i+1][0]-a[i+2][0]) + (a[(i+1)%n][1]-a[(i+2)%n][1])*(a[(i+1)%n][1]-a[(i+2)%n][1]));
    //     c1 = sqrt((a[(i+2)%n][0]-a[(i)%n][0])*(a[i+2][0]-a[i][0]) + (a[(i+2)%n][1]-a[(i)%n][1])*(a[(i+2)%n][1]-a[(i)%n][1]));
    //     p1 = (a1+b1+c1)/2.0;
    //     sum += sqrt(p1*(p1-a1)*(p1-b1)*(p1-c1));
    // }
    double sum = 0;
    for(int i = 1; i < n-1; i++)  // 从指定顶点开始划分三角形
    {
        double a1 = sqrt((a[0][0]-a[i][0])*(a[0][0]-a[i][0]) + (a[0][1]-a[i][1])*(a[0][1]-a[i][1]));
        double b1 = sqrt((a[i][0]-a[i+1][0])*(a[i][0]-a[i+1][0]) + (a[i][1]-a[i+1][1])*(a[i][1]-a[i+1][1]));
        double c1 = sqrt((a[i+1][0]-a[0][0])*(a[i+1][0]-a[0][0]) + (a[i+1][1]-a[0][1])*(a[i+1][1]-a[0][1]));
        
        double p1 = (a1 + b1 + c1) / 2.0;
        double triangle_area = sqrt(p1 * (p1 - a1) * (p1 - b1) * (p1 - c1));
        sum += triangle_area;
    }
    printf("The area of %d-gon is: %.2lf",n,sum);
    Sleep(3000);
    return 0;
}