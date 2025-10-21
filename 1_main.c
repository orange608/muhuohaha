#include<stdio.h>
int main()
{
    float a = 0;
    printf("请输入你的摄氏温度：");
    scanf("%f", &a);
    printf("你的华氏温度为3.1%f", a*9/5+32);
    return 0;
}
