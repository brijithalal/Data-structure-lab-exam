#include<stdio.h>
#include<conio.h>
#define MAX 50

int queue[MAX];
int rear=-1;
int front=-1;
void enqueue(int);
void dequeue();
void display();
void main()
{
  int item,ch;
  clrscr();
  while(1)
  {
    printf("\nMENU");
    printf("\n1.Enqueue");
    printf("\n2.Dequeue");
    printf("\n3.Display");
    printf("\n4.Exit");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
	printf("\nEnter the element to insert:");
	scanf("%d",&item);
	enqueue(item);
	break;
      case 2:
	dequeue();
	break;
      case 3:
	display();
	break;
      case 4:
	exit(1);
      default:
	printf("\nInvalid input");
    }
  }
}
void enqueue(item)
{
 if(front==-1&&rear==-1)
 {
   front=0;
   rear=0;
   queue[rear]=item;
 }
 else if((rear+1)%MAX==front)
 {
   printf("\nQueue overflow");
 }
 else
 {
 rear=(rear+1)%MAX;
 queue[rear]=item;
 }
}
void dequeue()
{
  if(front==-1||front>rear)
  {
  printf("\nQueue empty");
  }
  else if(front==rear)
  {
   printf("\nElement dequeue is:%d",queue[front]);
   front=rear=-1;
  }
  else
  {
     printf("\nElement dequeued is:%d",queue[front]);
     front=(front+1)%MAX;
  }
}
void display()
{
  int i;
 if(front==-1)
 {
 printf("\nQueue is empty");
 }
 else
 {
 printf("\nQueue elements");
 for(i=front;i<=rear;i++)
 {
 printf("\t%d",queue[i]);
 }
}
}


