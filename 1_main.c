//202510306220
//3337641508@qq.com
//杨曦
#include <stdio.h>
int main() {
    int score;
    // 提示输入成绩
    printf("请输入学生成绩（0-100）：");
    // 读取输入的整数成绩
    scanf("%d", &score);
    
    // 判断成绩等级并输出
    if (score >= 90 && score <= 100) {
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
