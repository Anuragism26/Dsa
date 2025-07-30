#include <bits/stdc++.h>
using namespace std;
//selection sort
void selection(int arr[],int n){
    for(int i=0;i<=(n-2);i++){
       int min=i;
        for(int j=i;j<=(n-1);j++){
            if (arr[j]<arr[min]){
                min=j;

            }

        }
        swap(arr[min],arr[i]);
    }
     for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
// bubble sort
void bubble(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}

// insertion sort
void insertion(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j-1],arr[j]);
            j--;

        }
    }
}
// merge sort
void merger(int arr[], int low, int high, int mid) {
    vector<int> temp;
    int left = low, right = mid + 1;

    // Merge the two sorted halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);

        }
    }

    // Copy remaining elements (if any)
    while (left <= mid) temp.push_back(arr[left++]);
    while (right <= high) temp.push_back(arr[right++]);

    // Write merged array back into original
    for (int i = low; i <= high; ++i)
        arr[i] = temp[i - low];
}

void ms(int arr[], int low, int high) {
    if (low >= high) return;
    int mid = low + (high - low) / 2;
    ms(arr, low, mid);       // Left half
    ms(arr, mid + 1, high);  // Right half
    merger(arr, low, high, mid);
}
int fun(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low-1){
            j--;
        }
        if(i<j){
        swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
// quick sort
void qs(int arr[],int low,int high){
    if(low<high){
        int part=fun(arr,low,high);
        qs(arr,low,part-1);
        qs(arr,part+1,high);
    }
}
int main() {
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int low=0;
    int high=sizeof(arr)/sizeof(arr[0]);
    qs(arr,low,high-1);
    for (int i = 0; i < high; ++i)
        cout << arr[i] << " ";
    cout << endl;
}
// best time complexity for bubble sort is big o of n but worst is big o of n squared.
// best time complexity for insertion sort is big o of n but worst is big o of n squared i.e. similar to bubble sort.
// best time complexity for merge sort is big o of (n log n) and for quick sort is same as that and spaccce complexity is  big o of 1.
// int n = sizeof(arr) / sizeof(arr[0]); we can use this method if we want to know the size of a prefed array
int main(){
    int arr[]={9,8,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        cout << endl;
    
}
// sort(arr,arr+n); this is the functional form of sort process
