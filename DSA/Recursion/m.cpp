#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int s, int e) {
    int pivot = arr[s];
    int cnt = 0;

    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivot) {
            cnt++;
        }
    }

    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {
    if (s >= e) {
        return;
    }

    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main() {
    int arr[5] = {2, 5, 8, 9, 6};
    int n = 5;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}