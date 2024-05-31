#include <stdio.h>
struct date
{
    char day[10];
    char month[10];
    int year;
};
struct employee
{
    char name[20];
    int id;
    float salary;
    struct date dob;
} emp;
void main()
{
    printf("Enter name\n");
    scanf("%s", &emp.name);
    printf("Enter id:\n");
    scanf("%d", &emp.id);
    printf("Enter salary:\n");
    scanf("%f", &emp.salary);
    printf("Enter day:\n");
    scanf("%s", &emp.dob.day);
    printf("Enter month:\n");
    scanf("%s", &emp.dob.month);
    printf("Enter year:\n");
    scanf("%d", &emp.dob.year);
    printf("The information is as follows.\n");
    printf("name=%s,id=%d,salary=%f,day=%s,month=%s,year=%d", emp.name, emp.id, emp.salary, emp.dob.day, emp.dob.month, emp.dob.year);
}
