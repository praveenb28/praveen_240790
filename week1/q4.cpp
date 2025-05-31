#include<bits/stdc++.h>
#include<stack> 
#include<iostream>
using namespace std;
void sort (vector<pair<int,bool>>& a, int n){
    for(int i = 0; i< n; i++){
        for(int j = 0 ; j < n-i-1;j++){
            if(a[j].first>a[j+1].first){
                
                 
                a[j].second = !a[j].second;
                a[j+1].second = ! a[j+1].second;
                swap(a[j],a[j+1]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if(a[i].first==a[i+1].first&&a[i].second==false&&a[i+1].second==false){
            a[i].second== true;
            a[i+1].second== true;
            i++;
        }
    }
    // if(for (int i = 0; i < n; i++) {
    //     a[i].second == true;
    // }){
    //     cout << "YES" << endl;
    // }
    // else{
    //      cout << "NO" << endl;
    // }
    bool is = true;
    for (int i = 0; i < n; i++) {
        if(a[i].second==false){
            is = false;
            break;
        }
    }
    if(is){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return  ;
}
int main() {
	 int n;
	 cin >> n;
	 for(int t = 0; t< n;t++){
	     int a;
	     cin >> a;
	     vector<pair<int,bool>>aquamoon(a);
	     for(int i = 0;i<a;i++){
	         cin>>aquamoon[i].first;
	         aquamoon[i].second= true; // true means right
	     }
	     sort(aquamoon, a);
	 }
}
