//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>
int main() {
    int arr[5], i, sum = 0;
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    arr[4] = sum;
    
    for (i = 0; i < 5; i++) {
        if (i > 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
