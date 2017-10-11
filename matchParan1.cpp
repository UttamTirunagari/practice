#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool arePair(char opening, char closing)
{
    if(opening == '(' && closing == ')') return true;
    else
        return false;
}

bool areParanthesisBalanced(string exp)
{
    stack <char> st;

    for(int i=0;i<exp.length();i++)
    {
        if(exp[i]=='(')
            st.push(exp[i]);
        else
            if(exp[i]==')')
            {
                if(st.empty() || !arePair(st.top(),exp[i]))
                {
                    return false;
                }
                else
                    st.pop();
            }
    }
    return st.empty()?true:false;
}

int main()
{
    string expression;

    cout <<"Enter an expression: ";
    cin >> expression;

    if(areParanthesisBalanced(expression))
        cout << "Balanced \n";
    else
        cout << "Not \n";
}


