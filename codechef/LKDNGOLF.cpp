#include <iostream>
using namespace std;

char* golf()
{
    int n,x,k;
    int b;
    cin>>n>>x>>k;
    
    if(x%k==0)
    return ("yes");
    if((n+1-x)%k==0)
    return("yes");
    
    return("no");
}

int main() {
    int t;
    cin>>t;
    while(t>0)
    {
        	cout<<golf()<<endl;
        	t--;
    }
	// your code goes here

	return 0;
}
