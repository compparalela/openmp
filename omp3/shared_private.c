#include<stdio.h>
#include<omp.h>

int main(){
   int a[10], b[10], c[10];
   int n = 10;
   int id, i;

   #pragma omp parallel shared (a,b,c,n) private(id, i)
   {
      #pragma omp for
      for(i = 0; i < n; i++){
         c[i] = a[i] + b[i];
	 printf("Thread %d executa a iteração %d do loop\n", id, i);
      }
   }
}
