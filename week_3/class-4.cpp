#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vac;
    for(int i = 0; i < vac.size(); i++){
        vac.push_back(i);
    }
    for(int i = 0; i < vac.size(); i++){
     vac.pop_back();
    }
    return 0;
}