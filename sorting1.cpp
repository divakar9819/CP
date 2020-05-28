#include<bits/stdc++.h>
using namespace std;

// insertion sort
/*
void insertionSort(int *arr,int n)
{
    int i , j,key;
    for(i=1;i<n;i++){
        key = arr[i];
        j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        
        arr[j+1] = key;
    }
}
*/

// Buble sort
/*
void bubleSort(int *arr , int n)
{
    int i,j ;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}
*/

// Selection sort

void selectionSort(int *arr , int n)
{
    int i , j , min_ind;
    for(i=0;i<n;i++){
        min_ind = i;
        for(j=i+1;j<n;j++){
            if(arr[j] < arr[min_ind]){
                
                min_ind = j;
                swap(arr[min_ind],arr[i]);
            }
        }
    }
}
void printArray(int arr[] , int n){
    int i;
    cout<<"The sorted array is : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {102,12,11,13,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    //insertionSort(arr,n);
    //bubleSort(arr,n);
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
    
}





