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
        char y;
        bool ans=true;
        for(int i=0; i<n; i++)
        {
            if(s[i]==s[i+1])
            {
                continue;
            }
            y=s[i];
            for(int j=i+1; j<n;j++)
            {
                if(s[j]==y)
                {
                    ans=false;
                    break;
                }
            }
        }
        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}