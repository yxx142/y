//202510306220
//3337641508@qq.com
//杨曦
# 输入成绩并转换为整数
score = int(input("请输入学生成绩（0-100）："))

# 判断等级
if score >= 90 and score <= 100:
    print("A")
elif score >= 80:
    print("B")
elif score >= 70:
    print("C")
elif score >= 60:
    print("D")
else:
    print("E")
