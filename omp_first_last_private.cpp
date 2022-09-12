#include <bits/stdc++.h>
#include <omp.h>

int main() {
    std::list<int> l;
#pragma omp parallel for num_threads(10) firstprivate(l) lastprivate(l)
    for (int i = 0; i < 1000; i++) {
        l.push_back(i);
    }

    for(auto i: l){
        std::cout << i << std::endl;
    }
}