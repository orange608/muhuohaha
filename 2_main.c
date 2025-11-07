//202510116208
//3481098424@qq.com
//吴纯宇
#include <stdio.h>
int main() {
    int arr[3][3];
    int carr[3][3];
    int i, j;
    printf("请输入3×3矩阵的9个元素（每行3个，空格分隔）：\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            carr[j][i] = arr[i][j];
        }
    }
    printf("\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", carr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
