//202510116208
//3481098424@qq.com
//吴纯宇
#include<stdio.h>
int main()
{	
	int a = 0;
	printf("请输入成绩");
	scanf("%d",&a);
	if (a>=90&&a<=100) {
		printf("A");
	}
	else if (a>=80&&a<=89) {
		printf("B");
	}
	else if (a>=70&&a<=79) {
		printf("C");
	}
	else if (a>=60&&a<=69) {
		printf("D");
	}
	else if (a<60) {
		printf("E");
	}
	return 0;
}
