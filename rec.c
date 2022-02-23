#include<stdio.h>
#include<stdlib.h>
 struct rectangle
{
unsigned int len;
unsigned int width;
unsigned int area;
};
struct rectangle * swap(struct rectangle *s);
void area(struct rectangle *);
int main()
{
struct rectangle *ptr;
ptr=(struct rectangle *)malloc(sizeof(struct rectangle));
printf("enter length\n");
scanf("%i",&ptr->len);
printf("enter width\n");
scanf("%i",&ptr->width);
ptr=swap(ptr);
printf("after swappig\n");
printf("len=%i,width=%i\n",ptr->len,ptr->width);
void (*fntn)(struct rectangle *);
fntn=area;
fntn(ptr);
}
struct rectangle * swap(struct rectangle *s)
{
unsigned int temp;
temp=s->len;
s->len=s->width;
s->width=temp;
return s;
}
void area(struct rectangle *q)
{
q->area=q->len*q->width;
printf("area=%i\n",q->area);
}
