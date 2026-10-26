
#include<iostream>
#include<stack>
#include<string>
using namespace std;

 // 5. Check Balanced Parentheses 
 // "{[()]}" → Balanced; "([)]" → Not Balanced.
 
int main(){
    string s;
    cin >> s;

    stack<char> st;

    for(char c : s){
        if(c == '(' || c == '{' || c == '['){
            st.push(c);
        }
        else{
            if(st.empty()){
                cout << "Not Balanced";
                return 0;
            }
            else{
                char top = st.top();
                st.pop();

                if((c == ')' && top != '(') ||
                   (c == '}' && top != '{') ||
                   (c == ']' && top != '[')){
                    cout << "Not Balanced";
                    return 0;
                }
            }
        }
    }

    if(st.empty()){
        cout << "Balanced";
    }
    else{
        cout << "Not Balanced";
    }

    return 0;
}
