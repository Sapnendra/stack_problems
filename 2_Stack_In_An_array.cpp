#include<iostream>
#include<stack>
using namespace std;

class Stack {
    int *arr;
    int top1;
    int top2;
    int size;
    public:
    // constructor
    Stack(int s) {
        this -> size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    // push in stack 1
    void push1(int element) {
        if(top2 - top1 > 1) {
            top1++;
            arr[top1] = element;
        } else {
            cout << "Stack is overflow" << endl;
        }
    }

    // push in stack 2
    void push2(int element) {
        if(top2 - top1 > 1) {
            top2--;
            arr[top2] = element;
        } else {
            cout << "Satck is overflow" << endl;
        }
    }

    // pop in stack 1
    int pop1() {
        if(top1 >= 0) {
            int ans = arr[top1];
            top1--;
            return ans;
        } else {
            return -1;
        }
    }

    // pop in stack 2
    int pop2() {
        if(top2 < size) {
            int ans = arr[top2];
            top2++;
            return ans;
        } else {
            return -1;
        }
    }

    // stack1 is empty or not
    bool isEmpty1() {
        if(top1 == -1) {
            return true;
        } else {
            return false;
        }
    }

    // stack2 is empty or not
    bool isEmpty2() {
        if(top2 == size) {
            return true;
        } else {
            return false;
        }
    }
    
    // Top element of stack1
    int peek1() {
        if(top1 >= 0) {
            return arr[top1];
        } else {
            cout <<"stack is underflow" << endl;
        }
    }

    // Top element of stack2
    int peek2() {
        if(top2 < size) {
            return arr[top2];
        } else {
            cout <<"stack is underflow" << endl;
        }
    }
};

int main() {
    Stack st(9);

    // Push operation
    st.push1(28);
    st.push1(22);
    st.push1(21);
    st.push1(27);
    st.push2(20);
    st.push2(211);
    st.push2(235);
    st.push2(238);
    st.push2(240);
    
    st.pop1();
    cout <<"Top element of stack1: " << st.peek1() << endl;
    st.pop1();
    cout <<"Top element of stack1: " << st.peek1() << endl;

    st.pop2();
    cout <<"Top element of stack1: " << st.peek2() << endl;st.pop1();
    st.pop2();
    cout <<"Top element of stack1: " << st.peek2() << endl;st.pop1();

    if(st.isEmpty1()) {
        cout <<"Stack1 is Empty"<< endl;
    } else {
        cout <<"Stack1 is Not empty" << endl;
    }

    if(st.isEmpty2()) {
        cout <<"Stack2 is Empty"<< endl;
    } else {
        cout <<"Stack2 is Not empty" << endl;
    }
    return 0;
}