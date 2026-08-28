//   we  know  that  factorial  ka mtlb  ko  bo  number kitni bar   multiply  ho rah h  khud se  is  called  of the factorial number
 #include <stdio.h>

 //  formula of  factorial
//  n! = n*(n-1);
 int fact( int n ) {

    if ( n== 0|| n==1){
      return 1;
    }
    return n * fact(n-1);
    }

  int  main (){
    int n;
    printf(" enetr the  number ");
    scanf("%d",&n);

    printf("%d\n", fact(n));

  }
