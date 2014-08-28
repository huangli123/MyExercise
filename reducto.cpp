#include"stdio.h"
#include"std"lib.h"
#include"string.h"
#define LEN 40
int main (int argc,char *argv[])
{
	FILE *in, *out;
	int ch;
    char name[LEN];
	int count=0;
	if(argc<2)
	{
		fprintf(stderr,"Usage: %s filename \n",argv[0]);
		exit(1);
	}
	if(in=fopen(argv[1],"r")==NULL)
	{
		printf("Can't the %s filename.\n",argv[1]);
		exit(2);
	}
	strcpy(name,argv[1]);
	strcat(name.".red");
	if((out=fopen(name,"w"))==NULL)
	{
		fprint(stderr,"Can't open the file.");
		exit(3);
	}
	while ((ch=getc(in))!=EOF)
	{

	}

}