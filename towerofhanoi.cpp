#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

void towerofhanoi(int n,char src,char helper,char dest){
	if(n==0){
		return;
	}
	towerofhanoi(n-1,src,dest,helper);
	cout << "move " << n << " tile from " << src << " to " << dest << endl;
	towerofhanoi(n-1,helper,src,dest);
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

	towerofhanoi(n,'A','B','C');  // number of tiles, source, helper, destination

	return 0;
}
