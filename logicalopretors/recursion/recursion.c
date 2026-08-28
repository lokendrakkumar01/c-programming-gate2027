void fun( int  n) {
   if ( n== 0){
    return;
    printf("*");
    fun( n-1);
    printf("*");
   }
}
 int main() {
  int  n;
  printf("enter  values");

scanf("%d", &n);
fun(n);

 }
