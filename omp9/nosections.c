#include<stdio.h>

int main(){
   int i;

   #pragma omp parallel num_threads(4)
   {
      for(i = 0; i < 10; i++)
         printf("Hello\n");
   }

}
