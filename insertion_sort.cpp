#include<bits/stdc++.h>
using namespace std;

template<class T> void printvec(T a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

//挿入ソート(昇順0,降順1)
template<class T> int insertion_sort(T a[],int size,int which){
    if(which!=0&&which!=1)return -1;
        printvec(a,size);
        for(int i=1;i<size;i++){
        T v=a[i];
        int p=i-1;
        if(which==0){
            while(a[p]>v&&p>=0){
                a[p+1]=a[p];
                p--;
            }
        }
        else{
            while(a[p]<v&&p>=0){
                a[p+1]=a[p];
                p--;
            }
        }
        a[p+1]=v;
        printvec(a,size);
        }
    return 0;
}

int main( ){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<endl;
    insertion_sort(a,n,0);
    cout<<endl;
    insertion_sort(a,n,1);
    return 0;
}


