#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
 
int main()
{
    
    ll t;
    
    cin>>t;
    
    for(ll i=0;i<t;i++)
    {
        ll m,x,n,y;
        cin>>n>>m>>x>>y;
        
        ll temp1=n,temp2=m;
        
        temp1--;
        temp2--;
        
        temp1-=1;
        temp2-=1;
 
        if(temp1==0 && temp2==0)
        {
            cout<<"Chefirnemo"<<endl;
            continue;
        }
        
        if(temp1>=0 && temp2>=0)
       { temp1=temp1%x;
        temp2=temp2%y;
       }
       
         //cout<<temp1<<" "<<temp2<<endl;
       
        if(temp1==0 && temp2==0)
        {
            cout<<"Chefirnemo"<<endl;
            continue;
        }
        
        temp1=n;
        temp2=m;
        
        temp1--;
        temp2--;
        
        temp1=temp1%x;
        temp2=temp2%y;
        
    //    cout<<temp1<<" "<<temp2<<endl;
        
        if(temp1==0 && temp2==0)
        {
            cout<<"Chefirnemo"<<endl;
        }
        else
        {
            cout<<"Pofik"<<endl;
        }
    }
}  