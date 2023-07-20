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
        int b[n];
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            b[i]=n-x+1;
        }
        for(int i=0; i<n; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}