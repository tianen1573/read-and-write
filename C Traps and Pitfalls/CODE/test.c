#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////int func();
//
//double square(x)
//double x;
//{
//	return x * x;
//}
//
//
////#define EOF -1
//
//char* Malloc(unsigned n)
//{
//	char* p, * malloc(unsigned);
//
//	p = malloc(n);
//
//	if (p == NULL)
//		printf("aaa");
//
//	return p;
//}
//
//main()
//{
//	/*register int c;
//	while ((c = getchar()) != EOF)
//		putchar('a');*/
//
//	//double d = square(2.0);
//
//	int d = (-1) / 2;
//
//	char c = 'ye';
//
//	printf("%c", c);
//}

//int main()
//{
//	/*char a = 'a';
//	printf(&a);
//
//	printf('a');
//
//	printf("a");*/
//
//	/*char a = 'yaa';
//
//	printf("%c", a);*/
//
//	/*char *a = 'yaaa';
//
//	printf("%s", a);*/
//
//	/* /* */ 
//
//	char c = getchar();
//
//	//printf("%d", func(1,2));
//
//	return 0;
//}

//int func(int a, int b)
//{
//	return a + b;
//}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

// 学生结构体
typedef struct {
    char dormitory[20];
    char name[50];
    char studentId[20];
    char phone[20];
    char repairItem[100];
} Student;

// 学生数组
Student students[MAX_STUDENTS];
int studentCount = 0;

// 函数声明
void saveStudentInfo();
void displayRepairItems();
void saveRepairStatus();
void loadStudents();

int main() {
    int choice;
    char username[20];
    char password[20];

    // 加载学生信息
    loadStudents();

    // 登录界面
    printf("登录界面\n");
    printf("1. 学生端\n");
    printf("2. 维修人员端\n");
    printf("请输入选择：");
    scanf("%d", &choice);

    if (choice == 1) {
        // 学生端
        printf("请输入用户名：");
        scanf("%s", username);
        printf("请输入密码：");
        scanf("%s", password);

        // 验证用户名和密码
        // 这里只是简单示例，实际应用中应使用更安全的验证方式
        if (strcmp(username, "student") == 0 && strcmp(password, "123456") == 0) {
            printf("登录成功！\n");
            printf("请输入寝室号：");
            scanf("%s", students[studentCount].dormitory);
            printf("请输入姓名：");
            scanf("%s", students[studentCount].name);
            printf("请输入学号：");
            scanf("%s", students[studentCount].studentId);
            printf("请输入电话：");
            scanf("%s", students[studentCount].phone);
            saveStudentInfo();

            // 显示维修选项
            displayRepairItems();

            // 标记维修完成
            saveRepairStatus();

            printf("感谢使用！\n");
        }
        else {
            printf("用户名或密码错误！\n");
        }
    }
    else if (choice == 2) {
        // 维修人员端
        printf("请输入用户名：");
        scanf("%s", username);
        printf("请输入密码：");
        scanf("%s", password);

        // 验证用户名和密码
        // 这里只是简单示例，实际应用中应使用更安全的验证方式
        if (strcmp(username, "repair") == 0 && strcmp(password, "654321") == 0) {
            printf("登录成功！\n");
            displayRepairItems();

            // 标记维修完成
            saveRepairStatus();

            printf("感谢使用！\n");
        }
        else {
            printf("用户名或密码错误！\n");
        }
    }
    else {
        printf("无效的选择！\n");
    }

    return 0;
}

// 保存学生信息到文件
void saveStudentInfo() {
    FILE* fp = fopen("students.txt", "a");
    if (fp == NULL) {
        printf("无法打开文件！\n");
        return;
    }

    fprintf(fp, "%s %s %s %s\n", students[studentCount].dormitory, students[studentCount].name,
        students[studentCount].studentId, students[studentCount].phone);

    fclose(fp);
    studentCount++;
}

// 显示维修选项
void displayRepairItems() {
    FILE* fp = fopen("repair_items.txt", "r");
    if (fp == NULL) {
        printf("无法打开文件！\n");
        return;
    }

    printf("维修选项：\n");

    char item[100];
    while (fgets(item, sizeof(item), fp) != NULL) {
        printf("%s", item);
    }

    fclose(fp);
}

// 保存维修状态到文件
void saveRepairStatus() {
    FILE* fp = fopen("repair_status.txt", "a");
    if (fp == NULL) {
        printf("无法打开文件！\n");
        return;
    }

    char status[10];
    printf("是否维修完成？(是/否)：");
    scanf("%s", status);

    if (strcmp(status, "是") == 0) {
        fprintf(fp, "维修完成\n");
    }
    else {
        fprintf(fp, "未维修\n");
    }

    fclose(fp);
}

// 加载学生信息
void loadStudents() {
    FILE* fp = fopen("students.txt", "r");
    if (fp == NULL) {
        return;
    }

    while (fscanf(fp, "%s %s %s %s\n", students[studentCount].dormitory, students[studentCount].name,
        students[studentCount].studentId, students[studentCount].phone) != EOF) {
        studentCount++;
    }

    fclose(fp);
}
