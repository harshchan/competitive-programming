#include <iostream>
using namespace std;

long long dice()
{
	long long n,x,sum=0;
	cin>>x;
	
	n=x/4;
	int mod=x%4;
	
	if(n>=1)
	{
		if(mod==0)
		{
			sum=(44*(n-1))+(4*15);
		}
		if(mod==1)
		{
			sum=44*(n-1)+11+45+20;
		}
		if(mod==2)
		{
			sum=44*(n-1)+22+30+36;
		}
		if(mod==3)
		{
			sum=44*(n-1)+33+30+36;
		}
	}
	else
	{if(x==0)
	return 0;
		if(x==1)
		return 20;
		if(x==2)
		return 36;
		if(x==3)
		return 51;
	}
	
	return sum;
}

int main() {
    int t;
    cin>>t;
    while(t>0)
    
    {
        cout<<dice()<<endl;
        t--;
    }
	// your code goes here
	return 0;
}
