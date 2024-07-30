#include<iostream>
using namespace std;

int countWords(string str) {
    // Breaking input into word 
    // using string stream
   
    // Used for breaking words
    stringstream ss(str);
    // To store individual words
    string word;

    int count = 0;
    while(ss >> word) {
        count++;
    }
    return count;

}

int main() {
    string s = "geeks for geeeks"
    cout << "No of words are:" << countWords(ss) << endl;
    return 0;
}