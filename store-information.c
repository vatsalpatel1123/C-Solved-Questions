#include<stdio.h>

struct students
{
    int enroll;
    char name[20];
    float cgpa;

}s[50];


int main(){

    int x;

    printf("Enter the number of students: ");
    scanf("%d",&x);

    printf("- Enter students information - \n");

    for (int i = 0; i < x; i++)
    {

       

        printf("Enter the student enrollment no: ");
        scanf("%d",&s[i].enroll);

        printf("Enter the student name: ");
        scanf("%s",&s[i].name);

        printf("Enter the student cgpa: ");
        scanf("%f",&s[i].cgpa);
        
       
    }
    
    printf("\n\nDisplay the student's information:\n");
    for (int i = 0; i < x; i++) {
        
        
        
        printf("\nThe Enrollment Number: \t%d\n",s[i].enroll);
        
        printf("Name: ");
        puts(s[i].name);

        printf("Grade: %f",s[i].cgpa);
      
        printf("\n");
    }

    return 0;
}