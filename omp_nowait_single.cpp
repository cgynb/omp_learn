#include <iostream>
#include <omp.h>

using namespace std;

int main(){

#pragma omp parallel num_threads(10)
{
    #pragma omp single nowait
    {
        cout << "unique: " << omp_get_thread_num() << endl;
    }
    cout << omp_get_thread_num() << endl;
}
}