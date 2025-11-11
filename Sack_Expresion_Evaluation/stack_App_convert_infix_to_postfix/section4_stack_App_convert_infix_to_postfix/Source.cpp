#include <iostream>
#include <stack>
#include <sstream>
#include <string>
using namespace std;

/*int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}*/


// With spaces
int precedence(string op) {
    if (op == "+" || op == "-") return 1;
    if (op == "*" || op == "/") return 2;
    if (op == "^") return 3;
    return 0;
}

int main() {
  
    /*string infix, postfix = "";
    stack<char> st;

    cout << "Enter infix expression: ";
    cin >> infix;

    for (char c : infix) {
        if (isalnum(c)) {         
            postfix += c;
        }
        else if (c == '(') {
            st.push(c);
        }
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop(); 
        }
        else { // operator (+ - * / ^)
            while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    cout << "Postfix: " << postfix << endl; */

/////////////////////////////////////////////////////////////////////////////////////
////////////////////   With Spaces   ////////////////////

    string infix;
    cout << "Enter infix expression (space separated): ";
    getline(cin, infix);  

    stringstream ss(infix);
    string token;
    stack<string> st;
    string postfix = "";

    while (ss >> token) {
        if (isdigit(token[0])) { 
            postfix += token + " ";
        }
        else if (token == "(") {
            st.push(token);
        }
        else if (token == ")") {
            while (!st.empty() && st.top() != "(") {
                postfix += st.top() + " ";
                st.pop();
            }
            st.pop(); 
        }
        else { 
            while (!st.empty() && precedence(st.top()) >= precedence(token)) {
                postfix += st.top() + " ";
                st.pop();
            }
            st.push(token);
        }
    }

    while (!st.empty()) {
        postfix += st.top() + " ";
        st.pop();
    }

    cout << "Postfix: " << postfix << endl;


    return 0;
}
