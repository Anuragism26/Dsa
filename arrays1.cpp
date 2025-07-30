#include <bits/stdc++.h>
using namespace std;
// PROGRAM TO FIND SECOND LARGEST ELEMENT IN ARRAY
// int seclarg(int arr[],int n){
//     int largest=arr[0];
//     int seclarge=INT_MIN;
//     for(int i=1;i<n;i++){
//         if (arr[i]>largest){
            
//             seclarge=largest;
//             largest=arr[i];
//         }else if(arr[i]<largest){
//             if(arr[i]>seclarge){
//                 seclarge=arr[i];
//             }
//         }
//     }
//     cout << "second largest number is " << seclarge;
// }
// time complexity is big o of n and space complexity is big o of 1.
//PROGRAM TO FIND NO OF UNIQUE ELEMENTS IN AN ARRAY
// int uniq(int arr[],int n){
//     int i=0;
//     for(int j=1;j<n;j++){
//         if(arr[i]!=arr[j]){
            
//             arr[i+1]=arr[j];
//             i++;
//         }
//     }
//     return i+1;
// }
// time complexity is big o of n and space complexity is big o of 1.
// ROTATION OF AN ARRAY
// void rotate(int arr[],int n,int d){
//     reverse(arr,arr+n);
//     reverse(arr,arr+d);
//     reverse(arr+d,arr+n);//the upper limit is not included 
// }
// time complexity is big o of n and space complexity is big o of 1
//MOVED ALL OF THE ZEROES TO THE END
// void shift(int arr[],int n){
//     int j=-1;
//     for(int i=0;i<n;i++){
//         if (arr[i]==0){
//             j=i;
//             break;
//         }
//     }
//     for(int i=j+1;i<n;i++){
//         if(arr[i]!=0){
//             int temp=arr[j];
//             arr[j]=arr[i];
//             arr[i]=temp;
//             j++;
//         }        
//     }
// }
// time complexity is big o of n and space complexity is big o of 1
// UNION OF TWO ARRAYS
// vector<int> unify(vector<int> arr1, vector<int> arr2, int n1, int n2) {
//     int i = 0, j = 0;
//     vector<int> unionarr;

//     while (i < n1 && j < n2) {
//         if (arr1[i] <= arr2[j]) {
//             if (unionarr.size() == 0 || unionarr.back() != arr1[i]) {
//                 unionarr.push_back(arr1[i]);
//             }
//             i++;
//         } else {
//             if (unionarr.size() == 0 || unionarr.back() != arr2[j]) {
//                 unionarr.push_back(arr2[j]);
//             }
//             j++;
//         }
//     }

//     while (i < n1) {
//         if (unionarr.size() == 0 || unionarr.back() != arr1[i]) {
//             unionarr.push_back(arr1[i]);
//         }
//         i++;
//     }

//     while (j < n2) {
//         if (unionarr.size() == 0 || unionarr.back() != arr2[j]) {
//             unionarr.push_back(arr2[j]);
//         }
//         j++;
//     }

//     return unionarr;
// }
// Final Time Complexity:
// - O(n1 + n2) — linear in the total size of the input arrays
// Space Complexity:
// - New vector to store the union: up to n1 + n2 in the worst case (no overlap)
// - So: O(n1 + n2)
//INTERSECTION OF TWO ARRAYS 
// vector<int> inter(vector<int> a, vector<int> b, int n1, int n2){
//     int i=0;
//     int j=0;
//     vector <int> interarr;
//     while(i<n1 && j<n2){
//         if(a[i]==b[j]){
//             interarr.push_back(a[i]);
//             i++;
//             j++;
//         }else if(a[i]!=b[j]){
//             if(a[i]<b[j]){
//                 i++;
//             }else{
//                 j++;
//             }
//         }
//     }
//     return interarr;
// }
// Time Complexity:
// - O(n1 + n2)
// Space Complexity:
// - O(min(n1, n2))
 int main() {
    vector<int> a = {2,3,3,5,6,6,7};
    vector<int> b = {1,2,2,3,3,4,5,6};

    // Optional: sort both arrays if you want ordered union
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> interarr = inter(a, b, a.size(), b.size());

    for (int val : interarr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}