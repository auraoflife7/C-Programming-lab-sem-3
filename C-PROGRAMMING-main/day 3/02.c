#include <stdio.h>

struct employee
{
    int empid;
    char empname[100];

    struct salary
    {
        float basicpay;
        float da;
        float hra;
        float cca;
    } salary;
};

int main()
{
    struct employee e1;
    float gross_salary;

    printf("Enter Employee ID: ");
    scanf("%d", &e1.empid);

    printf("Enter Employee Name: ");
    scanf("%s", e1.empname);

    printf("Enter Basic Pay: ");
    scanf("%f", &e1.salary.basicpay);

    printf("Enter DA: ");
    scanf("%f", &e1.salary.da);

    printf("Enter HRA: ");
    scanf("%f", &e1.salary.hra);

    printf("Enter CCA: ");
    scanf("%f", &e1.salary.cca);

    gross_salary = e1.salary.basicpay + e1.salary.da + e1.salary.hra + e1.salary.cca;

    printf("\nEmployee ID: %d\n", e1.empid);
    printf("Employee Name: %s\n", e1.empname);
    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}