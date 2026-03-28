//Q2. Balanced Parentheses

//Code:

#include <stdio.h>

int main(){
  char formu[100], stack[100];
  int top=-1, i, bal=1;

  printf("Enter an Expression: ");
  scanf("%s", formu);

  for(i=0;formu[i] != '\0';i++){
      if(formu[i]=='('||formu[i]=='{'||formu[i]=='['){
         stack[++top]=formu[i];
      }
      else if(formu[i]==')'||formu[i]=='}'||formu[i]==']'){
           if(top==-2){
              bal=0;
              break;
           }
      }
      if((formu[i]==')' && stack[top]=='(')||(formu[i]=='}' && stack[top]=='{')||(formu[i]==']' && stack[top]=='[')){

         top--;
       }
       else{
        bal=0;
        break;
        }
     }
   }

 if(top != -1){
   bal=0;
  }
 if(bal==1){
   printf("Balanced expression \n");
 }
 else{
  printf("Unbalanced Expression \n");
 }
 return 0;
}








