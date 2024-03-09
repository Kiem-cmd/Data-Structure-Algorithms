#include<iostream>
using namespace std; 

class Node{
public:
    int data;
    Node* next;

    Node(int n){
        this->data = n;
        this->next = NULL;
    }
};

class Stack{
    Node* top_point;
public:
    Stack(){
        top_point = NULL;
    }
    bool push(int data);
    bool pop();
    int top();
    bool isEmpty();

};
bool Stack::push(int data){
    Node* new_node = new Node(data);
    new_node->data = data; 
    new_node->next = top_point;
    top_point = new_node; 
    cout<<top_point->data<<" push into stack!!!"<<endl;
    return true;
}
bool Stack::pop(){
    if(!top_point){
        cout<<"Stack empty!!!"<<endl;
        return false;
    }
    Node* temp;
    temp = top_point;
    top_point = top_point->next;
    free(temp);
    return true;
}
int Stack::top(){
    if(!top_point){
        cout<<"Stack empty!!!"<<endl;
        return 0;
    }
    return top_point->data;
}
bool Stack::isEmpty(){
    if(top_point){
        return false;
    }
    return true;
}

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.top();
    return 0;
}