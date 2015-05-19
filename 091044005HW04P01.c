#include <stdio.h>
#include <stdlib.h>
#include "091044005HW04P02.h"

int main()
{
    student ali[2];

/********   initializing    **************/
    setName(&ali[0],"ali");
    setLastName(&ali[0],"veli");
    setNumber(&ali[0],1);
    setGpa(&ali[0],1.1);
    setCredit(&ali[0],1);

    setName(&ali[1],"ali");
    setLastName(&ali[1],"beli");
    setNumber(&ali[1],1);
    setGpa(&ali[1],1.1);
    setCredit(&ali[1],1);
/****************************************/


#ifdef INPUTTEST
    inputName(&ali[0]);
    inputLastName(&ali[0]);
    inputNumber(&ali[0]);
    inputGpa(&ali[0]);
    inputCredit(&ali[0]);
#endif

#ifdef OUTPUTTEST
    outputName(ali[0]);
    outputLastName(ali[0]);
    outputNumber(ali[0]);
    outputGpa(ali[0]);
    outputCredit(ali[0]);
#endif

#ifdef INPUTTEST
    inputName(&ali[1]);
    inputLastName(&ali[1]);
    inputNumber(&ali[1]);
    inputGpa(&ali[1]);
    inputCredit(&ali[1]);
#endif

#ifdef OUTPUTTEST
    outputName(ali[1]);
    outputLastName(ali[1]);
    outputNumber(ali[1]);
    outputGpa(ali[1]);
    outputCredit(ali[1]);
#endif

#ifdef SWAPTEST
    swapStudents(&ali[0],&ali[1]);

    outputName(ali[0]);
    outputLastName(ali[0]);
    outputNumber(ali[0]);
    outputGpa(ali[0]);
    outputCredit(ali[0]);

    outputName(ali[1]);
    outputLastName(ali[1]);
    outputNumber(ali[1]);
    outputGpa(ali[1]);
    outputCredit(ali[1]);
#endif

#ifdef SORTGPATEST
    sortThemAsGpa(ali,2);

    outputName(ali[0]);
    outputLastName(ali[0]);
    outputNumber(ali[0]);
    outputGpa(ali[0]);
    outputCredit(ali[0]);

    outputName(ali[1]);
    outputLastName(ali[1]);
    outputNumber(ali[1]);
    outputGpa(ali[1]);
    outputCredit(ali[1]);
#endif


#ifdef SORTLASTNAMETEST

    sortThemAsLastName(ali,2);

    outputName(ali[0]);
    outputLastName(ali[0]);
    outputNumber(ali[0]);
    outputGpa(ali[0]);
    outputCredit(ali[0]);

    outputName(ali[1]);
    outputLastName(ali[1]);
    outputNumber(ali[1]);
    outputGpa(ali[1]);
    outputCredit(ali[1]);
#endif


    return 1;
}



void sortThemAsGpa(student *x,int size)
{
    int i,j;
	for(j=0;j<size;++j)
	for(i=0;i<size-1;++i)
	{
		if( compStudentAsGpa(&x[i],&x[i+1]) )
		{
			swapStudents(&x[i],&x[i+1]);
		}
	}

}

void sortThemAsLastName(student *x,int size)
{
    int i,j;
    for(j=0;j<size;++j)
	for(i=0;i<size-1;++i)
	{
		if( compStudentAsLastName(&x[i],&x[i+1]) )
		{
			swapStudents(&x[i],&x[i+1]);
		}
	}
}

int compStudentAsGpa(student *a,student *b)
{
    if(b->gpa>a->gpa)
    return 1;
    return 0;
}

int compStudentAsLastName(student *a,student *b)
{
	if( strcmp(a->lastName,b->lastName) <0 )
	{
		return 0;
	}
	return 1;

}

void swapStudents(student *a,student *b)
{
    student temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void inputName(student* st)
{
    printf("enter name\n");
    scanf("%s",st->name);
}

void inputLastName(student* st)
{
    printf("enter lastname\n");
    scanf("%s",st->lastName);
}

void inputNumber(student* st)
{
    printf("enter number\n");
    scanf("%d",&st->number);
}

void inputGpa(student* st)
{
    printf("enter gpa\n");
    scanf("%lf",&st->gpa);
}

void inputCredit(student* st)
{
    printf("enter credit\n");
    scanf("%d",&st->credit);
}


void outputName(student st)
{
    printf("name:%s \n",st.name);
}

void outputLastName(student st)
{
    printf("lastname:%s \n",st.lastName);
}

void outputNumber(student st)
{
    printf("number:%d \n",st.number);
}

void outputGpa(student st)
{
    printf("gpa:%f \n",st.gpa);
}

void outputCredit(student st)
{
    printf("credit:%d \n",st.credit);
}


void setName(student *st,char *name)
{
    strcpy(st->name,name);
}

void setLastName(student *st,char *lastName)
{
    strcpy(st->lastName,lastName);
}

void setNumber(student *st,int number)
{
    st->number=number;
}

void setGpa(student *st,double gpa)
{
    st->gpa=gpa;
}

void setCredit(student *st,int credit)
{
    st->credit=credit;
}


char* getName(student st)
{
    return st.name;
}

char* getLastName(student st)
{
    return st.lastName;
}

int getNumber(student st)
{
    return st.number;
}

double getGpa(student st)
{
    return st.gpa;
}

int getCredit(student st)
{
    return st.credit;
}
