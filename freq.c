#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	puts("enter string\n");
	scanf("%s",s);
	int i,j,cnt,f;
	char *p,*q;
	p=s;
	q=s;
	for(i=0;*(p+i)!='\0';i++)
	{ 
		cnt=1;
	for(j=i+1;*(q+j)!='\0';j++)
           {
		if(*(p+i)==*(q+j))
		   {
			 memmove(q+j,q+j+1,strlen(q+j+1)+1);
			 cnt++;
			 j--;
                   }


	   }
	printf("%c count is %d\n",*(p+i),cnt);

	}
}
