#include<iostream>
using namespace std;

class TrieNode {
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
    for(int i=0; i<26; i++){
        children[i] = NULL;
    }
    isTerminal = false;
    }
    
};

class Trie {
    public:
    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }

    void insertutil(TrieNode* root, string word) {
        //base csae
        if(word.length() == 0){
            root->isTerminal = true;
            return ;
        }

        //assumption, word will be in caps
        int index = word[0] - 'A';
        TrieNode* child;

        if(root->children[index] != NULL) {
            //present
            child = root->children[index];
        }
        else{
            //absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        
        //recursion
        insertutil(child, word.substr(1));
    }

    void insertWord(string word) {
        insertutil(root, word);
    }

    bool searchUtil(TrieNode* root, string word) {
        //base case
        if(word.length() == 0){
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        if(root->children[index] != NULL) {
            //present
            child = root->children[index];
        }
        else{
            //absent
            return false;
        }

        //recurison
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word) {
        return searchUtil(root, word);
    }
};

int main(){
    Trie *t = new Trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");
    cout << " present or not " << t->searchWord("TIM") << endl;

    return 0;
}