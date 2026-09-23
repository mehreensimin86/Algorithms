#include<iostream>
using namespace std;

int partition(int arr[],int start,int end)
{
    int pivot=arr[start];
    int s=start+1;
    int e= end;
    while(s<=e)
    {
        if(pivot>=arr[s])
        {
            s++;
        }
        else if(pivot<arr[e])
        {
            e--;
        }
        else
        {
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }
     swap(arr[start],arr[e]);
     return e;
}

void quicksort(int arr[],int start,int end)
{
    if(start<end)
    {
    int pivot_pos=partition(arr,start,end);
    quicksort(arr,start,pivot_pos-1);
    quicksort(arr,pivot_pos+1,end);
    }
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[ ]={20,80,30,10,40,70,100};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"original array:";
    printArray(arr,size);
    quicksort(arr,0,size-1);
    cout<<"sorted array:";
    printArray(arr,size);
    return 0;
}
