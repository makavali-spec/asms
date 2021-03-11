#include <stdio.h>
#include <stdlib.h>
# include <unistd.h>
#define MAX 90

char name[30];
char gender[7];
int phone[20];
char email[30];
char date[30];
char unit_name[10];
char unit_code[10];
int year[4];
char sem;
int check;
int i;
int marks[3];

void register_student();
void register_course();
void course_detail();
void student_marks();
void transcript();
void chec();

int main()
{
    for(;;) if(!(check)|| check==6) break;
    chec();
}

void chec()
{
    printf("\n\n\n");
    printf("\t\t\t******************************************************\n");
    printf("\t\t\t\tWelcome to new face technical college ASMS\n");
    printf("\t\t\t******************************************************\n");
    printf("\t\t\t\t1. Register new student\n");
    printf("\t\t\t\t2. Register student to a course\n");
    printf("\t\t\t\t3. Check registered course details\n");
    printf("\t\t\t\t4. Enter student marks\n");
    printf("\t\t\t\t5. Student transcript\n");
    printf("\t\t\t\t6. Close app\n\n\n");
    printf("Enter number: ");
    scanf("%d", &check);
    if(check==1)
    {
        register_student();
    }
    else if(check==2)
    {
        register_course();
    }
    else if(check==3)
    {
        course_detail();
    }
    else if(check==4)
    {
        student_marks();
    }
    else if(check==5)
    {
        transcript();
    }
    else if(check==6)
    {
        printf("\t\t\tApplication closed successfully.\n\n\n");
        sleep(1);
    }

    else if(printf("Invalid choice"));

}

void register_student()
{
    printf("Enter student's name: \n");
    scanf("%s %s %s", &(name[i]), &(name[i]), &(name[i]));
    fgets(name, 30, stdin);
    printf("\n\n");
    //scanf("%s %s", &name, &name);
    //name[i]=name;
    printf("Enter gender:\n");
    scanf("%s", &(gender[i]));
    printf("\n\n");
    //fgets(gender, 7, stdin);
    printf("Enter phone number: \n");
    scanf("%d", &(phone[i]));
    printf("\n\n");
    printf("Data successfully saved");
    printf("\n\n\n");
    sleep(1);
    //
    //return 0;
}
void register_course()
{
    printf("Enter unit name:\n");
    scanf("%s", &(unit_name[i]) );
    fgets(unit_name, sizeof(unit_name), stdin);
    printf("\n\n");

    printf("Enter unit name:\n");
    scanf("%s", &(unit_name[i]) );
    //fgets(unit_name, sizeof(unit_name), stdin);
    printf("\n\n");

    printf("Enter unit name:\n");
    scanf("%s", &(unit_name[i]) );
    fgets(unit_name, sizeof(unit_name), stdin);
    printf("\n\n");

    printf("Enter unit name:\n");
    scanf("%s", &(unit_name[i]) );
    fgets(unit_name, sizeof(unit_name), stdin);
    printf("\n\n");

    printf("Enter unit name:\n");
    scanf("%s", &(unit_name[i]) );
    fgets(unit_name, sizeof(unit_name), stdin);
    printf("\n\n");

    printf("Enter unit name:\n");
    scanf("%s", &(unit_name[i]) );
    fgets(unit_name, sizeof(unit_name), stdin);

    printf("\n\n\n");
}
void course_detail()
{
    printf("Registered course details\n");
    fputs(unit_name, stdout);
    printf("%s %s %s", name, name, name);
    printf("\n\n\n");
}
void student_marks()
{
    printf("Enter student's marks\n");
    scanf("%i", &(marks[i]));
    printf("\n\n\n");
}
void transcript()
{
    printf("Transcript");
    printf("\n\n\n");
}

