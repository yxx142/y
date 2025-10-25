//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);
    
    // 判断成绩等级
    if (score >= 90 && score <= 100) {
        printf("A\n");
    } else if (score >= 80 && score <= 89) {
        printf("B\n");
    } else if (score >= 70 && score <= 79) {
        printf("C\n");
    } else if (score >= 60 && score <= 69) {
        printf("D\n");
    } else if (score >= 0 && score < 60) {
        printf("E\n");
    } else {
        // 处理无效输入（超出0-100范围的情况）
        printf("Invalid score\n");
    }
    
    return 0;
}
