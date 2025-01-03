#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
      
        int n,q;
    cin>>n>>q;
    
    int ar[n+10];
    int forw[n+10];
    int backw[n+10];
    forw[0]=backw[n+1]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        
    }
    for(int i=1;i<=n;i++)
    {
        forw[i]=__gcd(forw[i-1],ar[i]);
    }
    for(int i=n;i>=1;i--)
    {
        backw[i]=__gcd(backw[i+1],ar[i]);
    }
    
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<__gcd(forw[l-1],backw[r+1])<<endl;
    }
    }
    
    


    return 0;
}
