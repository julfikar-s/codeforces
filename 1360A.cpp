#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int max=a>b?a:b;
        int min=(a<b)?a:b;
        if(min*2>=max)
        {
            cout<<(min*2)*(min*2)<<endl;
        }
        else{
            cout<<(max*max)<<endl;
        }
    }
}