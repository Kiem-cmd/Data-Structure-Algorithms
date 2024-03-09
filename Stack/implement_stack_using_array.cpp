#include<iostream> 
using namespace std;

#define MAX 10000

class Stack{
    int top_point;
public:
    int a[MAX];
    Stack(){
        top_point = -1;
    }
    bool push(int x);
    bool pop();
    int top();
    bool isEmpty();

};
bool Stack::push(int x){
    if(top_point >= MAX - 1){
        cout<< "Stack full"; 
        return false;
    }
    a[++top_point] = x;
    cout<<"\""<< x<<"\"" << " push into stack"<<endl;
    return true;
}
bool Stack::pop(){
    if(top_point < 0){
        cout<<"Stack is null"<<endl;
        return false;
    }
    top_point--;
    return true;

}
int Stack::top(){
    if(top_point >= (MAX -1) || top_point < 0){
        return 0;
    }
    else{
        return a[top_point];
    }
}
bool Stack::isEmpty(){
    if(top_point < 0){
        return true;
    }
    return false;
}

int main(){
    class Stack root;

    root.push(10);
    root.push(20);
    root.push(40);
    cout<<root.top();

    return 0;
}