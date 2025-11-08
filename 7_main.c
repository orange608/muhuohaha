//202510116208
//3481098424@qq.com
//吴纯宇
#include <stdio.h>
void h(int arr[], int length) {
    int i;
    for (i = 0; i < length / 2; i++) {
        int q;
        q = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = q;
    }
}

int main() {
    int arr[5] = { 1, 2, 3, 4, 5 };
    int i;
    h(arr, 5);
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
