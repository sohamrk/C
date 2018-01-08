#include "mystdio.h"
int main (int argc,char *argv[])
{
	if(argc<=1)
{
	myprintf("error! atleastone parameter required");
	return -1;
}
	myprintf(argv[1]);
	return 0;
}
