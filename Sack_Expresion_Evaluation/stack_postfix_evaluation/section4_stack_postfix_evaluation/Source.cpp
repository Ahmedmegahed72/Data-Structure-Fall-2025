#include <iostream>
#include <stack>
#include <sstream>
#include <cmath>
using namespace std;

int main() {


    /*string postfix;
    stack<int> st;

    cout << "Enter postfix expression: ";
    cin >> postfix;

    for (char c : postfix) {
        if (isdigit(c)) {
            st.push(c - 48);
        }
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            switch (c) {
            case '+': st.push(a + b); break;
            case '-': st.push(a - b); break;
            case '*': st.push(a * b); break;
            case '/': st.push(a / b); break;
            case '^': st.push(pow(a, b)); break;
            default:
                cout << "Unknown operator: " << c << endl;
                return 1;
            }
        }
    }

    cout << "Result = " << st.top() << endl;*/



/////////////////////////////////////////////////////////////////////////////////////////
//////////////////////   With Spaces   ///////////////////
    
    string postfix;
    cout << "Enter postfix expression (space separated): ";
    getline(cin, postfix); 

    stack<int> st;
    stringstream ss(postfix);
    string token;

    while (ss >> token) {
        if (isdigit(token[0])) {
            st.push(stoi(token)); 
        }
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            switch (token[0]) {
            case '+': st.push(a + b); break;
            case '-': st.push(a - b); break;
            case '*': st.push(a * b); break;
            case '/': st.push(a / b); break;
            case '^': st.push(pow(a, b)); break;
            default:
                cout << "Unknown operator: " << token << endl;
                return 1;
            }
        }
    }

    cout << "Result = " << st.top() << endl;




    return 0;
}
