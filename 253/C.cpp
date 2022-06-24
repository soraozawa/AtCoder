#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int q;
    cin >> q ;
    multiset<int> st;
    while(q--){
        int x;
        cin >> x;
        if(x == 1){
            cin >> x;
            st.insert(x);
        }else if(x == 2){
            int c;
            cin >> x >> c;
            while(c-- and st.find(x) != st.end()){
                st.erase(st.find(x));
            }
        }else{
            cout << *st.rbegin() - *st.begin() << endl;
        }
    }
}