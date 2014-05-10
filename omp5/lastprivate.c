#include<stdio.h>

int main(){
   int a[10], b[10], c[10];
   int n = 10;
   int i;

   #pragma omp parallel for shared(a,b,c,n) lastprivate(i)
   for(i = 0; i < n; i++){
      c[i] = a[i] + b[i];
   }
   
   printf("Depois da região paralela ... i = %d\n", i);
}
