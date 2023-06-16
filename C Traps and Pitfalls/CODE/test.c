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

// ѧ���ṹ��
typedef struct {
    char dormitory[20];
    char name[50];
    char studentId[20];
    char phone[20];
    char repairItem[100];
} Student;

// ѧ������
Student students[MAX_STUDENTS];
int studentCount = 0;

// ��������
void saveStudentInfo();
void displayRepairItems();
void saveRepairStatus();
void loadStudents();

int main() {
    int choice;
    char username[20];
    char password[20];

    // ����ѧ����Ϣ
    loadStudents();

    // ��¼����
    printf("��¼����\n");
    printf("1. ѧ����\n");
    printf("2. ά����Ա��\n");
    printf("������ѡ��");
    scanf("%d", &choice);

    if (choice == 1) {
        // ѧ����
        printf("�������û�����");
        scanf("%s", username);
        printf("���������룺");
        scanf("%s", password);

        // ��֤�û���������
        // ����ֻ�Ǽ�ʾ����ʵ��Ӧ����Ӧʹ�ø���ȫ����֤��ʽ
        if (strcmp(username, "student") == 0 && strcmp(password, "123456") == 0) {
            printf("��¼�ɹ���\n");
            printf("���������Һţ�");
            scanf("%s", students[studentCount].dormitory);
            printf("������������");
            scanf("%s", students[studentCount].name);
            printf("������ѧ�ţ�");
            scanf("%s", students[studentCount].studentId);
            printf("������绰��");
            scanf("%s", students[studentCount].phone);
            saveStudentInfo();

            // ��ʾά��ѡ��
            displayRepairItems();

            // ���ά�����
            saveRepairStatus();

            printf("��лʹ�ã�\n");
        }
        else {
            printf("�û������������\n");
        }
    }
    else if (choice == 2) {
        // ά����Ա��
        printf("�������û�����");
        scanf("%s", username);
        printf("���������룺");
        scanf("%s", password);

        // ��֤�û���������
        // ����ֻ�Ǽ�ʾ����ʵ��Ӧ����Ӧʹ�ø���ȫ����֤��ʽ
        if (strcmp(username, "repair") == 0 && strcmp(password, "654321") == 0) {
            printf("��¼�ɹ���\n");
            displayRepairItems();

            // ���ά�����
            saveRepairStatus();

            printf("��лʹ�ã�\n");
        }
        else {
            printf("�û������������\n");
        }
    }
    else {
        printf("��Ч��ѡ��\n");
    }

    return 0;
}

// ����ѧ����Ϣ���ļ�
void saveStudentInfo() {
    FILE* fp = fopen("students.txt", "a");
    if (fp == NULL) {
        printf("�޷����ļ���\n");
        return;
    }

    fprintf(fp, "%s %s %s %s\n", students[studentCount].dormitory, students[studentCount].name,
        students[studentCount].studentId, students[studentCount].phone);

    fclose(fp);
    studentCount++;
}

// ��ʾά��ѡ��
void displayRepairItems() {
    FILE* fp = fopen("repair_items.txt", "r");
    if (fp == NULL) {
        printf("�޷����ļ���\n");
        return;
    }

    printf("ά��ѡ�\n");

    char item[100];
    while (fgets(item, sizeof(item), fp) != NULL) {
        printf("%s", item);
    }

    fclose(fp);
}

// ����ά��״̬���ļ�
void saveRepairStatus() {
    FILE* fp = fopen("repair_status.txt", "a");
    if (fp == NULL) {
        printf("�޷����ļ���\n");
        return;
    }

    char status[10];
    printf("�Ƿ�ά����ɣ�(��/��)��");
    scanf("%s", status);

    if (strcmp(status, "��") == 0) {
        fprintf(fp, "ά�����\n");
    }
    else {
        fprintf(fp, "δά��\n");
    }

    fclose(fp);
}

// ����ѧ����Ϣ
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
