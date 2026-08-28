#include <stdio.h>
 void fact( int n){
  if(n== 0 || n== 1){
    return 1;


  }else {

    return (n-1);
  }
 }

 int main(){
  int  n;
  printf("Enter the  value ");
  scanf("%d" ,(n));
   fact(n);

  return 0;


 }
