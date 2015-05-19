/*header neccessaries*/
#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

/*testing*/
//#define SWAPTEST
//#define SORTGPATEST
//#define SORTLASTNAMETEST
//#define OUTPUTTEST
//#define INPUTTEST
const int ARRSIZE = 20;
/*student struct*/
typedef struct{
    char name[ARRSIZE];
    char lastName[ARRSIZE];
    int number;
    double gpa;
    int credit;
}student;

/**function prototypes**/

/*
pre : get a student array and size it
post: sort it as gpa
*/
void sortThemAsGpa(student *x,int size);

/*
pre : get a student array and size of it
post: sort it as name
*/
void sortThemAsLastName(student *x,int size);

/*
pre : get two students pointer
post: compare them as gpa
*/
int compStudentAsGpa(student *a,student *b);

/*
pre : get two students pointer
post: compare them as lastname
*/
int compStudentAsLastName(student *a,student *b);

/*
pre : get two students pointers
post: swap them
*/
void swapStudents(student *a,student *b);

/*
pre : get a student pointers
post: put something in
*/
void inputName(student*);
void inputLastName(student*);
void inputNumber(student*);
void inputGpa(student*);
void inputCredit(student*);

/*
pre : get a student
post: print info
*/
void outputName(student);
void outputLastName(student);
void outputNumber(student);
void outputGpa(student);
void outputCredit(student);

/*
pre : get a students pointer and info
post: set this info in this student
*/
void setName(student*,char *);
void setLastName(student*,char *);
void setNumber(student*,int);
void setGpa(student*,double);
void setCredit(student*,int);

/*
pre : get a student
post: getter the info about student
*/
char* getName(student);
char* getLastName(student);
int getNumber(student);
double getGpa(student);
int getCredit(student);

#endif // STUDENT_H_INCLUDED
