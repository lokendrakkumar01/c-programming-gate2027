#include<stdio.h>
 void count (int n) {
    static int d=1;

    printf ("%d",n);
    printf ("%d",d);
    d++;
    if (n>1) count (n-1);
    printf ("%d",d);
}

void main(){
    count (3);
}
/*
expplain  thise   i diagram ook
main()
  |
  | count(3)
  ↓
┌─────────────────────────────┐
│ count(3)                    │
│ n = 3, d = 1                │
│ print 3                     │
│ print 1                     │
│ d++ → 2                     │
│                             │
│     count(2)                │
│       ↓                     │
│   ┌─────────────────────┐   │
│   │ n = 2, d = 2        │   │
│   │ print 2             │   │
│   │ print 2             │   │
│   │ d++ → 3             │   │
│   │                     │   │
│   │     count(1)        │   │
│   │       ↓             │   │
│   │   ┌─────────────┐   │   │
│   │   │ n = 1,d = 3 │   │   │
│   │   │ print 1     │   │   │
│   │   │ print 3     │   │   │
│   │   │ d++ → 4     │   │   │
│   │   │ 1 > 1 FALSE │   │   │
│   │   │ print 4     │   │   │
│   │   └─────────────┘   │   │
│   │                     │   │
│   │   print 4           │   │
│   └─────────────────────┘   │
│                             │
│ print 4                     │
└─────────────────────────────┘
*/
