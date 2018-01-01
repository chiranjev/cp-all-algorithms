#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

float squareRoot(int n,int p)
{
   int s=0,e=n;
   float ans;
   int mid;

   // integral part
   while(s<=e)
   {
      mid=(s+e)/2;
      if(mid*mid==n)
      {
         ans=mid;
         break;
      }
      else if(mid*mid<n)
      {
         ans=mid;
         s=mid+1;
      }
      else
         e=mid-1;
   }

   // Fractional Part
   float inc=0.1;
   for(int i=0;i<p;i++)
   {
      while(ans*ans<=n)
         ans+=inc;
      ans-=inc;
      inc/=10;
   }

   return ans;

}

int main()
{
	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif


   cout << squareRoot(10,3) << endl;
   cout << squareRoot(49,4) << endl;
   cout << squareRoot(2,3) << endl;



	return 0;
}
