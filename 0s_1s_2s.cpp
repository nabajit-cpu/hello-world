#include<bits/stdc++.h>

using namespace std;

class Sort{
    public:

    void sortarray(int arr[],int n){
        int low,mid,high;

        low=0;
        mid=0;
        high=n-1;

        while(mid<=high){
            /*if we get 0 at any point then we will swap 0 and 1 ,,,and also increment the value of low and mid*/
            if(arr[mid]==0){
                swap(arr[low],arr[mid]);
                low++;
                mid++;

            }
            /*if we get 1 at any index then just increment the mid(mid++)*/
            else if(arr[mid]==1){
                mid++;
            }

            /*f the value of the index is 2 the swap it with the high index and also decrement the high(high--)*/
            else {
                swap(arr[mid],arr[high]);
                high--;            
            }
        }
        
    }
};

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Sort obj;
        obj.sortarray(arr, n);
        
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }


    }
    return 0;
}
