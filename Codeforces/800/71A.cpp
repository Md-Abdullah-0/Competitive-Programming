#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
   
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string n;int i;
        cin>>n;
        int x=n.length();
        if(x<=10)
        {
            cout<<n<<endl;
        }
        else 
        {
           
            cout<<n[0]<<x-2<<n[x-1]<<endl;
        }
       

    }
}