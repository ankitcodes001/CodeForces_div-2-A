#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minFilter(vector<int>&v, int m , int k)
{   
    
     sort(v.begin(), v.end(),greater<int>());
     
     
    int minPlugs = k;
    int filter =0;
    
  while(filter < v.size() && minPlugs < m)
   {
       minPlugs+= v[filter]-1;
       
       filter++;
       
       
       
   }
   
   
    if(minPlugs >= m)
    return  filter;
    return -1;
    
    
    
    
    
    
    
    
    
}



int main()
{
   
   
   int n ,m,k;
   cin>>n>>m>>k;
   
   vector<int> v(n);
   
   for(int i =0;i<n;i++)
   {
       cin>>v[i];
       
       
   }
   
   
   
   int ans = minFilter(v,m,k);
   
   
   cout<<ans;
   

    return 0;
}