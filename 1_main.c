//202510116208
//3481098424@qq.com
//吴纯宇
#include <stdio.h>
int main() 
{ 
    printf("请输入密钥:");
    int n;
    scanf("%d", &n);
    if (n <= 0 || n >= 50) {
        printf("密钥不安全，请重新输入");
        return 0;
    }
    if (n == 1) {
        printf("密钥不安全，请重新输入");
        return 0;
    }
    int isPrime = 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime) {
        printf("密钥安全，密码设置成功");
    }
    else {
        printf("密钥不安全，请重新输入");
    }
    return 0;
}
