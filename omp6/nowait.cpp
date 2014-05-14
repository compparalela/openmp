#include<iostream>

int main(){
   int a[10], b[10], c[10], d[10];
   int n = 10;
   int i;

   #pragma omp parallel
   {
      #pragma omp for nowait
      for(i = 0; i < n; i++){
        c[i] = a[i] + b[i];   
      }

      #pragma omp for nowait
      for(i = 0; i < n; i++){
        d[i] = a[i] * b[i];
      }
   }
}
