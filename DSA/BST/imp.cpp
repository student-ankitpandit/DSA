
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int key;
	struct Node *left, *right;
};


Node* newNode(int item)
{
	Node* temp = new Node;
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}


void inorder(Node* root)
{
	if (root != NULL) {
		inorder(root->left);
		printf("%d ", root->key);
		inorder(root->right);
	}
}


Node* insert(Node* node, int key)
{
	
	if (node == NULL)
		return newNode(key);

	
	if (key < node->key)
		node->left = insert(node->left, key);
	else
		node->right = insert(node->right, key);

	
	return node;
}


Node* deleteNode(Node* root, int k)
{
	// Base case
	if (root == NULL)
		return root;

	
	if (root->key > k) {
		root->left = deleteNode(root->left, k);
		return root;
	}
	else if (root->key < k) {
		root->right = deleteNode(root->right, k);
		return root;
	}

	
	if (root->left == NULL) {
		Node* temp = root->right;
		delete root;
		return temp;
	}
	else if (root->right == NULL) {
		Node* temp = root->left;
		delete root;
		return temp;
	}

	
	else {

		Node* succParent = root;

		
		Node* succ = root->right;
		while (succ->left != NULL) {
			succParent = succ;
			succ = succ->left;
		}

		
		if (succParent != root)
			succParent->left = succ->right;
		else
			succParent->right = succ->right;

		
		root->key = succ->key;

		
		delete succ;
		return root;
	}
}


int main()
{
	
	Node* root = NULL;
	root = insert(root, 50);
	root = insert(root, 30);
	root = insert(root, 20);
	root = insert(root, 40);
	root = insert(root, 70);
	root = insert(root, 60);

	printf("Original BST: ");
	inorder(root);

	printf("\n\nDelete a Leaf Node: 20\n");
	root = deleteNode(root, 20);
	printf("Modified BST tree after deleting Leaf Node:\n");
	inorder(root);

	printf("\n\nDelete Node with single child: 70\n");
	root = deleteNode(root, 70);
	printf("Modified BST tree after deleting single child Node:\n");
	inorder(root);

	printf("\n\nDelete Node with both child: 50\n");
	root = deleteNode(root, 50);
	printf("Modified BST tree after deleting both child Node:\n");
	inorder(root);

	return 0;
}
