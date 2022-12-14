#include "Sort.h"

void Merge(int* A, int p, int q, int r){ //A - масив. p, q, r - індекси. p<=q<r
    int n1 = q - p + 1;
    int n2 = r - q;
    int* L = new int[n1+1];
    int* R = new int [n2+1];
    int i, j;
    for (i = 0; i < n1; i++)
        L[i] = A[p+i-1];
    for (j = 0; j < n1; j++)
        R[j] = A[q+j];
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    i = 0;
    j = 0;
    for (int k = p-1; k < r; k++){
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i += 1;
        }
        else {
            A[k] = R[j];
            j += 1;
        }
    }
}

void MergeSort(int* A, int p, int r){ //A - масив. p, r - індекси.
    if (p < r){
        int q = floor((p+r)/2);
        MergeSort(A, p, q);
        MergeSort(A, q+1, r);
        Merge(A, p, q, r);
    }
}

void Show(int* A, int n){
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}