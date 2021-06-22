#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,x;
    cin>>N;
    int z;
    
    vector<int> v;
    for(int i=0;i<N;i++)
    {
        cin>>z;            //IMPORTANT
      v.push_back(z);     //take in the input and push back to vector
    }
    
  
    cin>>x;
    v.erase(v.begin()+(x-1));
    
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
 
    cout<<v.size()<<endl;
    //output of modified vector
    for(int j=0;j<v.size();j++)
    {
        cout<<v[j]<<" ";
    }
    return 0;
}
