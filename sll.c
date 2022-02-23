#include"header.h"
int main()
{
	struct student *head=NULL;
	int choice;
	while(1)
	{
		printf("select option\n1:addlast\n2:display\n3:exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=addlast(head);
			       break;
			case 2:display(head);
			       break;
			case 3:exit(0);

		}
	}

}
