#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &inputStack, int count, int size) {

    // Base Case
    if(count == size/2) {
        inputStack.pop();
        return ;
    }
    int num = inputStack.top();
    inputStack.pop();

    // Recursive call
    solve(inputStack, count+1, size);
    inputStack.push(num);
}
void deleteMiddle(stack<int> &inputStack, int size) {
    int count = 0;
    solve(inputStack, count, size);
}

int main() {

    stack<int> inputStack;

    inputStack.push(2);
    inputStack.push(3);
    inputStack.push(4);
    inputStack.push(5);
    inputStack.push(6);

    int size = inputStack.size();
    // cout << size <<endl;
    deleteMiddle(inputStack, size);

    // for(int i = 0; i < inputStack.size(); i++) {
    //     cout << inputStack.top();
    //     inputStack.pop();
    // }

    inputStack.pop();
    inputStack.pop();
    
    cout << inputStack.top() << endl;

    return 0;
}