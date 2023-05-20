#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main(){
    // Find next smallest element

    vector<int>v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    stack<int>s;
    s.push(-1);

    vector<int>ans(v.size());

    for(int i = v.size()-1; i >= 0; i--){
        int curr = v[i];
        while(s.top() >= curr){
            s.pop();
        }

        ans[i] = s.top();
        s.push(curr);
    }

    cout << "Print the vecror " << endl;

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}