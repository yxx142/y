//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>

int main() {
    int score;
    
    // 获取用户输入
    printf("请输入学生的成绩（0-100）：");
    scanf("%d", &score);
    
    // 验证输入范围
    if (score < 0 || score > 100) {
        printf("输入错误！成绩应该在0-100之间。\n");
        return 1;
    }
    
    // 判断成绩等级（从高分到低分判断）
    if (score >= 90) {
        printf("A\n");
    } else if (score >= 80) {
        printf("B\n");
    } else if (score >= 70) {
        printf("C\n");
    } else if (score >= 60) {
        printf("D\n");
    } else {
        printf("E\n");
    }
    
    return 0;
}
