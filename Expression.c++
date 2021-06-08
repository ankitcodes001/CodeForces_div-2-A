#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>



using namespace std;
int main()
{
    
    int a,b,c;
    cin>>a>>b>>c;
    

    int x1 = (a+b)*c;
    int x2 = a+ (b*c);
    int x3 = a*b*c;
    int x4 = a*(b+c);
    int x5 = a+b+c;
    
    
    int ans =  max(x5, max(max(x1,x2),max(x3,x4)));
     
    
    cout<<ans;
    
    

    return 0;
}