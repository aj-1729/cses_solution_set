// jha
// 18-05-2025
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
 
void solve(int a , int b , int c , int n)
{
    if(n == 0) return ; 
 
    solve(a , c , b , n-1) ; 
 
    cout << a << " " << c << endl ;
 
    solve(b , a , c , n-1) ; 
}
 
int32_t main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n ; cin >> n ; 
 
    cout << (pow(2 , n) - 1) << endl ; 
 
    solve(1 , 2 , 3 , n) ;
    
    return 0;
}