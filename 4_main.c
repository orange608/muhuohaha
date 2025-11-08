//202510116208
//3481098424@qq.com
//吴纯宇
#include <stdio.h>
int h(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}
int main() {
    int sum = h(1, 2) + h(2, 2) +h(3, 2) + h(4, 2) + h(5, 2);
    printf("%d\n", sum);
    return 0;
}
