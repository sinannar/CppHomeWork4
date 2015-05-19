#include <iostream>
#include <cstring>
#include "091044005HW04P04.h"


using namespace std;


int main(void)
{
#ifdef TESTLASTNAME
	student students[2];
	students[0]=student("ali","zelih",1,1);
	students[1]=student("ali","veli",1,2);

    students[0].outputLastName();
    students[1].outputLastName();

    int i=compStudentAsLastName(students[0],students[1]);
    cout<<i<<endl;

     sortThemAsLastName(students,2);

    students[0].outputLastName();
    students[1].outputLastName();
#endif

#ifdef TESTGPA
	student students[2];
	students[0]=student("ali","zelih",1,3);
	students[1]=student("ali","veli",1,4);

    students[0].outputGpa();
    students[1].outputGpa();

    int i=compStudentAsGpa(students[0],students[1]);
    cout<<i<<endl;

    sortThemAsGpa(students,2);

    students[0].outputGpa();
    students[1].outputGpa();
#endif

    return 1;
}


/****************************************/
/*sortung functions*/
void sortThemAsGpa(student *x,int size)
{
	//use  compStudentAsGPA
	for(int j=0;j<size;++j)
	for(int i=0;i<size-1;++i)
	{
		if( compStudentAsGpa(x[i],x[i+1]) )
		{
			swapStudents(x[i],x[i+1]);
		}
	}
}

void sortThemAsLastName(student *x,int size)
{
	//use  compStudentAsGPA
	for(int j=0;j<size;++j)
	for(int i=0;i<size-1;++i)
	{
		if( compStudentAsLastName(x[i],x[i+1]) )
		{
			swapStudents(x[i],x[i+1]);
		}
	}
}

/****************************************/
/*comparing functions*/
int compStudentAsGpa(student &a,student &b)
{
	///use getters
	if( b.getGpa()>a.getGpa() )
	{
		return 1;
	}
	return 0;
}

int compStudentAsLastName(student &a,student &b)
{
	///use getters
	if( strcmp(a.getLastName(),b.getLastName()) <0 )
	{
		return 0;
	}
	return 1;
}

/****************************************/
/*swap function*/
void swapStudents(student &a,student &b)
{
	student temp;
	temp=a;
	a=b;
	b=temp;
}

/****************************************/
/*input functions*/
void student::inputName(void)
{
    char sname[ARRSIZE];
    cout<<"enter student name";
    cin>>sname;
    setName(sname);
}

void student::inputLastName(void)
{
    char slname[ARRSIZE];
    cout<<"enter student lastname";
    cin>>slname;
    setLastName(slname);
}

void student::inputNumber(void)
{
    int snumber;
    cout<<"enter student number";
    cin>>snumber;
    setNumber(snumber);
}

void student::inputGpa(void)
{
    double sgpa;
    do{
        cout<<"enter student gpa";
        cin>>sgpa;

    }
    while(sgpa<0.0 || sgpa >4.0);
    setGpa(sgpa);
}

void student::inputCredit(void)
{
    int scredit;
    cout<<"enter student credit";
    cin>>scredit;
    setCredit(scredit);
}

/****************************************/
/*output functions*/
void student::outputName(void)
{
    cout<<"name:"<<getName()<<endl;
}

void student::outputLastName(void)
{
    cout<<"lastname:"<<getLastName()<<endl;
}

void student::outputNumber(void)
{
    cout<<"number:"<<getNumber()<<endl;
}

void student::outputGpa(void)
{
    cout<<"gpa:"<<getGpa()<<endl;
}

void student::outputCredit(void)
{
    cout<<"credit:"<<getCredit()<<endl;
}

/****************************************/
/*setters*/
void student::setName(char *sname)
{
    strcpy(name,sname);
}

void student::setLastName(char *slname)
{
     strcpy(lastName,slname);
}

void student::setNumber(int snumber)
{
    number=snumber;
}

void student::setGpa(double sgpa)
{
    gpa=sgpa;
}

void student::setCredit(int scredit)
{
    credit=scredit;
}

/****************************************/
/*getters*/
char* student::getName(void)
{
    return name;
}

char* student::getLastName(void)
{
    return lastName;
}

int student::getNumber(void)
{
    return number;
}

double student::getGpa(void)
{
    return gpa;
}

int student::getCredit(void)
{
    return credit;
}

/****************************************/
/*constructers*/
student::student(char *name,char *surname,int number,double gpa,int credit)
{
    setName(name);
    setLastName(surname);
    setNumber(number);
    setGpa(gpa);
    setCredit(credit);
}

student::student(char *name,char *surname,int number,double gpa)
{
    setName(name);
    setLastName(surname);
    setNumber(number);
    setGpa(gpa);
    setCredit(0);
}

student::student(char *name,char *surname,int number)
{
    setName(name);
    setLastName(surname);
    setNumber(number);
    setGpa(0.0);
    setCredit(0);
}

student::student(char *name,char *surname)
{
    setName(name);
    setLastName(surname);
    setNumber(0);
    setGpa(0.0);
    setCredit(0);
}

student::student(char*name)
{
    char surname[1];
    strcpy(surname,"-");
    setName(name);
    setLastName(surname);
    setNumber(0);
    setGpa(0.0);
    setCredit(0);
}

student::student(void)
{
    char name[1],surname[1];
    strcpy(name,"-");
    strcpy(surname,"-");
    setName(name);
    setLastName(surname);
    setNumber(0);
    setGpa(0.0);
    setCredit(0);
}

/****************************************/

