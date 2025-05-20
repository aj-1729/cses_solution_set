// jha
// 13-05-2025
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
 
 
int32_t main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n ; 
    cin >> n ; 
 
    vi vec(n , 0) ;
 
    int count = 1 ; 
 
    for(int i = 0 ; i < (n/2) ; i ++)
    {
        vec[i] = count ;
        count ++ ;
        vec[n-i-1] = count ; 
        count ++ ;
    } 
    
 
    if( n % 2 != 0 ) vec[n/2] = n ; 
 
    if(n % 2 != 0) swap(vec[0] , vec[n/2]) ; 
    else swap(vec[0] , vec[(n/2) - 1]) ; 
 
    if( n == 1 ) cout <<  1 ;
 
    else if( n <= 3 && n != 1 ) cout << "NO SOLUTION" ; 
 
    else f(n) cout << vec[i] << " "; 
    
    return 0;
}
