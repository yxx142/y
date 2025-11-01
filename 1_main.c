//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>
int main() {
    int i = 100, a, b, c, count = 0;
    while (i <= 999) {
        a = i / 100;
        b = (i / 10) % 10;
        c = i % 10;
        if (a*a*a + b*b*b + c*c*c == i) {
            if (count > 0) printf(" ");
            printf("%d", i);
            count++;
        }
        i++;
    }
    printf("\n");
    return 0;
}
