#include<iostream>
using namespace std;

class twoStacks {
    int *arr;
    int size;
    int top1, top2;
    public:
    twoStacks (int n) {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }
    void push1(int x) {
        if( top1 < top2-1 ) {
            top1++;
            arr[top1] = x;
        } else {
            cout << "Stack is overflow" << endl;
            exit(1);
        }
    }
    void push2(int x) {
        if (top1 < top2) {
            top2--;
            arr[top2] = x;
        } else {
            cout << "Stack id overflow" << endl;
            exit(1);
        }
    }
    // function for pop element from stack 1
    int pop1() {
        if(top1 >= 0) {
            int x = arr[top1];
            top1--;
            return x;
        } else {
            cout << "Stack is empty" << endl;
            exit(10);
        }
    }
    int pop2() {
        if(top2 < size) {
            int x = arr[top2];
            top2++;
            return x;
        } else {
            cout << "stack is overflow" << endl;
            exit(1);
        }
    }
};

int main () {
    
    twoStacks ts(5);
    ts.push1(2);
    ts.push2(4);
    ts.push1(12);
    ts.push2(14);
    cout << "Poped element in first stack: "<< ts.pop1()<< endl;
    cout << "Poped element in second stack: " << ts.pop2() << endl;
return 0; 
}