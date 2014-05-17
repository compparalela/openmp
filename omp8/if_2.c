#include<stdio.h>

int main(){
   int i;
   int n = 105;
   int a[105], b[105], c[105];

   #pragma omp parallel if(n > 100)
   {
      printf("Executando ...\n");
      #pragma omp for
      for(i = 0; i < n; i++)
        c[i] = a[i] + b[i];
   }

}
