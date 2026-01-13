#ifndef STUDENT_H
#define STUDENT_H
#define N 100

typedef struct{
char name[N];
int score;
char student_id[N];
char department[N];
char grade[N];
}student;

void inputed_details(student *p1, int student_number);
#endif // STUDENT_H
