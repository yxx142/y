//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>
int main() {
    int arr[5], num, i = 0;
    while (i < 5) {
        scanf("%d", &num);
        if (num % 2 == 0) {  // 仅保留偶数
            arr[i] = num;
            i++;
        }
    }
    
    for (i = 0; i < 5; i++) {
        if (i > 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
