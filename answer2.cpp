#include <iostream>
using namespace std;
int fac(int n)
{
    int i,a=1;
    for(i=1;i<=n;i++)
    a=a*i;
    return a;
}
int main() 
{
	int n,i,l,j,r,c=0;
	cin>>n;
	vector <int> b(n);
	char a;
	for(i=0;i<n;i++)
	{
	    cin>>a;
	    int k= a;
	    b[i]=k;
	}
	sort(b.begin(),b.end());
	string s;
	cin>>s;
	for(i=0;i<s.length();i++)
	{
	    int k=s[i];
	    r=fac(n-i-1);
	    for(j=0;j<n;j++)
	    {
	        if(k==b[j])
	        {
	            l=j;
	            break;
	        } 
	    }
	    c=c+l*r;
	    l=0;r=0;
	}
	return 0;
}
