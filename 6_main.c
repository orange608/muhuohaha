//202510116208
//3481098424@qq.com
//吴纯宇
#include <stdio.h>
int h(int arr[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}
int h2(int arr[], int length) {
    int j = 1;
    for (int i = 0; i < length; i++) {
        j *= arr[i];
    }
    return j;
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = h(arr, 5);
    int j = h2(arr, 5);
    printf("%d %d\n", sum, j);
    return 0;
}
