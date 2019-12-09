#include <iostream>

using namespace std;
int pow(int a,int n){
    int x=1;
    while(n){
        if(n&1){
            x*=a;
        }
        a*=a;
        n>>=1;
    }
    return x;
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
