#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    string s[n];
    int t[n];
    for(int i=0;i<n;i++){
        cin >> s[i] >> t[i];
    }
    set<string> st;
    int best=-1, best_score=-1;
    for(int i=0;i<n;i++){
        if(st.find(s[i]) == st.end()){
            st.insert(s[i])
            if(t[i] > best_score){
                best_score = t[i];
                best = i;
            }
        }
    }
    cout << best+1 << endl;
    return 0;
}