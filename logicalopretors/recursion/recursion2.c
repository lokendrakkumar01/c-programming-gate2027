//  we now  that   recursion   bo hota h  jb   koi  function  khud  ko call  krata h bar bar  is called  of  the recusrion
 //example -
 void fun( int n) {
   if( n==0){ //  n= 0;  this   define the   function    stop   we  know  that ki  function  kab rukega  is bat     follow karata h
     return;
     printf("*");
     fun(n-1); // har recursive call ek star print karti hai.
    }  //  fun(n - 1);    th is   define   the   functio  call  itself    we  know  that  -  ye  is   bat  ko batata h ki  function  khuds  ko kese  call  karat h

     // NOTE: -  print("*")  function ,  fun(n-1)  ke  bad  bhi  aa  skta h  but  oputput  same    nhi  rahe ga
     // Print before recursion(func(n-1)) → descending
//5 4 3 2 1
//Print after recursion → ascending fun(n-1);
//1 2 3 4 5


 }
  int main() {
    fun(8);
     return 0;

  }
