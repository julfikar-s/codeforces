#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int counter=0;
        int x,y=0;
        cin>>x;
        for(int i=1;i<=9 ;i++)
        {
            for(int j=1; j<=4; j++)
            {
                y=(y*10)+i;
                counter+=j;
                if(x==y)
                break;
            }
            if(x==y)
            break;
            else
            y=0;
            
        }
        cout<<counter<<endl;
    }
}