//Q4: Printe _Queue Simulation

//Code:

#include <stdio.h>
#include<string.h>

#define Max 5

char queue[Max][50];
int front =-1,rear=-1;

void enqueue(){
  if(rear==Max-1){
    printf("Queue is Full\n");
  }
  else{
    char doc[50];
    printf("Enter document name: ");
    scanf("%s",doc);

    if(front==-1){
      front=0;
    }
    rear++;
    strcpy(queue[rear],doc);
    printf("Document added to Queue\n");
  }
}

void dequeue(){
  if(front==-1 || front>rear){
    printf("Queue is Empty\n");
  }else{
     printf("Pointing document: %s \n", queue[front]);
     front++;
  }
}

void display(){
  if(front==-1||front>rear){
    printf("No pending deocument\n");
  }else{
     int i;
     printf("Pending documents: \n");
     for(i=front;i<=rear;i++){
       printf("%s\n", queue[i]);
     }
  }
}

int main(){
  int choice;
  while(1){
    printf("\n--Printer Queue--\n");
    printf("1. Add Document\n");
    printf("2. Print Document\n");
    printf("3. Display Queue\n");
    printf("4. Exit\n);
    scanf("%d",&choice);

    switch(choice)
   {
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
        printf("Invalid choice\n);
    }   
  }

   return 0;
     
}

          
        
      
      
   
