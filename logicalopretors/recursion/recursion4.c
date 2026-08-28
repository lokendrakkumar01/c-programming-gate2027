 #include<stdio.h>
  void  num ( int n) {
    if( n== 0){
      return;
    }
    printf("*");
    num( n -1);
    printf("*");
  }
   void main(){
    int  n;
    printf(" ENTER VALUE");
    scanf("%d", &n);
    num(n);
   }
