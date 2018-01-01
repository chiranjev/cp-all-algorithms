#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

int lastOccurance(int arr[],int n,int key)
{
   int s=0,e=n-1;
   int mid;
   int ans=-1;
   while(s<=e)
   {
      mid=(s+e)/2;

      if(arr[mid]==key) // Found
      {
         ans=mid;
         s=mid+1; // because we want to find the last occurance
      }
      else if(arr[mid]>key) // key might be in left half
         e=mid-1;
      else
         s=mid+1;
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


   int arr[]={1,2,2,2,2,4,4};
   int n=7;
   int key;

   cin >> key;

   int ans=lastOccurance(arr,n,key);

   if(ans==-1)
      cout << key << " is not present" << endl;
   else
      cout << key << " is present at index " << ans << endl;




	return 0;
}
