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
 
int solve(int sum , int target , vi& vec , vi& dp)
{
    if(sum == target) return 1 ; 
    if(sum > target) return 0 ; 
 
    if(dp[sum] != -1) return dp[sum] ; 
 
    int count = 0 ; 
 
    for(int i = 0 ; i < vec.size() ; i ++)
    {
        count += (solve(sum + vec[i] , target , vec , dp)) % MXI ; 
    } 
 
    return dp[sum] = (count) % MXI ; 
}
 
int32_t main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    
    int n , k ; cin >> n >> k ;  
 
    vi vec(n) ;
 
    f(n) cin >> vec[i] ; 
 
    vi dp((k+1) , -1) ; 
 
    cout << solve(0 , k , vec , dp) ; 
 
    
    
    return 0;
}
