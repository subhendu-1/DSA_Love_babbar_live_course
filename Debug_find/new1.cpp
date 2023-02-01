#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define el '\n'

const ll N = 1e5 + 5;
void distinct()
{
    ll n,x;
    cin>>n>>x;
    vector<ll>vec;
    ll cnt_o=0,cnt_e=0;
    while(n--)
    {
        ll arr;
        cin>>arr;
        vec.push_back(arr);
        if(arr&1)cnt_o++;
        else cnt_e++;
        
    }
    
    if(cnt_o==0 && x%2==0)cout<<-1<<endl;
    else if(x%2==1)
    {
        if(cnt_e&1)cout<<cnt_e/2+1<<endl;
        else cout<<cnt_e/2<<endl;
    }
    else cout<<cnt_e<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        distinct();
}