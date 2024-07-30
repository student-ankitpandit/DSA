#include<iostream>
using namespace std;

int partition (int arr[], int s, int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i = s+1; i<=e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }
    //placing pivot at right index position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right part solve kar lete hai
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    //base case
    if(s>=e)
    return ;

    //partition function
    int p = partition(arr, s, e);

    //left part
    quickSort(arr, s, p-1);

    //right part
    quickSort(arr, e, p+1);
}


int main(){
    int arr[5] = {2, 5, 8, 9, 6};
    int n = 5;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}
