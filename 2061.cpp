#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s;
    for(int i=0;i<m;i++)
    {
        cin>>s;
        if(s=="fechou")
        {
            n++;
        }
        else
            n--;
    }
    cout<<n<<endl;
}
