#include <iostream>
#include <cstring>
using namespace std;

class Stack {
private:
    struct Node {
        char data;
        Node* next;
    };
    Node* top;

public:
    Stack() : top(nullptr) {}

    ~Stack() {
        while (!IsEmpty()) {
            pop();
        }
    }

    void push(char d) {
        Node* t = new Node; // Create a new node
        if (t == nullptr) {
            cout << "Stack is Full" << endl;
        } else {
            t->data = d;
            t->next = top;
            top = t;
        }
    }

    char pop() {
        if (IsEmpty()) {
            return '\0'; // Return null character for empty stack
        } else {
            Node* p = top;
            char s = p->data;
            top = top->next;
            delete p;
            return s; // Return the popped character
        }
    }

    bool IsEmpty() {
        return top == nullptr;
    }

    bool IsOperand(char s) {
        return !(s == '+' || s == '-' || s == '*' || s == '/');
    }

    int OperatorPrecedence(char s) {
        if (s == '+' || s == '-') return 1;
        if (s == '*' || s == '/') return 2;
        return 0; // Invalid operator
    }

    char* Postfix(char str[]) {
        char* pf = new char[strlen(str) + 1];
        int i = 0, j = 0;

        while (str[i] != '\0') {
            if (IsOperand(str[i])) {
                pf[j++] = str[i]; // Append operand to postfix
            } else {
                while (!IsEmpty() && OperatorPrecedence(str[i]) <= OperatorPrecedence(top->data)) {
                    pf[j++] = pop(); // Pop from stack to output
                }
                push(str[i]); // Push current operator onto stack
            }
            i++;
        }

        while (!IsEmpty()) { // Pop remaining operators
            pf[j++] = pop();
        }
        pf[j] = '\0'; // Null-terminate the postfix expression

        return pf;
    }
};

int main() {
    Stack s;
    char str[] = "a+b";
    char* postfix = s.Postfix(str); // Get the postfix expression
    cout << "Postfix Expression: " << postfix << endl; // Output the result
    delete[] postfix; // Free allocated memory for postfix
    return 0;
}
