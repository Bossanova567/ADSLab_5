#include "Sort.h"

int main(){
    int n;
    cout << "Enter the length of an array: " << endl;
    cin >> n;
    int* A[n];
    for (int i = 0; i < n; i++){
        cout << "Enter the data: " << endl;
        cin >> *A[i];
    }
    Show(A, n);
    MergeSort(A,floor(n/2), ceil(n/2));
    Show(A, n);
}
