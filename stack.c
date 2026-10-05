#include <stdio.h>
#define MAX 5

int stack [MAX];
int top=-1;
void push(){
int value;
if(top==MAX-1){
   printf("stack OVERFLOW");
   }
   else{
    printf("enter a value\n");
    scanf("%d",&value);
    top++;
    stack[top]=value;

   }
}
void pop(){
int value;
if (top==-1){
    printf("stack underflow");
}
else{
    value=stack[top];

    printf("%d",stack[top]);
     top--;
}
}
void display(){
    int i;
    if(top == -1){
        printf("stack underflow");
    }
    else{
        for(i = top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
int main(){
    int choice;
    while(1){
        printf("enter a choice (1-4) 1.push 2.pop 3.display 4.exit");
        scanf("%d",&choice);
        switch(choice){
    case 1:
        push();
        break;
     case 2:
        pop();
        break;
     case 3:
        display();
        break;
     case 4:
        return 0;
        break;
      default:
        printf("invalid choice");
        }

    }
return 0;
}