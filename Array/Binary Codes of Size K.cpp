#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;cin>>n;
	while(n--)
	{
	    int cnt=0;
	    string s;cin>>s;
	    int i=0;
	    while(i<s.length())
	    {
	        if(s[i]=='0')
	        {continue;i++;}
	        
	        cnt++;
	        int j=i;
	        while(s[j]=='1')
	        j++;
	        
	        i=j;
	    }
	    
	    cout<<"\n";
	}
	return 0;
}
