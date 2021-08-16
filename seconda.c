#include <stdio.h>


// --------------pass by reference-----------------





void same(int a, int b)
{
a=a;
b=b;
}


void swap(int a, int b)
{
int temp;
temp=a;
a=b;
b=temp;
}


int main()
{
int x,y,a;
printf("Enter x and y values: ");
scanf("%d %d",&x,&y);

printf("enter 0 or 1\n");
scanf("%d", &a);


if(a==0)
{
same(x,y);
printf("Actual values of x and y are %d and %d\n",x,y);
}
else
{
swap(x,y);
printf("Swapped values of x and y are %d and %d\n",x,y);
}
return 0;
}


