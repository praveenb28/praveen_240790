#include<stack>
#include<algorithm>
#include <iostream>
#include <string>
#include<vector>
using namespace std;
int sum(vector<int>& s,int x){
    int summation = 0,num=0;
    for(int i = 1; i< s.size();i++){
        s[i] += s[i-1];
    }
    
    for(int a = 0 ; a< s.size();a++){
        if(s[a]==x){num++;}
       
        for(int b = 0;b<a;b++){
             
            summation =s[a] - s[b];
            if(summation==x){
                 num++;
            }
            
        }
    }
    return  num;
}
int main() {
 int n ,  x , num = 0;
 cin >> n;
 cin >> x;
 vector<int> s(n) ;
 for(int i = 0 ; i < n ; i++){
        cin >> s[i];
 } 
 num = sum(s,x);
 cout<< num <<endl;
}
