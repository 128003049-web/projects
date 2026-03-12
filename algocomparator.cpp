#include <iostream>
#include <ctime>
using namespace std;

void bubbleSort(int a[], int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void selectionSort(int a[], int n) {
    for(int i=0;i<n-1;i++) {
        int min = i;
        for(int j=i+1;j<n;j++) {
            if(a[j] < a[min])
                min = j;
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void insertionSort(int a[], int n) {
    for(int i=1;i<n;i++) {
        int key = a[i];
        int j = i-1;

        while(j>=0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main() {
    int n = 1000;
    int a[n], b[n], c[n];

    for(int i=0;i<n;i++) {
        a[i] = rand()%1000;
        b[i] = a[i];
        c[i] = a[i];
    }

    clock_t start, end;

    start = clock();
    bubbleSort(a,n);
    end = clock();
    cout<<"Bubble Sort Time: "<<(double)(end-start)/CLOCKS_PER_SEC<<" seconds"<<endl;

    start = clock();
    selectionSort(b,n);
    end = clock();
    cout<<"Selection Sort Time: "<<(double)(end-start)/CLOCKS_PER_SEC<<" seconds"<<endl;

    start = clock();
    insertionSort(c,n);
    end = clock();
    cout<<"Insertion Sort Time: "<<(double)(end-start)/CLOCKS_PER_SEC<<" seconds"<<endl;

    return 0;
}
