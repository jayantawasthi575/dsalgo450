#include<bits/stdc++.h>
using namespace std;
stack<char>st;

stack<char>st1;
char insert_at_bottom(char x)
{
    if(st.size()==0)
    st.push(x);
    else{
        char a=st.top();
        st.pop();
        insert_at_bottom(x);
        st.push(a);
    }
}
char reverse()
{  if(st.size()>0)
    {
    char x=st.top();
    st.pop();
    reverse();
    insert_at_bottom(x);
    }
}
int main()
{
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');
    st1.push('1');
    st1.push('2');
    st1.push('3');
    st1.push('4');
    cout<<"Original Stack "<<endl;
    while(!st1.empty())
    {
    cout<<st1.top()<<" ";
    st1.pop();
    }
    reverse();
    cout<<endl<<"Reversed Stack "<<endl;
    while(!st.empty())
    {
    cout<<st.top()<<" ";
    st.pop();
    }
    return 0;
}
 