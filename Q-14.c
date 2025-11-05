#include <stdio.h>

struct student_Data
{
    int Roll_No;
    char name[10];
    char course[10];
    int Year;
};

int main()
{
    struct student_Data student_1;

    printf("Enter Roll No\n");
    scanf("%d", &student_1.Roll_No);

    printf("Enter Name\n");
    scanf("%s", &student_1.name);

    printf("Enter Course\n");
    scanf("%s", &student_1.course);

    printf("Enter Year\n");
    scanf("%d", &student_1.Year);

    printf("Student Data.....\n");

    printf("Roll No :%d\n",student_1.Roll_No);
    printf("Name :%s\n",student_1.name);
    printf("Course :%s\n",student_1.course);
    printf("Year :%d\n",student_1.Year);
}