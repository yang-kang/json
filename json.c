#include<stdio.h>
#include<stdlib.h>

char* lept_whitespace(char* p)
{
	char *l=NULL;
	char *h=NULL;
	int count=0;
	h=malloc(sizeof(char)*100);
	l=h;
	while(*p!='\0')
	{
		if(count%2==0)
		{
			while(*p==' '||*p=='\n'||*p=='\r'||*p=='\t')
			{
				p++;
			}
		}
		*h=*p;
		h++;
		if(*p=='\"')
		{
			count++;
		}
		p++;
	}
	return l;
}
int main()
{
	char *f= "{    \"Name \":    \" Bob\",    \"Age\":    32,  \"Com     pany  \" :    \"     IBM\",\"Engineer\":  true,}";
	char *p1=NULL;
       	p1=lept_whitespace(f);
	printf("%s\n",p1);
	return 0;
}
