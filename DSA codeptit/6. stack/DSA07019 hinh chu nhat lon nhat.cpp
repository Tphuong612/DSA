
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    int a[n + 1], l[n + 1], r[n + 1];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    stack<int> st;// tim kiem pta dau tien ben trai nho ho a[i]
    for (int i = 1; i <= n; ++i) {
        while (!st.empty() && a[st.top()] >= a[i]) {//st.top(): dong vai trai la cac phan tu dung truoc
            st.pop();// tim phan tu dau tien sao cho a[s.top()] < phan tu dang xet;
        }
        if (st.empty()) l[i] = 1;
        else l[i] = st.top() + 1;
        st.push(i);
    }

    while (!st.empty()) st.pop();
    
    for (int i = n; i >= 1; --i) {// tim kiem pta cuoi cung ben trai nho ho a[i]
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if (st.empty()) 
			r[i] = n;
        else r[i] = st.top() - 1;
        st.push(i);
    }

    long long ans = 0;
    for (int i = 1; i <= n; ++i) {
    	//cout<<l[i]<<" "<<r[i]<<endl;
        long long s = (long long) a[i] * (r[i] - l[i] + 1);
        ans = max(ans, s);
    }
    cout << ans;
}

int main() {
   
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
