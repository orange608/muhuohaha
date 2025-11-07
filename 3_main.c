//202510116208
//3481098424@qq.com
//吴纯宇
#include <stdio.h>
int main() {
    int a[10];
    int i, j;
    int t; 
    printf("请输入10个整数，用空格分开：\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (a[j] > a[j + 1]) {
                t = a[j]; 
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    printf("从小到大排序后：\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
