#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void preorder(struct node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
 void postorder(struct node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(9);
    root->left->left=new node(23);
    root->left->right=new node(25);
    root->right->left=new node(20);
    root->right->right=new node(10);
    cout<<"preorder is:";
    preorder(root);
    cout<<endl;
    cout<<"inorder is:";
    inorder(root);
    cout<<endl;
    cout<<"postorder is:";
    postorder(root);
    return 0;
}


// }
// #include<iostream>
// using namespace std;
// void printsum(int i,int n,int sum){
//     if(i==n){
//         sum+=i;
//         cout<<sum;
//         return;
//     }
//     sum+=i;
//     printsum(i+1,n,sum);
// }
// int main(){
//     printsum(1,5,0);
//     return 0;
// }