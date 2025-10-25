//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    // 获取用户输入的摄氏温度
    scanf("%f", &celsius);
    // 进行温度转换
    fahrenheit = celsius * 9 / 5 + 32;
    // 保留1位小数输出华氏温度
    printf("%.1f\n", fahrenheit);
    return 0;
}
