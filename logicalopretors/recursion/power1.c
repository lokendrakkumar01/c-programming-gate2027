#include <stdio.h>
 int power(int a, int b) {
  if( b == 0){
    return 1;

  }  else
  {
    return a * power(a, b - 1);
  }

 }
  int main (){
    int answ;
    answ = power( 3,100);
     printf("%d" , answ);
  }
