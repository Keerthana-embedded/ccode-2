#include"header.h"
void display(struct student *ptr)
{
	if(ptr==NULL)
		printf("list is empty");
	else
	{
while(ptr)
{
printf("%d\n",ptr->data);
ptr=ptr->link;
}
}
}
