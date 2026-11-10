#include <iostream>
#include <string>
#include <stack>

using namespace std;


class node{
public:
    int item;
    node *left, *right, *parent;
    node(int x){
        item = x;
        left = right = parent = NULL;
    }
};

void preOrder(node *r){
    if(r!=NULL){
        cout<<r->item<<" "; 
        preOrder(r->left); 
        preOrder(r->right);
    }
}
void inOrder(node *r){
    if(r!=NULL){
         
        inOrder(r->left); 
        cout<<r->item<<" ";
        inOrder(r->right);
    }
}
void postOrder(node *r){
    if(r!=NULL){
        postOrder(r->left);
        postOrder(r->right); 
        cout<<r->item<<" ";
    }
}


void process(stack<node*>& s, stack<char>& ops) {
    node* right = s.top(); s.pop();
    node* left = s.top(); s.pop();
    char op = ops.top(); ops.pop();
    node* newNode = new node(op);
    newNode->left = left;
    newNode->right = right;
    s.push(newNode);
}

int main(){

    cout<<"CHOOSE WHAT TOPIC YOU WANT!~~~~~~"<<endl;
    cout<<"1 = Tree"<<endl;
    cout<<"2 = Graph"<<endl;   
    cout<<"3 = Linked List"<<endl;
    cout<<"4 = Stack"<<endl;
    cout<<"5 = Queue"<<endl;
    cout<<"6 = Hashing"<<endl;
    cout<<"7 = Searching"<<endl;
    cout<<"8 = Sorting"<<endl;
    cout<<"9 = Dynamic Programming"<<endl;
    cout<<"10 = Backtracking"<<endl;
    cout<<"11 = Greedy"<<endl;
    cout<<"12 = Divide and Conquer"<<endl;
    cout<<"13 = Bit Manipulation"<<endl;
    cout<<"14 = Math"<<endl;
    cout<<"15 = Geometry"<<endl;
    cout<<"16 = String"<<endl;
    cout<<"17 = Matrix"<<endl;
    cout<<"18 = Number Theory"<<endl;
    cout<<"19 = Combinatorics"<<endl;
    cout<<"20 = Probability"<<endl;
    cout<<"21 = Game Theory"<<endl;
    cout<<"22 = Miscellaneous"<<endl;
    cout<<"23 = Exit"<<endl;
    cout<<"Enter your choice: ";

    int choice;
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"You have chosen Tree!"<<endl;
            cout<<"1 = Binary Tree"<<endl;
            cout<<"2 = AVL Tree"<<endl;
            cout<<"3 = Red-Black Tree"<<endl;
            
            int treeChoice;
            cin>>treeChoice;
            if(treeChoice==1){
                //                 --- Input ---
                // 100*200/2




                // --- Program output ---


                // --- Expected output (text)---
                // \/ * 100 200 2
                // 100 200 * 2 /
                // 10000


                //infix operation

                string input;
                cin>>input;


                
            }
            else if(treeChoice==2){
                
            }
            else if(treeChoice==3){
               
            }
            else{
                
            }

        case 2:

        case 3:

        default:

    }





    return 0;

}