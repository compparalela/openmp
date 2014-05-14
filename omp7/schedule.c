#include<stdio.h>
#include<omp.h>

int main(){
   int a[10], b[10], c[10];
   int i, n;

   #pragma omp parallel
   {
      n = 10;

      #pragma omp for schedule(dynamic, 2)
      for(i = 0; i < n; i++){
        c[i] = a[i] + b[i];
        printf("Thread %d executa a iteração %d do loop\n", omp_get_thread_num(), i);
      }
    }
}
