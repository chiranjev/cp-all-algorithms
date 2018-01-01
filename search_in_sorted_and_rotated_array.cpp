// applicable only if array is sorted and rotated....not applicable on just sorted array
#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

int searchElement(int arr[],int n,int key)
{
   int s=0,e=n-1,mid;

   while(s<=e)
   {
      mid=(s+e)/2;

      if(arr[mid]==key)
         return mid;
      // mid lies in first line
      if(arr[s]<=arr[mid])
      {
         if(key>=arr[s]&&key<=arr[mid])
            e=mid-1;
         else
            s=mid+1;
      }
      // mid lies in second line
      else if(arr[e]>=arr[mid])
      {
         if(key>=arr[mid]&&key<=arr[e])
            s=mid+1;
         else
            e=mid-1;
      }
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
   int key=1;

   cout << searchElement(arr,n,key) << endl;

	return 0;
}
