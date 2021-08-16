#include <ctype.h>
#include <stdio.h>
#include <string.h>



void convert(char word[100])
{
for(int i=0;word[i];i++)
{
if(word[i]>=97 && word[i]<=122)
word[i]-=32;
}
printf("converted string is '%s'\n",word);
}


int main()
{
int i=0;
char word[100];
char ch;
printf("enter a word: ");
scanf("%s", word);

convert(word);

return 0;
}
