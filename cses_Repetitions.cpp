// jha
// 26-03-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define f(i,n) for(int i = 0 ; i < n ; i++)
#define f(i1,n) for(int i = 1 ; i <=n ; i++)
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
 
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s ; 
    cin >> s ;
    int count = 1 ,maxi = INT_MIN ;
    int n = s.size() ; 
    for(int i = 0 ; i < (n-1) ; i ++)
    {
        if(s[i] == s[i+1]) 
        {
            count ++ ;
            maxi = max(maxi,count) ;
        }
        else 
        {
            maxi = max(maxi , count) ; 
            count = 1 ;
        } 
    }
    if( n == 1 ) cout <<  1 << endl ;
    else cout << maxi << endl ;
 
    
    
    return 0;
}