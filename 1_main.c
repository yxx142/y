//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>

// 计算数组元素和
int arraySum(int arr[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}

// 计算数组元素积
int arrayProduct(int arr[], int length) {
    int product = 1;
    for (int i = 0; i < length; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {
    int arr[5];
    // 输入数组
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    // 输出和与积
    printf("%d %d\n", arraySum(arr, 5), arrayProduct(arr, 5));
    return 0;
}
