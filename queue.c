#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(){
int value;
printf("enter a value");
scanf("%d",&value);
if(rear==N-1){
    printf("queue is full");
}
else if(front==-1&&rear==-1){
    front=0;
    rear=0;
    queue[rear]=value;
}
else{

    rear++;
     queue[rear]=value;
}
}
void dequeue(){
int value;
if(front==-1 && rear==-1){
    printf("queue is empty");
}
else if(front==rear){
    front=-1;
    rear=-1;
}
else{
        value=queue[front];
         front++;
        printf(" deleted element is:%d",value);
}

}
void display(){
if(front==-1 && rear==-1){
    printf("queue is empty");
}
else{
    for(int i=front;i<=rear;i++)
        printf("%d\n",queue[i]);
}
}
int main(){
int choice;
 printf("choice 1:enqueue\n");
    printf("choice 2:dequeue\n");
    printf("choice 3:display\n");
    printf("choice 4:exit\n");

while(1){


    printf("enter a choice:");
    scanf("%d",&choice);
    switch(choice){
case 1:
    enqueue();
    break;
case 2:
    dequeue();
    break;
case 3:
    display();
    break;
case 4:
    return 0;
default:
    printf("invalid choice:");
    }

}
return 0;
}