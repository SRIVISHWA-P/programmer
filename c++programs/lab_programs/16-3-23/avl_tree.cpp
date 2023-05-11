#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node
{
	private:
		T key;
		Node *left;
		Node *right;
		int height;
	
	public:
		int ret_height(Node *N){
		if (N == NULL)
			return 0;
		else
			return N->height;
		}
	
	
	Node* createnode(T key)
	{
	Node<T>* node = new Node<T>();
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->height = 1;
	return(node);
	}
	
	Node* insert(Node* node, T key)
	{
	if (node == NULL)
		return(createnode(key));
	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);
	else
		return node;
	
	node->height = 1 + max(ret_height(node->left), ret_height(node->right));
	int balance = getBalance(node);
	if (balance > 1 && key < node->left->key)
		return rightRotate(node);
	if (balance < -1 && key > node->right->key)
		return leftRotate(node);
	if (balance > 1 && key > node->left->key)
	{
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}
	if (balance < -1 && key < node->right->key)
	{
		node->right = rightRotate(node->right);
		return leftRotate(node);
	}
	
	return node;
	}
	
	Node *rightRotate(Node *y)
	{
	Node *x = y->left;
	Node *T2 = x->right;
	x->right = y;
	y->left = T2;
	y->height = max(ret_height(y->left), ret_height(y->right)) + 1;
	x->height = max(ret_height(x->left), ret_height(x->right)) + 1;
	return x;
	}
	
    Node *leftRotate(Node *x)
	{
	Node *y = x->right;
	Node *T2 = y->left;
	y->left = x;
	x->right = T2;
	x->height = max(ret_height(x->left), ret_height(x->right)) + 1;
	y->height = max(ret_height(y->left), ret_height(y->right)) + 1;
	return y;
	}

	int getBalance(Node *N)
	{
	if (N == NULL)
		return 0;
	return ret_height(N->left) - ret_height(N->right);
	}
	
	void preOrder(Node *root)
	{
	if(root != NULL)
	{
		cout << root->key << " ";
		preOrder(root->left);
		preOrder(root->right);
	}
	}
	
	void inOrder(Node *root)
	{
	if(root != NULL)
	{
		inOrder(root->left);
		cout << root->key << " ";
		inOrder(root->right);
	}
	}
	
	void postOrder(Node *root)
	{
	if(root != NULL)
	{
		postOrder(root->left);
		postOrder(root->right);
		cout << root->key << " ";
	}
	}
	
	Node * minValueNode(Node* node)
{
	Node* current = node;
	while (current->left != NULL)
		current = current->left;

	return current;
}

Node* deleteNode(Node* root, T key)
{
	if (root == NULL)
		return root;
	if ( key < root->key )
		root->left = deleteNode(root->left, key);
	else if( key > root->key )
		root->right = deleteNode(root->right, key);
	else
	{
		if( (root->left == NULL) ||
			(root->right == NULL) )
		{
			Node *temp = root->left ?
						root->left :
						root->right;
			if (temp == NULL)
			{
				temp = root;
				root = NULL;
			}
			else 
			*root = *temp; 
			free(temp);
		}
		else
		{
			Node* temp = minValueNode(root->right);
			root->key = temp->key;
			root->right = deleteNode(root->right, temp->key);
		}
	}
	if (root == NULL)
	return root;
	root->height = 1 + max(ret_height(root->left), ret_height(root->right));
	int balance = getBalance(root);
	if (balance > 1 &&
		getBalance(root->left) >= 0)
		return rightRotate(root);
	if (balance > 1 &&
		getBalance(root->left) < 0)
	{
		root->left = leftRotate(root->left);
		return rightRotate(root);
	}
	if (balance < -1 &&
		getBalance(root->right) <= 0)
		return leftRotate(root);
	if (balance < -1 &&
		getBalance(root->right) > 0)
	{
		root->right = rightRotate(root->right);
		return leftRotate(root);
	}

	return root;
}

bool search(Node* node, T key){
	Node<T>* temp = node;
	while(temp!=NULL){
		if(temp->key==key)
			return true;
		else{
		if(key > node->key)
			temp=temp->right;
		else
			temp=temp->left;
		}
	}
	return false;
}


};

void display_menu(){
	cout<<"\n 1.Insert"<<endl;
	cout<<" 2.delete"<<endl;
	cout<<" 3.search"<<endl;
	cout<<" 4.show height"<<endl;
	cout<<" 5.Preorder traversal"<<endl;
	cout<<" 6.Inorder traversal"<<endl;
	cout<<" 7.Postorder traversal"<<endl;
	cout<<" 8.Exit"<<endl;
	cout<<"\n Enter your choice : ";
}
int main()
{
	Node<int>* root=NULL;
	int ch=0; int a; bool t;
	cout<<"AVL Tree operations : "<<endl;
	display_menu();
	cin>>ch;
	while(ch!=8){
		switch(ch){
			case 1:
				cout<<"\Enter the elemnt to be added : ";
				cin>>a;
				root=root->insert(root, a);
				break;
			
			case 2:
				cout<<"\nEnter the element to be deleted : ";
				cin>>a;
				root=root->deleteNode(root,a);
				break;
			case 3:
				cout<<"\nEnter the element to be searched : ";
				cin>>a;
				t= root->search(root, a);
				cout<<"\n The result is "<<t;
				break;
			case 4:
				a=root->ret_height(root);
				cout<<"The height of the tree is : "<<a;
				break;
			case 5:
				root->preOrder(root);
				cout<<endl;
				break;
			case 6:
				root->inOrder(root);
				cout<<endl;
				break;
			case 7:
				root->postOrder(root);
				cout<<endl;
				break;
			case 8:
				return 0;
				break;
			default:
				cout<<"\n Invalid choice!!!!!!";		
		}
	display_menu();
	cin>>ch;
	}
}

