#include<stdio.h>
#include<ctype.h>

int main(int arg,char *argv[])
{
	char *ch;
	ch=argv[0];
	while(*ch!='\0')
	{
		putchar(tolower(*ch));
		ch++;
	}
	return 0;
}
