 #include <stdio.h>

  int  main () {
    int x = 300;
   char  *p;
   p = (char*)&x;


    printf("%d", *p) ;
    return 0;
}
 /* #include <stdio.h>

  int  main () {
    int x = 400;
   char  *p;
   p = (char*)&x;


    printf("%d", *p) ;
    return 0;
}*/
  // output = -112 
