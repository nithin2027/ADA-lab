#include<time.h>
#include<stdio.h>
void delay()
{
    int t,i;
    for(i=0;i<100000000;i++)
    {
        t=210/3;
    }
}
int linear(int arr[], int key,int i, int n)
{
    while(i<n)
    {
        if(arr[i]==key)
            return i;
        else
            return linear(arr,key,i+1,n);
    }
    return -1;
}
int binary(int arr[],int l,int h,int key)
{
 int mid;
 if(l<=h)
 {
     mid=(l+h)/2;
     if(arr[mid]==key)
        return mid;
     else if(arr[mid]==key)
        return binary(arr,mid-1,l,key);
     else
        return binary(arr,h,mid+1,key);
 }
 return -1;
}
void main()
{
clock_t start,end;
int ch[100000];
int i,key,index=0,result;
int max=100000,min=0;
for(i=0;i<100000;i++)
{
    ch[i]=i;
}
printf()
}
