#include <bits/stdc++.h>
using namespace std;
deque<int> dq;
deque<int>dq1;
void push(int x) {
    dq.push_front(x);
}
int pop() {
    
    if (!dq.empty()) {
        int top = dq.front();
        dq.pop_front();
        return top;
    }
    return -1;
}
int size(deque<int>d) {
    return d.size();
}
bool isEmpty(deque<int>d) {
    return d.empty();
}
void enqueue(int x) {
    dq1.push_front(x);
}
int dequeue() {
    if (!dq1.empty()) {
        int front = dq1.back();
        dq1.pop_back();
        return front;
    }
    return -1;
}

int main() {
    push(1);
    push(2);
    push(3);
    cout<<pop()<<endl;
    if (isEmpty(dq)) {
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }
    cout<<pop()<<endl;
    cout<<size(dq)<<endl;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    cout<<dequeue()<<endl;
    if (isEmpty(dq1)) {
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }
    cout<<size(dq1)<<endl;
    cout<<dequeue()<<endl;
    return 0;
}