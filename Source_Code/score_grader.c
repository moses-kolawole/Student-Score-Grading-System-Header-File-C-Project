#include "score_grader.h"
#include <string.h>

char grader(student *p1, int student_num)
{
for(int i = 0; i < student_num; i++){
            if(p1[i].score >= 70 && p1[i].score <= 100){
                    strcpy(p1[i].grade, "A");
            }
            else if(p1[i].score >= 60 && p1[i].score <= 69){
                strcpy(p1[i].grade, "B");
            }
            else if(p1[i].score >= 50 && p1[i].score <= 59){
                strcpy(p1[i].grade, "C");
            }
            else if(p1[i].score >= 45 && p1[i].score <= 49){
                strcpy(p1[i].grade, "D");
            }
            else if(p1[i].score >= 40 && p1[i].score <= 44){
                strcpy(p1[i].grade, "E");
            }else if (p1[i].score >= 0 && p1[i].score <= 39){
            strcpy(p1[i].grade, "F");
            }
            else{
                strcpy(p1[i].grade, "Recheck the score you inputed");
            }
}
}
