// jha
// 17-05-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define f(n) for(int i = 0 ; i < n ; i++)
#define f1(n) for(int i = 1 ; i <= n ; i++)
#define cy cout << "YES" << endl 
#define cn cout << "NO" << endl 
#define vi vector <int> 
#define vs vector <string> 
#define mi map <int,int> 
#define T(t) int t ; cin >> t ; while( t -- ) 
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define MXI 1000000007LL
using namespace std;
#define debug(...) 42
 
int solve(int n , int i , vi & dp)
{
    if(i == n) return 1 ; 
    if(i > n) return 0 ; 
 
    if(dp[i] != -1) return dp[i] ; 
 
    int ans = 0 ;
 
    for(int j = 1 ; j < 7 ; j ++)
    {
        ans += (solve(n , (i + j) , dp) % MXI) ;
    }
 
    return dp[i] = ans % MXI ; 
}
 
int32_t main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    
    int n ; cin >> n ; 
 
    vi dp(n+1 , -1) ; 
 
    cout << solve(n , 0 , dp) ; 
    
    return 0;
}
