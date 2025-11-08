//202510116208
//3481098424@qq.com
//吴纯宇
#include <stdio.h>
int h(int a1, int an, int step) {
    int n = (an - a1) / step + 1;
    return (a1 + an) * n / 2;
}

int main() {
    int sum = h(1, 100, 1);
    printf("%d\n", sum);
    return 0;
}
