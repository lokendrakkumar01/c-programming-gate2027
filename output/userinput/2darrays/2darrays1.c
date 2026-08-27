 #include<stdio.h>
   void main(){
      int a[2][3] = { 1,2,3,4,5,6};
      //printf("%u" , *(a+1));
       //printf("%u" ,a[0]+1);
       printf("%u" ,&a+1);

       //  ye  sab bhi  address  ko  hi point  out karege  ye   teno printf ok
       //&a+1  this print  address  of the  whole  arrays
   }
