#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)        //BUG
            {
                sum=sum+a[i][j];
            }
               if((i+j)==n)          //BUG
    {
        sum2=sum2+a[i][j];
    }
        }
    }
 
 
 
    int ans = sum - sum2;
    if(ans<0)
    {
        ans = abs(ans);    //BUG
    }
    cout<<ans<<endl;
    return 0;
 
}
 