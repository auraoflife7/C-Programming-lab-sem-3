#include <stdio.h>
struct student
{
    int rollno;
    char name[100];
    float marks[5];
};

int main()
{
    struct student s1;
    struct student s2;
    struct student s3;
    struct student s4;
    struct student s5;

    printf("Enter Roll number for Student 1: \n");
    scanf("%d", &s1.rollno);
    printf("Enter name for Student 1: \n");
    scanf("%s", s1.name);
    printf("Enter marks for 5 subjects: \n");
    for(int i=0;i<5;i++)
        scanf("%f", &s1.marks[i]);
    float total_marks1 = s1.marks[0] + s1.marks[1] + s1.marks[2] + s1.marks[3] + s1.marks[4];

    printf("\nEnter Roll number for Student 2: \n");
    scanf("%d", &s2.rollno);
    printf("Enter Name for Student 2: \n");
    scanf("%s", s2.name);
    printf("Enter marks for 5 subjects: \n");
    for(int i=0;i<5;i++)
        scanf("%f", &s2.marks[i]);
    float total_marks2 = s2.marks[0] + s2.marks[1] + s2.marks[2] + s2.marks[3] + s2.marks[4];

    printf("\nEnter Roll number for Student 3: \n");
    scanf("%d", &s3.rollno);
    printf("Enter Name for Student 3: \n");
    scanf("%s", s3.name);
    printf("Enter marks for 5 subjects: \n");
    for(int i=0;i<5;i++)
        scanf("%f", &s3.marks[i]);
    float total_marks3 = s3.marks[0] + s3.marks[1] + s3.marks[2] + s3.marks[3] + s3.marks[4];

    printf("\nEnter Roll number for Student 4: \n");
    scanf("%d", &s4.rollno);
    printf("Enter Name for Student 4: \n");
    scanf("%s", s4.name);
    printf("Enter marks for 5 subjects: \n");
    for(int i=0;i<5;i++)
        scanf("%f", &s4.marks[i]);
    float total_marks4 = s4.marks[0] + s4.marks[1] + s4.marks[2] + s4.marks[3] + s4.marks[4];

    printf("\nEnter Roll number for Student 5: \n");
    scanf("%d", &s5.rollno);
    printf("Enter Name for Student 5: \n");
    scanf("%s", s5.name);
    printf("Enter marks for 5 subjects: \n");
    for(int i=0;i<5;i++)
        scanf("%f", &s5.marks[i]);
    float total_marks5 = s5.marks[0] + s5.marks[1] + s5.marks[2] + s5.marks[3] + s5.marks[4];

    printf("\nRoll number for Student 1: %d\n", s1.rollno);
    printf("Name for Student 1: %s\n", s1.name);
    printf("Total marks for Student 1: %.2f out of 500\n", total_marks1);

    printf("\nRoll number for Student 2: %d\n", s2.rollno);
    printf("Name for Student 2: %s\n", s2.name);
    printf("Total marks for Student 2: %.2f out of 500\n", total_marks2);

    printf("\nRoll number for Student 3: %d\n", s3.rollno);
    printf("Name for Student 3: %s\n", s3.name);
    printf("Total marks for Student 3: %.2f out of 500\n", total_marks3);

    printf("\nRoll number for Student 4: %d\n", s4.rollno);
    printf("Name for Student 4: %s\n", s4.name);
    printf("Total marks for Student 4: %.2f out of 500\n", total_marks4);

    printf("\nRoll number for Student 5: %d\n", s5.rollno);
    printf("Name for Student 5: %s\n", s5.name);
    printf("Total marks for Student 5: %.2f out of 500\n", total_marks5);

    return 0;
}