#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
      cout  << " ";
    }
    for (int j = i; j <2 * i; j++) {
      cout  <<  j;
    }
    int ele = 2 * (n - i - 1);
    for (int j = 1; j <= i - 1; j++) {
      cout  << ele--;
    }
    cout  << endl;
  }
  return 0;
}