#include <bits/stdc++.h>
#include <omp.h>
int main(){
#pragma omp parallel sections
   {
#pragma omp section
       {
            for(int i=0; i<100000; i++){
                for(int j=0; j<10000; j++){}
            }
            std::cout << omp_get_thread_num() << std::endl;
       }
#pragma omp section
       {
            for(int i=0; i<100000; i++){
                for(int j=0; j<10000; j++){}
            }
            std::cout << omp_get_thread_num() << std::endl;
       }
   }
}