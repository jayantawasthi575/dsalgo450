#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> factorial(int N){
        vector<int> store;
        store.push_back(1);
        int i=1;
        int carry=0;
        while(i<=N)
        { carry=0;
          for(int k=0;k<store.size();k++)
          {
              long long mul=store[k]*i+carry;
              store[k]=mul%10;
              carry=mul/10;
            //   cout<<store[k]<<endl;
            //   cout<<carry<<endl;
          }
          
          while(carry>0)
          {
              
              store.push_back(carry%10);
              carry=carry/10;
          }
          i++;
        }
        reverse(store.begin(), store.end());
        return store;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
} 