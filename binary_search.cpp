#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

int binarySearch(int arr[],int n,int key)
{
   int s=0,e=n-1;
   int mid;

   while(s<=e)
   {
      mid=(s+e)/2;

      if(arr[mid]==key) // Found
         return mid;
      else if(arr[mid]>key) // key might be in left half
         e=mid-1;
      else
         s=mid+1;
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


   int arr[]={1,3,5,10,12,15,17};
   int n=7;
   int key;

   cin >> key;

   int searchIndex=binarySearch(arr,n,key);

   if(searchIndex==-1)
      cout << key << " is not present" << endl;
   else
      cout << key << " is present at index " << searchIndex << endl;




	return 0;
}
