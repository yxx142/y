//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>
int main() {
    int arr[5], i;
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 元素后移一位
    arr[4] = arr[3];
    arr[3] = arr[2];
    arr[2] = arr[1];
    arr[1] = arr[0];
    arr[0] = 0;  // 首位补0
    
    for (i = 0; i < 5; i++) {
        if (i > 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
