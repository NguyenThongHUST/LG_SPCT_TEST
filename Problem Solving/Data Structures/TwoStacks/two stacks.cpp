

/* Author: Thong Nguyen
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/queue-using-two-stacks/problem
 */


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

class MyQueue{
    public:
        stack<int> stack1;
        stack<int> stack2;
        void enqueue(int num){
            stack1.push(num);
        }   
        
        void dequeue(){
           front();
           stack2.pop();
        } 
        
        int front(){
           if(stack2.empty()){
               while (!stack1.empty()) {
                   stack2.push(stack1.top());
                   stack1.pop();
               }
           }
            return stack2.top();
        }
        
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    MyQueue* myqueue = new MyQueue();
    int n=0;
    cin>>n;   
    for(int i=0; i<n; i++){
        int input;
        cin>>input;

        if(input==1){
            int data;
            cin>>data;
            myqueue->enqueue(data);
        }

        if(input==2){
            myqueue->dequeue();
        }

        if(input==3){
            cout << myqueue->front() << endl;
        }
    }
    return 0;
}
