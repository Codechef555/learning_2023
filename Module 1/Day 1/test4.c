#include <stdio.h>

int main()
{
    int rollno;
    char name[60];
    float physicsMarks,mathMarks,chemMarks,totalMarks,percentage;
    printf("Enter the Roll No: ");
    scanf("%d",&rollno);

    printf("Enter the candidate Name: \n");
    scanf(" %[^\n]s",name);

    printf("\nEnter the Marks of Physics: ");
    scanf("%f",&physicsMarks);

    printf("\nEnter Marks of Math: ");
    scanf("%f", &mathMarks);

    printf("\nEnter Marks of Chemistry: ");
    scanf("%f", &chemMarks);

    totalMarks = physicsMarks + chemMarks + mathMarks;
    percentage = (totalMarks / 300.0) * 100.0;

    printf("\n------ Student Summary ------\n");
    printf("Roll No: %d\n", rollno);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physicsMarks);
    printf("Math Marks: %.2f\n", mathMarks);
    printf("Chemistry Marks: %.2f\n", chemMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);



}
