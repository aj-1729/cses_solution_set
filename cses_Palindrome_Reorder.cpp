// jha
// 26-03-2025
#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define f(n) for(int i = 0 ; i < n ; i++)
#define f1(n) for(int i = 1 ; i <=n ; i++)
#define all(a) (a).begin(), (a).end()
using namespace std;
#define debug(...) 42
 
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s ; 
    cin >> s ;
    int n = s.size() ; 
 
    map <char ,int> mpp ;
 
    f(n) mpp[s[i]] ++ ; 
    int count = 0 ;
    char m = 'a' ;
    for(auto i : mpp)
    {
        if( i.second % 2 != 0 ) 
        {
            count ++ ;
            m = i.first ;
        }
    }
    vector < char > ans(n) ;
    if(count > 1) cout << "NO SOLUTION" ;
    else
    {
        
            int j = 0 ;
            for(auto i : mpp)
            {
                if( i.second % 2 == 0 )
                {
                    int t = i.second / 2 ; 
                
                    while( t -- )
                    {
                        ans[j] = i.first ; 
                        ans[n-j-1] = i.first ;
                        j ++ ;
                    } 
                }
                else 
                {
                    int x = (i.second-1) / 2 ;
 
                    while(x--)
                    {
                        ans[j] = i.first ; 
                        ans[n-j-1] = i.first ; 
                        j ++ ;
                    }
                }
            }
 
            if(count == 1)
            {
                //cout << m << endl ;
                ans[n/2] = m ;
            }
        
            f(n) cout << ans[i] ;
        
    }
    
    return 0;
}
