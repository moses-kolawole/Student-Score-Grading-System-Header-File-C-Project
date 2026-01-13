#include "calc.h"
#include "student.h"
#include "score_grader.h"
#include <string.h>

void average_checker(student *p1, int student_num){
    float total = 0;
    for(int i = 0; i < student_num; i++){
        total = total + p1[i].score;
    }
    float avg = total / student_num;
printf("The average of the student scores is: %.2f\t", avg);
}

char result_grader(student *p1, int student_num){
    grader(p1, student_num);

    printf("\n Each person name with grade: \n");

    for(int k = 0; k < student_num; k++){
        printf("\n Name: %s \t\t Score: %d \t\t Grade: %s", p1[k].name, p1[k].score, p1[k].grade);
    }

}

void student_full_result_display(student *p1, int student_num, char *course_name){
    printf("\n \t\t This is the full result for %s course\n", course_name);

    for(int i = 0; i < student_num; i++){
            printf("\n\t\t__STUDENT %d__\t\t", i + 1);
            printf("\n Name: %s", p1[i].name);
            printf("\n score: %d", p1[i].score);
            printf("\n ID: %s", p1[i].student_id);
            printf("\n Department: %s", p1[i].department);
            printf("\n Final grade is: %s", p1[i].grade);
    }

}
