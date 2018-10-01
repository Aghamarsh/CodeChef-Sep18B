#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    
    ll t;
    
    cin>>t;
    
    for(ll i=0;i<t;i++)
    {
        ll s,x,n;
        cin>>n>>x>>s;

    ll a,b;
    
        for(ll j=0;j<s;j++)
        {
            cin>>a>>b;
            
            if(a==x)
            {
                x=b;
            }
            else if(b==x)
            {
                x=a;
            }
        }
        cout<<x<<endl;
    }
}