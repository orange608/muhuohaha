//202510116208
//3481098424@qq.com
//吴纯宇
#include<stdio.h>
int main()
{
	int a,b,c = 0;
	scanf("%d,%d,%d", &a, &b, &c);
	if ((a + b) > c && (a + c) > b && (b + c) > a) {
		printf("可以组成三角形");
	}
	else {
		printf("不能组成三角形");
	}
}
