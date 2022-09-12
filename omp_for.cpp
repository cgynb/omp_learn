#include <bits/stdc++.h>
#include <omp.h>

int main(){
   int thread_count = 10;

#pragma omp parallel for num_threads(thread_count)
   for(int i=0; i<100; i++){
       std::cout << omp_get_thread_num() << ": " << i << std::endl;
   }
   return 0;
}