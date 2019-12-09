/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int pow(int a,int n){
    if(!n)
        return 1;
    int x=pow(a,n>>1); 
    x*=x;
    return (n&1)?a*x:x;
}
int main()
{
    int a,n; 
    cout<<"aのn乗の計算をします"<<endl; 
    cout<<"a:";
    cin>>a; 
    cout<<"n:";
    cin>>n; 
    cout<<"pow(a,n):"<<pow(a,n)<<endl;
    return 0;
}
