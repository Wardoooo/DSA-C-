#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

void queueinit(stack<int>& A, stack<int>& B){

    while(!A.empty()){
        B.push(A.top());
        A.pop();
    }
}

void enqueuestack(stack<int>& A, int item){
    A.push(item);
}
void dequeuestack(stack<int>&A, stack<int>& B){
    if(B.empty()){
        queueinit(A, B);
    }
    if(!B.empty()){
        B.pop();
    }
}

int front(stack<int>& A, stack<int>& B){
    if(B.empty()){
        queueinit(A, B);
    }

    if(!B.empty()){
        return B.top();
    }

    return -1;
}

bool isqueuefromstackempty(stack<int>& A, stack<int>& B){
    return A.empty() && B.empty();
}

void printQueue(stack<int> A, stack<int> B){

    while(!B.empty()){

        cout<<B.top()<<" ";
        B.pop();
    }

    stack<int> temp;

    while(!A.empty()){
        temp.push(A.top());
        A.pop();
    }

    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
}

int main(){
    stack<int> numstack;
    stack<int> numstackrev;

    enqueuestack(numstack, 67);
    enqueuestack(numstack, 90);
    enqueuestack(numstack, 110);
    enqueuestack(numstack, 999);

    dequeuestack(numstack, numstackrev);
   
    printQueue(numstack, numstackrev);


    return 0;

}