#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s, st;
        cin>>s;
        int l3=0, r3=0;
        for(int i=0; i<3; i++)
        {
            st=s.substr(i,1);
            l3+=stoi(st);
        }
        for(int i=3; i<6; i++)
        {
            st=s.substr(i,1);
            r3+=stoi(st);
        }
        if(l3==r3)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}