//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>
int main() {
    int score;
    printf("请输入成绩(0-100): ");
    scanf("%d", &score);
    
    if (score >= 90 && score <= 100) {
        printf("A\n");
    } else if (score >= 80) {
        printf("B\n");
    } else if (score >= 70) {
        printf("C\n");
    } else if (score >= 60) {
        printf("D\n");
    } else if (score >= 0) {
        printf("E\n");
    } else {
        printf("输入错误\n");
    }
    
    return 0;
}
