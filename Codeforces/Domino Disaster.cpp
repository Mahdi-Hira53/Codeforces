#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='U')
                s[i]='D';
            else if(s[i]=='D')
                s[i]='U';

        }
        cout<<s<<endl;
    }
}
