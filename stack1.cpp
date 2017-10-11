#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> st;

    cout << "Size = " << st.size() << endl;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << "Size = " << st.size() << endl;
    cout << st.top() << ' ';
    st.pop();
    cout << st.top() << ' ';
    st.pop();

    cout << "Size = " << st.size() << endl;

    st.top()=77;

    st.push(4);
    st.push(5);

    cout << "Size = " << st.size() << endl;
    st.pop();

    cout << "Size = " << st.size() << endl;
    while(!st.empty()){
        cout << st.top() << ' ';
        st.pop();
    }
    cout << "Size = " << st.size() << endl;
    cout << endl;
}
