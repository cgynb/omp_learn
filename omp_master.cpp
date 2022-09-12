#include <iostream>
#include <omp.h>

using namespace std;

int main(){

#pragma omp parallel num_threads(10)
{
    #pragma omp master
    {
        cout << "master" << endl;
    }
    cout << omp_get_thread_num() << endl;
}
}