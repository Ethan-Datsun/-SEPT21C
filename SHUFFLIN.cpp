#include<iostream>

using namespace std;

int main()
{
	int testcase;
	cin>>testcase;
	
	while(testcase--)
	{
	    int n;
	    cin>>n;
	    int even=0,odd=0;
	    
	    for(int i=0;i<n;i++)
	    {
	       int x;
	       cin>>x;
	       
	       if(x%2==1)
	       odd = odd +1;
	       else
	       even=even+1;
	    }
	    
	    cout<< min(even, (n+1)/2) + min(odd, n/2)<<endl;
	}
	

	
}
