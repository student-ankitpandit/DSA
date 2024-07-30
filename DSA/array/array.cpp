#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v) {
    int s = 0;
    int e = v.size()-1;

    while(s>e){
        swap(v[s] v[s])
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v) {
    for(int i=0; i<v.size(); i++){
        cout<< v[i] << "";
    }
    cout<<endl;
}

int main(){

    vector<int> v;

    v.push_back(11);
    v.push_back(16);
    v.push_back(18);
    v.push_back(12);
    v.push_back(14);

    
    print(ans);

    vector<int> ans = reverses(v);


    return 0;
}