//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>
int main() {
    int i, a, b, c, count = 0;
    for (i = 100; i <= 999; i++) {
        a = i / 100;          // 百位
        b = (i / 10) % 10;    // 十位
        c = i % 10;           // 个位
        if (a*a*a + b*b*b + c*c*c == i) {
            if (count > 0) printf(" ");
            printf("%d", i);
            count++;
        }
    }
    printf("\n");
    return 0;
}
