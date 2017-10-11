#include <iostream>
#include <string>

using namespace std;

struct btreenode
{
    struct btreenode *leftchild;
    int data;
    struct btreenode *rightchild;
};
void insert(struct btreenode ** , int );
void inorder(struct btreenode *);
void preorder(struct btreenode *);
void postorder(struct btreenode *);

int main()
{
    struct btreenode *bt;
    int req, i = 1, num;

    bt = NULL;

    cout <<"Specify the number of items to be inserted: ";
    cin >> req;

    while( i++ <= req)
    {
        cout << "Enter the data: ";
        cin >> num;
        insert(&bt, num);
    }

    cout << "\n In-order traversal: \n";
    inorder(bt);

    cout << "\n pre-order traversal:\n";
    preorder(bt);
    
    cout << "\n post-order traversal:\n";
    postorder(bt);
    return 0;
}

//Insert a new node in a binary search tree
void insert(struct btreenode **sr, int num)
{
    if(*sr == NULL)
    {
        *sr = new btreenode;
        (*sr)->leftchild = NULL;
        (*sr)->data = num;
        (*sr)->rightchild = NULL;
        return;
    }
    else
    {
        if (num < (*sr)->data)
            insert(&((*sr)->leftchild), num);
        else
            insert(&((*sr)->rightchild), num);
    }
    return;
}

//In-order traverse
void inorder(struct btreenode *sr)
{
    if(sr != NULL)
    {
        inorder(sr->leftchild);
        cout << sr->data;
        inorder(sr->rightchild);
    }
    else 
        return;
}

void preorder(struct btreenode *sr)
{
    if(sr != NULL)
    {
        cout << sr->data << "\t";
        preorder(sr->leftchild);
        preorder(sr->rightchild);
    }
    else 
        return;
}

void postorder(struct btreenode *sr)
{
    if(sr!= NULL)
    {
        postorder(sr->leftchild);
        postorder(sr->rightchild);
        cout << sr->data << "\t";
    }
    else
        return;
}
