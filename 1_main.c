//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>

int main() {
    int nums[10];
    // 输入10个数
    for (int i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }
    // 冒泡排序
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    // 输出排序结果
    for (int i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}
