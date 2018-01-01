// applicable only if array is sorted and rotated....not applicable on just sorted array
#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

int highestElement(int arr[],int n)
{
   int s=0,e=n-1,mid;

   while(s<=e)
   {
      mid=(s+e)/2;
      if(mid>s&&arr[mid]<arr[mid-1])
         return mid-1;
      else if(mid<e&&arr[mid]>arr[mid+1])
         return mid;
      else if(arr[mid]>=arr[e])
         s=mid+1;
      else
         e=mid-1;
   }
   return -1;
}

int main()
{
	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif


   int arr[]={2,3,4,5,6,7,1};

   int n=7;

   cout << highestElement(arr,n) << endl;


	return 0;
}
