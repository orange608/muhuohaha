//202510116208
//3481098424@qq.com
//吴纯宇
#include<stdio.h>
int main() {
    int arr[3][3];
    int m, n;
    printf("请输入3×3矩阵的9个元素（每行3个，用空格分隔）：\n");
    for (m = 0; m < 3; m++) {
        for (n = 0; n < 3; n++) {
            scanf("%d", &arr[m][n]);
        }
    }
    printf("\n输入的3×3矩阵为：\n");
    for (m = 0; m < 3; m++) {
        for (n = 0; n < 3; n++) {
            printf("%d ", arr[m][n]);
        }
        printf("\n");
    }
    return 0;
}
