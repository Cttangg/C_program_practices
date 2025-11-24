#include<stdio.h>
#include<windows.h>
#include<math.h>
//define a function to calculate the total square of a triangle given its three sides
double triangle_area(double a,double b,double c)
{
    double s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
//check if the triangle is valid
int is_valid_triangle(double a,double b,double c)
{
    if(a+b>c && a+c>b && b+c>a)
        return 1;
    else
        return 0;
}
int main()
{
    int a=0,b=0,c=0;
    scanf("%d %d %d",&a,&b,&c);
    if(is_valid_triangle(a,b,c))
        printf("The area of the triangle is: %.2f\n", triangle_area(a,b,c));
    else
        printf("The triangle is not valid.\n");
    Sleep(3000);
    return 0;
}