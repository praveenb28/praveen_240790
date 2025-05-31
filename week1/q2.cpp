#include<bits/stdc++.h>
#include<stack> 
#include<iostream>
using namespace std;

int main() {
	 int n;
	 cin >> n;
	 vector<int> v ;
	 for(int i = 0;i<n;i++){
	     int a;
	     cin >> a;
	     v.push_back(a);
	 }
	 sort(v.begin(),v.end());
	 int num = 0;
	 int sum = 0;
	 int x = n-1;
	 for(int i = 0; i<x+1; i++){
	     sum += v[i];
	     if(sum > v[x]|| n == 1){
	         i--;
	         num++;
	         sum = 0;
	         x--;
	     }
	 }
	 cout << num << endl;
}
