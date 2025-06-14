// jha
// 22-05-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define f(n) for(int i = 0 ; i < n ; i++)
#define f1(n) for(int i = 1 ; i <= n ; i++)
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define vi vector<int>
#define vs vector<string>
#define mi map<int,int>
#define T(t) int t ; cin >> t ; while( t -- )
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define MXI 1000000007LL
using namespace std;
#define debug(...) 42

int solve(int n , int ind , vi& vec , int sum1 , int sum2)
{
    if(ind == n) return abs(sum1 - sum2) ; 

    int a = solve(n , ind + 1 , vec , sum1 + vec[ind] , sum2) ;  

    int b = solve(n , ind + 1 , vec , sum1 , sum2 + vec[ind]) ; 

    return min(a,b) ; 
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n ; cin >> n ;  
    int test ; 

    vi vec(n) ; f(n) cin >> vec[i] ; 

    cout << solve(n , 0 , vec , 0 , 0) ; 
    
    return 0;
}