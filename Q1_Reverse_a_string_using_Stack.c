//Q1. Reverse a string using a Stack

//Code:

#include <stdio.h>
#include <string.h>

#define Max[100]

char stack[Max];
int top=-1;

void push(char ch){
   if(top==Max-1){
      printf("Stack Overflown! \n");
   }
   else{
     top++;
     stack[top]=ch;
   }
}

char pop(){
   if(top==-1){
     printf("Stack Underflown! \n");
     return '\0';
   }
   else{
     char ch=stack[top];
     top--;
     return ch;
   }

int main(){
   char str[100];
   int i, length;
   printf("Enter a word: ");
   scanf("%s", str);

   length=strlen(str);

   for(i=0;i<length;i++){
      push(str[i]);
   }

   printf("Reversed word: ");
   for(i=0;i<length;i++){
      printf("%c", pop());
   }

   printf("\n");

   return 0;
}
