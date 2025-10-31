//202510116208
//3481098424@qq.com
//吴纯宇
#include <stdio.h>
int main()
{
    int num = 100;
    int first = 1;
    while (num <= 999)
    {
        int bai = num / 100;
        int shi = (num / 10) % 10;
        int ge = num % 10;
        int sum = bai * bai * bai +
            shi * shi * shi +
            ge * ge * ge;
        if (sum == num)
        {
            if (first) 
            {
                printf("%d", num);
                first = 0;
            }
            else
            {
                printf(" %d", num);
            }
        }
        num++;
    }
    return 0;
}
