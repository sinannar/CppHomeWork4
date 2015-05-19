/*header neccessaries*/
#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

/*testing*/
//#define TESTLASTNAME
#define TESTGPA

/*defining constant*/
const int ARRSIZE = 20;

/*class of student*/
class student
{
    public:
            /*input functions*/
            void inputName(void);
            void inputLastName(void);
            void inputNumber(void);
            void inputGpa(void);
            void inputCredit(void);

            /*output functions*/
            void outputName(void);
            void outputLastName(void);
            void outputNumber(void);
            void outputGpa(void);
            void outputCredit(void);

            /*setters*/
            inline void setName(char *);
            inline void setLastName(char *);
            inline void setNumber(int);
            inline void setGpa(double);
            inline void setCredit(int);

            /*getters*/
            inline char* getName(void);
            inline char* getLastName(void);
            inline int getNumber(void);
            inline double getGpa(void);
            inline int getCredit(void);

            /*constructers*/
            student(char*,char*,int,double,int);
            student(char*,char*,int,double);
            student(char*,char*,int);
            student(char*,char*);
            student(char*);
            student(void);

    private:
            char name[ARRSIZE];
            char lastName[ARRSIZE];
            int number;
            double gpa;
            int credit;

};

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
pre : get two students references
post: compare them as gpa
*/
int compStudentAsGpa(student &a,student &b);

/*
pre : get two students references
post: compare them as lastname
*/
int compStudentAsLastName(student &a,student &b);

/*
pre : get two students references
post: swap them
*/
void swapStudents(student &a,student &b);


#endif
