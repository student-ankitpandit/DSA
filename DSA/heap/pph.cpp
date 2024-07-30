#include <bits/stdc++.h>
using namespace std;
 
void print(vector<int>& vc)
{
    for (auto i : vc) {
        cout << i << " ";
    }
    cout << endl;
}
 
int main()
{
    // initial vector
    vector<int> vc{ 40, 10, 20, 50, 30 };
 
    // making heap
    make_heap(vc.begin(), vc.end());
    cout << "Initial Heap: ";
    print(vc);
   
    // using pop_heap() function to move the largest element
    // to the end
    pop_heap(vc.begin(), vc.end());
    cout << "Heap after pop_heap(): ";
    print(vc);
 
    // actually removing the element from the heap using
    // pop_back()
    vc.pop_back();
    cout << "Heap after pop_back(): ";
    print(vc);
 
    return 0;
}