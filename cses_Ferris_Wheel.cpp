// jha
// 20-05-2025
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
 
    int n , x ; cin >> n >> x ; 
 
    vi vec(n) ; 
 
    f(n) cin >> vec[i] ; 
 
    sort(all(vec)) ; 
 
    int count = 0 ;
 
    int l = 0 , r = (n-1) ; 
 
    while(l <= r)
    {
        if((vec[l] + vec[r]) <= x)
        {
            l ++ ; r -- ; 
            count ++ ;
        }  
        else { r-- ; count ++ ; }
    }
 
    cout << count << endl ;
    
    return 0;
}