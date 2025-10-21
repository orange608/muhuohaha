//202510116208
//3481098424@qq.com
//吴纯宇
#include<stdio.h>
int main()
{
	int a, b = 0;
	char op = 0;
	scanf("%d,%d,%c", &a,&b,&op);
	switch (op) {
	case '+':
		printf("%d\n", a + b);
		break;
	case '-':
		printf("%d\n", a - b);
		break;
	case '*':
		printf("%d\n", a * b);
		break;
	case '/':
		if (b != 0) {
			printf("%.2f\n",(float)a / b);
		}
		else {
			printf("除数不能为0\n");
		}
		break;
	default:
		printf("无效的运算符");
	}
	return 0;
}
