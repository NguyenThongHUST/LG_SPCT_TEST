/* Author: Thong Nguyen
 * HackerRank URL for this exercise: https://www.hackerrank.com/challenges/balanced-brackets/problem
 */

// Complete the isBalanced function below.
#include <iostream>
#include <stack>
using namespace std;

string isBalanced(string s) {
    stack<char> mystack;
    for (char& c : s) {
        if(c == '{' || c == '[' || c=='('){
            mystack.push(c);
        } else {
            if(mystack.empty() || abs(mystack.top() - c) > 2){
               return "NO";
            } else {
                mystack.pop();
            }
        }
    }
    
    if(mystack.empty())
        return "YES";
    return "NO";
}
