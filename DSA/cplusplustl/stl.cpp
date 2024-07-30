#include<iostream>
using namespace std;
#include<array>

int main() {
    //normal array initialize
    int arr[] = {1,2,3};

    //stl
    array<int, 4> a = {1,2,3,4};

    int size = a.size();

    for(int i=0; i<size; i++) {
        cout<<a[i]<<endl;
    }
}