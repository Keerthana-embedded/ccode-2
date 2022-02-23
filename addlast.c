#include"header.h"
struct student * addlast(struct student *ptr)
{
	struct student *newnode=NULL;
	newnode=(struct student *)malloc(sizeof(struct student));
	if(newnode==NULL)
		printf("node not created");
	else
	{
		printf("enter element\n");
		scanf("%d",&newnode->data);
		if(ptr==NULL)
		{
			ptr=newnode;
		}
		else
		{
			struct student *temp=NULL;
			temp=ptr;
			while((temp->link)!=NULL)
			{
				temp=temp->link;
			}
			temp->link=newnode;
		}

	}
	return ptr;
}
