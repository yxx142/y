//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>

// 反转数组元素
void reverseArray(int arr[], int length) {
    for (int i = 0; i < length / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
}

int main() {
    int arr[5];
    // 输入数组
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    // 反转数组
    reverseArray(arr, 5);
    // 输出反转结果（最后一个元素后无空格）
    for (int i = 0; i < 5; i++) {
        if (i == 4) {
            printf("%d", arr[i]);
        } else {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
