
#include <iostream>

using namespace std;

int main()
{
   int testcase;
   cin>>testcase;
   while(testcase--)
   {
       int n,a,b,A=0,B=0,result;
       cin>>n>>a>>b;
       string s;
       cin>>s;
       for(int i=0;i<n;i++)
       {
        if(s[i]=='1')
            B++;
        else
            A++;
       }
          result=(A*a)+(B*b);
   cout<<result<<"\n";
   }

}
