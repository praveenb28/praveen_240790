#include <bits/stdc++.h>
using namespace std;
int beauty_beast(vector<int>& a,vector<int>& b,int n){
    vector<pair<float,int>>ratio;
    for(int i = 0;i<n;i++){
        ratio.push_back(make_pair((float)b[i]/a[i],i));
    }
    sort(ratio.begin(),ratio.end());
    int max_beauty = 0;
    int x = 0;
    for(int i = 0;i<n;i++){
        max_beauty += x*b[ratio[i].second];
        x += a[ratio[i].second];
    }
    return max_beauty;
}
int main() {
	 int T;
	 cin >> T;
      for(int z = 0; z<T;z++){
          int n;
          cin >> n;
          vector<int>a(n);
          vector<int>b(n);
          for(int y=0;y<n;y++){
 
              cin >> a[y];
               
          }
          for(int y=0;y<n;y++){
              
              cin >> b[y];
              
          }
         cout << beauty_beast(a,b,n) << endl;   
      }
      
}
