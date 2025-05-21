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
 
    int n , m , k ; cin >> n >> m >> k ; 
 
    vi vec(n) , arr(m) ; 
 
    f(n) cin >> vec[i] ; 
    f(m) cin >> arr[i] ; 
 
 
    sort(all(vec)) ; sort(all(arr)) ; 
 
 
    int i = 0 , j = 0 , count = 0 ;
 
    while((i < n) && (j < m))
    {
        if(abs(arr[j] - vec[i]) <= k) 
        {
            count ++ ; 
            i ++ ; j ++ ;
        }
        else if((arr[j] + k) > vec[i]) i ++ ;
        else j ++ ;
    }
 
    cout << count << endl ;
 
    
    return 0;
}
