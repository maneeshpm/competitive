#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  //  int *a=(int*)malloc(3*sizeof(int));
  //  printf("%p", a);
    int a=10;
    printf("%ld", &a);
    return 0;
}