//202510116208
//3481098424@qq.com
//吴纯宇
#include <stdio.h>
int main() 
{
    int arr[5];
    int i;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 4; i > 0; i--) 
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = 0;
    for (i = 0; i < 5; i++)
    {
        if (i == 0) 
        {
            printf("%d", arr[i]);
        }
        else
        {
            printf(" %d", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
