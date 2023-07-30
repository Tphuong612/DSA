#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct node{// khai bao 1 struct node
	int val;
	node *left;
	node *right;
	node (int x){
		val=x;
		left=right=NULL;
	}
};

void makerRoot(node *root, int u, int v, char c){
	if(c=='L') root->left = new node(v);// cap phat dong 1 node co val=v duoc luu o root->left
	else root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c){
	if(root==NULL) return;
	if(root->val==u){
		makeRoot(root, u, v, c);
	}
	else{
		insertNode(root->left, u, v, c);
		insertNode(root->right, u, v, c);
	}
}

void inorder(node *root){
	if(root==n) return;
	inorder(root->left);
	cout<<root->val<<" ";
	inorder(root->right);
}
int main()
{
	
}
