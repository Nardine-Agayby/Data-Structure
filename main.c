#include <stdio.h>
#include <stdlib.h>

typedef struct {                 //global declaration, can be read in different functions
char first[20];                    //changing name of type of struct
char last[20];
unsigned char age;
unsigned char grade;
} STUDENT;

int aver_grades(const STUDENT *student,int n) //call by reference      constant so function would read only and not change member values
{
    int average=0;
    for(int i=0;i<n;i++)
    {
        average+=student[i].grade;
    }
    average=average/n;
    return average;
}
void main()
{
    int aver =0;
    char n=0;
    printf("Enter number of students\n");
    scanf("%d",&n);
    STUDENT student[n];
    for(int i=0;i<n;i++)
    {
        printf("\n\n\t\*\*\*\*\*\*\*\*\*\*\*For student number %d\*\*\*\*\*\*\*\*\*\*\*\n",i+1);    //tp print asterisk * must put (\*)
        /*printf("First name\n");
        scanf("%s",&student[i].first);
        printf("\nLast name\n");
        scanf("%s",&student[i].last);
        printf("\nAge\n");
        scanf("%d",&student[i].age);*/
        printf("\nGrade\n");
        scanf("%d",&student[i].grade);    //
    }
    aver=aver_grades(&student,n);
    printf("\nAverage grade= %d",aver);


}
