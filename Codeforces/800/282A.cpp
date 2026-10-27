#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;int x=0;
    cin>>n;
    while(n--)
    {
        string t;
        
        cin >> t;

       
           
           if(t[0]=='+' || t[2]=='+')
           {
             x++;
           }
           else
          
           {
             x--;
           }
        
      
       
    } cout<<x<<endl;
}