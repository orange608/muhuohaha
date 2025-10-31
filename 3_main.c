//202510116208
//3481098424@qq.com
//吴纯宇
#include <stdio.h>
int main() 
{
    int n = 0;
    scanf("%d", &n);
    if (n == 1) 
    {
        printf("密钥不安全，请重新输入");
        return 0;
    }
    int i = 2;
    int is_prime = 1;
    while (i < n) 
    {
        if (n % i == 0) 
        { 
            is_prime = 0;
            break;
        }
        i++;
    }
    if (is_prime) 
    {
        printf("密钥安全，密码设置成功");
    }
    else 
    {
        printf("密钥不安全，请重新输入");
    }

    return 0;
}
