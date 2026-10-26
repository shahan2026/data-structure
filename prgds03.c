#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int Q[SIZE];
int front = 0,rear=0;
void insert(int);
int delete();
void display();
int main()
{
int opt,item;
do
{
printf("1.Insert \n2.Delete \n3.Display \n4.Exit\n");
printf("your option:");
scanf("%d",&opt);
switch(opt)
{
case 1: printf("enter item:");
        scanf("%d",&item);
        insert(item);
        break;
case 2: item = delete();
        if(item != -1)
        printf("poped value = %d",item);
        break;
case 3: display();
        break;
case 4: exit(0);
        break;
}
} while(1);
return 0;
}
void insert(int x)
{
int temp;
temp = (rear+1)%SIZE;
if(temp == front)
printf("Queue is full");
else
{
rear = temp;
Q[rear]=x;
}
}
int delete()
{
if(front == rear)
{
printf("Queue is empty");
return -1;
}
else
{
front=(front+1)%SIZE;
return Q[front];
}
}
void display()
{
int i;
if(front == rear)
printf("no.of elements: 0");
else
{
i=(front+1)%SIZE;
do
{
printf("%d \t",Q[i]);
i=(i+1)%SIZE;
}
while(i!=(rear+1)%SIZE);
}
return;
}
