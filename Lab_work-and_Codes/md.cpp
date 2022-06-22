#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<char> st;
	st.push('a');
	st.push('b');
	st.push('c');
	st.pop();
	st.push('d');
	st.pop();
    st.push('e');
    st.push('f');
    st.pop();
    st.pop();
    st.pop();

	while (!st.empty()) {
		cout << ' ' << st.top();
		st.pop();
	}
}
