#include<stdio.h>
int bs(int a[],int l,int r,int key);

int main()
{
    int size;int key;
    scanf("%d",&size);
    int ar[size];
  
    for(int i =0;i<size;i++)
    scanf("%d",&ar[i]);
    printf("enter key\n");
    scanf("%d",&key);
    int l=0;int r=size-1;
    if(bs(ar,l,r,key)==1)
    printf("found");



}
int bs(int a[],int l,int r,int key)
{
    int flag =0;
    if(r>=l)
    {
        int mid =l+(r-l)/2;
        if(a[mid]==key)
        {
        return 1;
        }
        if(key>a[mid])
        return bs(a,mid+1,r,key);
        else
        return bs(a,l,mid-1,key);
    

}
}