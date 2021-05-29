
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : 16/05/2021 20:55:47
 *    Problem Name  : D. Queue
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/545/D
 *    @generated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a[n],b[n];
    for(ll i=0; i<n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b,b+n);
    vector<ll>v;

    ll temp = 0;
    for(ll i=0; i<n; i++) {
        if(b[i] >= temp) {
            v.push_back(b[i]);
            temp += b[i];
        }

        else {
            continue;
        }
    }

    cout << v.size() << endl;
    //for(auto x: v) cout << x << " ";
}

int main(){
    ios_base::sync_with_stdio(false);

    solve();

    return 0 ;
}