#include<bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
#define mk make_pair
#define PB push_back
                    
int main() {

ll n;
cin >> n;

string name;
int num;
map<string,int> m;

for(int i=0;i<n;i++)
{
    cin>>name;
    cin>>num;

    m[name]=num;
}
while(cin >> name)
{
    if(m.find(name)!=m.end())
    {
        cout<<name<<" "<<m.find(name)->second<<"\n";
    }
    else{
        cout<<"Not found"<<"\n";
    }
}


return 0;
}