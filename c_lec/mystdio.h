#ifndef MYSTDIO_H
#define MYSTDIO_H
void myprintf(char *str)
{
	int len=0;
	while(str[len]!='\0')
	len++;
	write(1,str,len);
}
#endif
