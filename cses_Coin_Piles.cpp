// jha
// 16-05-2025
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
 
// bool solve(int a , int b)
// {
//     if(a == 0 && b == 0) return true ; 
 
//     if(a < 0 || b < 0) return false ; 
 
//     bool x = solve(a - 2 , b - 1) ; 
//     bool y = solve(a - 1 , b - 2) ; 
 
//     return (x || y) ; 
// }
 
 
int32_t main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    T(t)
    {
        int a , b ; cin >> a >> b ; 
 
        if((a+b) % 3 == 0)
        {
            if(min(a,b) * 2 < max(a,b)) cn ; 
            else cy ; 
        }
        else cn ; 
    }
    return 0;
}
