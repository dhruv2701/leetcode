#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; int k; cin>>s>>k;
    int need = 1<<k;
    int hashVal = 0;
    bool got[need]={false};    //2^k
    int allOne = need-1;
    cout<<(1<<1);
    for(int i=0;i<s.length();i++)
    {
        hashVal = ((hashVal<<1) & allOne) | (s[i]-'0');
        if(i>=k-1 && !got[i])
        {got[need]=true; need--;}
    }
    if(need==0)
    cout<<"true";
    else
    cout<<"false";
    
    return 0;
}