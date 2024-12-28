//given t test cases and in each test case a number n .print its factorial for each %m;
//constraints 1<=T<=10^5
//1<=n<=10^5
/*#include<bits/stdc++.h>
using namespace std;
const int n=1e5+10;
long long  int fact[n];

int main(){
    //calculating every factorial of a number and store in the array 
    fact[0]=fact[1]=1;
    for(int i=2;i<n;i++){
        fact[i]=fact[i-1]*i;

    }
    long long t=0;
    cin>>t;
    while(t--){
        long long p=0;
        cin>>p;
        cout<<fact[p]<<endl;
    }
}*/
//given array a of N integers. given Q queries and in each query given a number X, print the count of that number in array
//constraints 
//1<=N<=10^5
//1<=a[i]<=10^7
//1<=q<=10^5
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// int main(){
//     ll n=0;
//     cin>>n;
//     ll arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     ll q;
//     cin>>q;
//     while(q--){
//         int x;
//         cin>>x;
//         int count=0;
//         for(int i=0;i<n;i++){
//             if(arr[i]==x){
//                 count++;
//             }
//         }
//         cout<<count<<endl;
//     }
// }
//time complexity o(n^2)
//now optimize this code 
const int n=1e5+10;
int hsh[n];

int main(){
    int k;
    cin>>k;
    int arr[k];
    for(int i=0;i<k;++i){
        cin>>arr[i];
        hsh[arr[i]]++;
    }
    ll q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
    }
}
//time comlexity O(N).
