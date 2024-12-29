/*
given array a of N integers. given Q queries and in each query given L and R print sum of array elements from index L to R (L,R included)
constraints
1<=N<=10^5
1<=a[i]<= 10^9
1<=Q<=10^5
1<=L,R<=N
*/
// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e5+10;
// int a[N];

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     long long q=0;
//     cin>>q;
//     while(q--){
//         long long L,R;
//         cin>>L>>R;
//         long long sum=0;
//         for(int i=L;i<=R;i++){
//             sum+=a[i];
//         }
//         cout<<sum<<endl;
//     }
// }
//prefix sum used
// int main(){
//     int n;
//     cin>>n;
//     long long sum=0;
//     for(int i=1;i<=n;i++){
//         int k=0;
//         cin>>k;
//         sum+=k;
//         a[i]=sum;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int l,r;
//         cin>>l>>r;
//         cout<<a[r]-a[l-1]<<endl;
//     }
// }

/*
given 2d array a of N*N integers. Given Q queries and in each query given a,b,c 
and d print sum of squre represented by (a,b ) as top left point and(c,d) 
as top bottom right point.
constraints 
1<=N<= 10^3
1<=a[i][j]<= 10^9
1<=Q<=10^5
1<=a,b,c,d<=N
*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int ar[N][N];
long long pf[N][N];

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cin>>ar[i][j];
//         }
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int a,b,c,d;
//         cin>>a>>b>>c>>d;
//         long long sum=0;
//         for(int i=a;i<=c;i++){
//             for(int j=b;j<=d;j++){
//                 sum+= ar[i][j];
//             }
//         }
//         cout<<sum<<endl;
//     }

// }
//now optimize this code with prefix sum
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>ar[i][j];
            pf[i][j]=ar[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1]; 
        }

    }
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1]<<endl;
    }
}