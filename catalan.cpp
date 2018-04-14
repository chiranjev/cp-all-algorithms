#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

// recursive
int cat(int n){
   if(n<=1){
      return 1;
   }
   ll ans = 0;
   for(int i=1;i<=n;i++){
      ans+=cat(i-1)*cat(n-i);
   }
   return ans;
}

// using dp
int catalan[1000];

int catdp(int n){
   catalan[0]=1;

   for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
         catalan[i]+=catalan[j-1]*catalan[i-j];
      }
   }
   return catalan[n];
}

//O(n) Using Binomial Coefficient

int binomial(int n,int r){

   int res=1;
   if(r>n-r){
      r=n-r;
   }
   for(int i=0;i<r;i++){
      res*=(n-i);
      res/=(i+1);
   }
   return res;
}

int catbc(int n){
   int c = binomial(2*n,n);

   return (c/(n+1));
}

int main()
{
	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif

	int i,j,k,len,n,sum,count;
	string str;
	int t;

	cin >> n;

   memset(catalan,0,sizeof(catalan));
   cout << catbc(n) << endl;

	return 0;
}
