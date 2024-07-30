#include<iostream>
using namespace std;

int main(){
    int arr[10] = {2,5,9};

    cout << "address of first memory  block is "<< arr << endl;
    cout << arr[0] << endl;

    cout << "address of first memory block is " << &arr[0] << endl;
    cout << " 4th " << *arr << endl;
    cout << " 5th " << *arr+1 << endl;
    cout << " 6th " << *(arr+1) << endl;
    cout << " 4th " << (*arr)+1 << endl;
       

}