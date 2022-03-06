#include<iostream>
using namespace std;


int main()
{
    int size;int l=0;int flag =0;int key;int mid;int comp=0;
    cout<<"enter size of the array"<<endl;
    cin>>size;


    int ar[size];
    cout<<"enter elements"<<endl;
    for(int i =0;i<size;i++)
    cin>>ar[i];
    int r=size-1;

    cout<<"enter key"<<endl;
    cin>>key;
    


    
     while(l<=r)
    {
        mid = l+(r-l)/2;
            comp++;

        if(ar[mid]==key)
        {

            flag=1;
            break;
        }
        if(key>ar[mid])
        l=mid+1;
        else
        r=mid-1;


    }
        
    if(flag==1)
    cout<<"found at index "<<mid<<" in "<<comp<<" comparisons "<<endl;
    else
    cout<<"not found"<<endl;



}