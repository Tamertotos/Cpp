#include <iostream>
#include <cmath>
using namespace std;

const double* aver(const double* arr, size_t size, double& average) {
    for (int i=0; i<size; i++) {
        average +=  arr[i];
    }
    average = average / size;

    double minDiff = abs(arr[0] - average);
    const double *minIndex = arr;
    for (int i = 0; i < size; i++) {
        if ( abs(arr[i] - average) < minDiff) {
            minDiff = abs(arr[i] - average);
            minIndex = &arr[i];
        }
    }
    return minIndex;
}

int main() {
    double arr[] = {1,2,-1.5,3.25,5.5,7.75,-0.25,5.75};
    size_t size = sizeof(arr)/sizeof(arr[0]);

    double average = 0;
    const double* p = aver(arr, size, average);
    cout << *p << " " << average << endl;
}