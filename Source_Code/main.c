#include <stdio.h>
#include "student.h"
#include <string.h>
#include "calc.h"
#include "score_grader.h"
#define N 100

int main(){
    int student_num;
    char course_name[N];
    int op_choice;
    char repeat[N];
printf("\n Good day,its nice to see you on-board today\n");
printf("Enter the number of the student: \t");
scanf("%d", &student_num);
getchar();

printf("Enter the Course name: \t");
fgets(course_name, N, stdin);
course_name[strcspn(course_name, "\n")] = 0;

student p1[N];

inputed_details(p1, student_num);

do{
printf("\n This are the avaialable program in this project:\n");
printf("\n 1. Display the average score for the total student");
printf("\n 2. Display Each student with their respectives grade");
printf("\n 3. Display the full result of the student");
printf(" \n Enter your choice: \t");
scanf("%d", &op_choice);


if(op_choice == 1){
        printf("\n\n");
average_checker(p1, student_num);
}
else if(op_choice == 2){
result_grader(p1, student_num);
} else if(op_choice == 3){
grader(p1, student_num);
student_full_result_display(p1, student_num, course_name);
}
else{
    printf("\n\n You entered an incorrect input!!! \n");
}


printf("\n Do you wish to continue: \t");
scanf("%s", repeat);

}while((strcmp(repeat, "yes") == 0) || (strcmp(repeat, "YES")== 0));

printf("\n Nice having you on-board today!!! \n");


return 0;
}
