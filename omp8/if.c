#include<stdio.h>

int main(){
   int i;
   int n = 10;
   int a[10], b[10], c[10];

   #pragma omp parallel if(n > 100)
   {
      printf("Executando ...\n");
      #pragma omp for
      for(i = 0; i < n; i++)
        c[i] = a[i] + b[i];
   }

}
