#include<iostream>
#include<map>
using namespace std;

int main(){
    string str;
    cin >> str;
    map<char,int>mp;
    for(int i = 0; i < str.size(); i++){
        mp[str[i]]++;
    }
    map<char,int>::iterator i;
    for(i = mp.begin(); i != mp.end(); i++){
        cout << i->first << " ";
    }

    return 0;
    
}