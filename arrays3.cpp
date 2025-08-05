#include <bits/stdc++.h>
using namespace std;

// TWO SUM PROBLEM
// string better(vector<int> a, int tar) {
//     map<int, int> mpp;
//     for (int i = 0; i < a.size(); i++) {
//         if (a[i] > tar) {
//             continue;
//         } else {
//             int n = tar - a[i];
//             if (mpp.find(n) != mpp.end()) {
//                 return "YES";
//             }
//         }
//         mpp[a[i]] = i;
//     }
//     return "NO";
// }
string optimum(vector<int> a, int tar){
    sort(a.begin(),a.end());
    int i=0;
    int j=a.size()-1;
    while(i<j){
        if(tar==(a[i]+a[j])){
            return "YES";
            break;
        }else if(tar >(a[i]+a[j])){
            i++;
        }else if(tar <(a[i]+a[j])){
            j--;
        }
    
    }
    return "NO";
    
}
int main() {
    vector<int> a = {1, 2, 4, 3, 8, 5, 6, 9};
    int tar = 11;
    cout << optimum(a, tar) << endl;
}