#include <bits/stdc++.h>
using namespace std;
 
vector<int> findMin(int n)
{
    // initialize vector to store the coins
    vector<int> v;
    // iterate till n>0 and check condition according to the
    // greatest coin possible
    while (n > 0) {
        if (n >= 2000) {
            v.push_back(2000);
            n -= 2000;
        }
        else if (n >= 500) {
            v.push_back(500);
            n -= 500;
        }
        else if (n >= 200) {
            v.push_back(200);
            n -= 200;
        }
        else if (n >= 100) {
            v.push_back(100);
            n -= 100;
        }
        else if (n >= 50) {
            v.push_back(50);
            n -= 50;
        }
        else if (n >= 20) {
            v.push_back(20);
            n -= 20;
        }
        else if (n >= 10) {
            v.push_back(10);
            n -= 10;
        }
        else if (n >= 5) {
            v.push_back(5);
            n -= 5;
        }
        else if (n >= 2) {
            v.push_back(2);
            n -= 2;
        }
        else if (n >= 1) {
            v.push_back(1);
            n -= 1;
        }
    }
    // return the ans that stores in the vector
    return v;
}
 
// Driver Code
int main()
{
    int v = 93;
    cout << "Following is minimal"
        << " number of change for " << v << ": ";
 
    // Function Call
    vector<int> vec = findMin(v);
    // print the vector
    for (auto it : vec)
        cout << it << " ";
    return 0;
}