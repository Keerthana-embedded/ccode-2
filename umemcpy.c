#include<stdio.h>
void  my_memcpy(void *,const void *,int n);
int main()
{
char s1[10],s2[10];
int n;
puts("enter string 1\n");
gets(s1);
puts("enter string 2\n");
gets(s2);
printf("no of bytes to copy\n");
scanf("%d",&n);
my_memcpy(s1,s2,n);
puts(s1);
}
void  my_memcpy(void *dest,const void *src,int n)
{
int i;
for(i=0;i<n;i++)
*(char *)(dest+i)=*(char *)(src+i);
}
