//Q3: Next Greater Element

//Code:

#include <stdio.h>

int main(){
  int arr[100], stack[100], result[100];
  int n, i, top=-1;
  printf("Enter the number of elements: ");
  scanf("%d",&n);

  printf("Enter the array elements: ");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(i=n-1;i>=0;i--){
    while(top!=-1 && stack[top]<=arr[i]){
      top--;
    }
    if(top==-1){
      result[i]=-1;
    }
    else{
      result[i]=stack[top];
    }
    stack[++top]=arr[i];
  }

  printf("Next Greater Element are: \n");
  for(i=0;i<n;i++){
    printf("%d->%d\n", arr[i],result[i]);
  }

  return 0;
}

  
