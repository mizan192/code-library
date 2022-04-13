///Bishmillahir Rahmanir Rahim,In the name of Almighty Allah(swt)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lop(i,n) for(i=0;i<n;i++)
#define lop1(i,n) for(i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pi 3.14159265358979323846
#define smile ios_base::sync_with_stdio(false);   cin.tie(NULL);
//void file();
//void error();

int main()
{
   smile        //file();

   int t;
//   cin >> t;
//   for (int z = 1; z <= t; z++) {
   int n;
   cin >> n;
   int ar[n + 1];
   int i, j, a;
   lop(i, n) {
      cin >> a;
      ar[i + 1] = a;
   }
   for(i=1;i<n+1;i++){
      int f,s,r;
      f=ar[i];
      s=ar[f];
      r=ar[s];
      if(r==i){
         cout<<"YES"<<endl;
         return 0;
      }
   }
   cout<<"NO"<<endl;






//   } //lop
//  error();
   return 0;
}

/*
void file() {
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   freopen("error.txt", "w", stderr);
#endif
}
void error()
{
   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
}

*/