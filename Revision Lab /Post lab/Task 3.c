#include <stdio.h>
int main(){
    int obt,tm=100;
    printf("Enter Your Obtained Marks:");
    scanf("%d",&obt);
    char grade;
    if (obt>=0&&obt<=100)
    {if (obt>=90&&obt<=100)
    { grade = 'A';}
    else if(obt>=80&&obt<=89)
    { grade ='A';}
    else if (obt>=70&&obt<=79)
    {grade='B';}
    else if (obt>=60&&obt<=69)
    {grade='C';}
    else if (obt>=50&&obt<=59)
    {grade='D';}
    else if (obt<50)
    {grade='F';}}
    else if (obt<0||obt>100)
    {printf("Invalid Mark");}
    if (obt>=0&&obt<=100)
    { if ((grade=='A')&&(obt>=90&&obt<=100))
        {printf("You are Passed And your Grade is %c+ \n",grade);}
        else if ((grade=='A')&&(grade<90))
        {printf("You are Passed And your Grade is %c \n",grade);}
        else if (grade=='B')
        {printf("You are Passed and Your Grade is %c \n",grade);}
        else if (grade=='C')
        {printf("You are Passed and Your Grade is %c \n",grade);}
        else if (grade=='D')
        {printf("You are Passed and your Grade is %c \n",grade);}
        else if (grade=='F')
        {printf("You Are Fail\n");}}

    }






    