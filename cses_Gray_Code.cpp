// jha
// 25-03-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define f(n) for(int i = 0; i < n; i++)
#define f1(n) for(int i = 1; i <=n; i++)
#define all(a) (a).begin(), (a).end()
using namespace std;
 
#define debug(...) 42
 
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n ; 
    cin >> n ; 
    vector <string> vec ;
    
    vec.pb("0") ;
    vec.pb("1") ;
    
    for(int i = 2 ; i <= n ; i ++)
    {
      int size = vec.size() ; 
      
      for(int j = size-1 ; j >= 0 ; j--)
      {
        vec.pb(vec[j]) ;
      }
      
      for(int j = 0 ; j < size ; j++)
      {
        vec[j] = "0" + vec[j] ;
        vec[j+size] = "1" + vec[j+size] ;
      }
    }
    
    for(int i = 0 ; i < vec.size() ; i ++)
    {
      cout << vec[i] << endl ;
    }
    return 0;
}
