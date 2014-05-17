#include<stdio.h>
#include<omp.h>

int main(){

   int i;

   #pragma omp parallel private(i)
   {
      #pragma omp sections
      {
      
         #pragma omp section
         for(i = 0; i < 3; i++) {
            printf("Thread %d executando. Hello\n", omp_get_thread_num());
         }
  
         #pragma omp section
         for(i = 3; i < 8; i++) {
            printf("Thread %d executando. Hello\n", omp_get_thread_num());
         }

         #pragma omp section
         for(i = 8; i < 10; i++) {
            printf("Thread %d executando. Hello\n", omp_get_thread_num());
         }
     }
   }

}
