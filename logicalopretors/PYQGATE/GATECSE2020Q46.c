#include <stdio.h>
//  function one
int fun1(int n) {
    static int i= 0;
    if (n > 0) {
       ++i;
      fun1(n-1);
   }
  return (i);
}
 //function two
int fun2(int n) {
   static int i= 0;
   if (n>0) {
      i = i+ fun1 (n) ;
      fun2(n-1) ;
  }
return (i);
}
//  explain  with  diagram
/*
 complete   explain   diagaram
                         fun2(5)
                            |
                            |
                 i2 = 0 + fun1(5)
                            |
                            v
                       ┌─────────┐
                       │ fun1(5) │
                       └─────────┘
                            |
                            v
                       ┌─────────┐
                       │ fun1(4) │
                       └─────────┘
                            |
                            v
                       ┌─────────┐
                       │ fun1(3) │
                       └─────────┘
                            |
                            v
                       ┌─────────┐
                       │ fun1(2) │
                       └─────────┘
                            |
                            v
                       ┌─────────┐
                       │ fun1(1) │
                       └─────────┘
                            |
                            v
                       ┌─────────┐
                       │ fun1(0) │
                       │ return5 │
                       └─────────┘
                            |
                            |
                       fun1(5)=5
                            |
                            v
                    fun2 i2 = 0+5
                            |
                            v
                       fun2(4)
                            |
                 i2 = 5 + fun1(4)
                            |
                            v
                       fun1(4)
                            |
                    fun1 i1 = 5
                            |
                     4 increments
                            |
                    5 → 6 → 7 → 8 → 9
                            |
                            v
                       fun1(4)=9
                            |
                            v
                    i2 = 5 + 9 = 14
                            |
                            v
                       fun2(3)
                            |
                 i2 = 14 + fun1(3)
                            |
                            v
                       fun1(3)
                            |
                    fun1 i1 = 9
                            |
                     3 increments
                            |
                   9 → 10 → 11 → 12
                            |
                            v
                      fun1(3)=12
                            |
                            v
                  i2 = 14 + 12 = 26
                            |
                            v
                       fun2(2)
                            |
                 i2 = 26 + fun1(2)
                            |
                            v
                       fun1(2)
                            |
                    i1 = 12
                            |
                     2 increments
                            |
                       12 → 13 → 14
                            |
                            v
                      fun1(2)=14
                            |
                            v
                  i2 = 26 + 14 = 40
                            |
                            v
                       fun2(1)
                            |
                 i2 = 40 + fun1(1)
                            |
                            v
                       fun1(1)
                            |
                    i1 = 14
                            |
                      1 increment
                            |
                         14 → 15
                            |
                            v
                      fun1(1)=15
                            |
                            v
                  i2 = 40 + 15 = 55
                            |
                            v
                       fun2(0)
                            |
                            v
                      return 55
*/
