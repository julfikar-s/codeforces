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
        string s,a;
        cin>>s;
        a=s[0];
        char x=s[0];
        for(int i=1; i<n-1; i++)
        {
            if(s[i]==x)
                {
                    x=s[i+1];
                    a=a+x;
                    i++;
                }
        }
        cout<<a<<endl;
    } 
    return 0;
}