//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low>=high){
            return;
        }
        int par=partition(arr,low,high);
        
        quickSort(arr,low,par-1);
        quickSort(arr,par+1,high);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int piv=arr[low];
       int s=low;
       int e=high;
       
       while(s<e){
           while(s<=high-1&&arr[s]<=piv){
               s++;
           }
           while(e>=low+1&&arr[e]>=piv){
               e--;
           }
           
           if(s<e){
               swap(arr[s],arr[e]);
           }
       }
        swap(arr[low],arr[e]);
        return e;
       
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends