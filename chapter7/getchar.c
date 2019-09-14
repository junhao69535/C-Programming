#include<stdio.h>

int getchar(void)
{
	char c;
	return (read(0,&c,1)==1) ? (unsigned char) c:EOF;
}

main()
{
	int a=getchar();
	printf("%d\n",a);
}
