#include "student.h"
#include <string.h>
#include <stdio.h>
#define N 100

void inputed_details(student *p1, int student_num){
printf("\n\t\t __ STUDENT INPUT __ \t\t\n");
for (int i = 0; i < student_num; i++){
    printf("\n\t\t\t__student %d__ \t\t\t\n", i + 1);
printf("Enter student %d name: \t",i + 1);
fgets(p1[i].name, N, stdin);
p1[i].name[strcspn(p1[i].name, "\n")] = 0;

printf("Enter student %d score: \t", i + 1);
scanf("%d", &p1[i].score);
getchar();

printf("Enter the studentID number: \t");
fgets(p1[i].student_id,  N, stdin);
p1[i].student_id[strcspn(p1[i].student_id, "\n")] = 0;


printf("Enter the student Department: \t");
fgets(p1[i].department, N, stdin);
p1[i].department[strcspn(p1[i].department, "\n")] = 0;
}

}
