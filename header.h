
#include<stdio.h>
#include<stdlib.h>
struct student
{
int data;
struct student *link;
};
void display(struct student *);
struct student * addlast(struct student *);
//struct student * Delete(struct student *);
//struct student * addfirst(struct student *);
