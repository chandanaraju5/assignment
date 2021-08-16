#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int i=0;



struct student{
char name[90];
char place[90];
int roll;
int Class;
}s[100];


void add_student()
{
printf("-------------------------------------------------------------------Adding the student info-----------------------------------------------------------------------------\n");
for(i=0;i<5;i++)
{
s[i].roll=i+1;
printf("Enter Name: ");
scanf("%s",s[i].name);
printf("Enter Place: ");
scanf("%s", s[i].place);
printf("Enter Class: ");
scanf("%d", &s[i].Class);
i=i+1;
}
}


void details()
{
printf("------------------------------------------------------------------------displaying info-------------------------------------------------------------------------------------\n");
printf("Roll No.                               NAME                                PLACE                                   CLASS\n");
for(i=1;i<=5;i++)
{
printf("%d\t",i);
printf("%s\t",s[i].name);
printf("%s\t",s[i].place);
printf("%d\n",s[i].Class);
}
}



void search()
{
int k;
printf("------------------------------------Searching---------------------------------------------------------\n");
printf("Enter the roll number of student to search: ");
scanf("%d",&k);
printf("Name: %s\n",s[k-1].name);
printf("Place: %s\n",s[k-1].place);
printf("Class: %d\n",s[k-1].Class);
}


void main()
{
int option, count;
while(i=1){
printf("---------------------------------select option----------------------------\n");
printf("1. add the student\n");
printf("2. details\n");
printf("3. search\n");
printf("4. exit\n");
scanf("%d", &option);
switch (option) {
case 1:
add_student();
break;
case 2:
details();
break;
case 3:
search();
break;
case 4: 
exit(0);
break;
}
}
}

