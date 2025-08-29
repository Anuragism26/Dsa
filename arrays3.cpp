#include <bits/stdc++.h>
using namespace std;

<<<<<<< HEAD
//TWO SUM PROBLEM
=======
// TWO SUM PROBLEM
>>>>>>> cfadbc8df64f3b1945a91b26c314c4778edd0aca
string better(vector<int> a, int tar) {
    map<int, int> mpp;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > tar) {
            continue;
        } else {
            int n = tar - a[i];
            if (mpp.find(n) != mpp.end()) {
                return "YES";
            }
        }
        mpp[a[i]] = i;
    }
    return "NO";
}
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
void better(vector <int> &a){
    int ctr1=0;
    int ctr2=0;
    int ctr0=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==0){
            ctr0++;
        }else if(a[i]==1){
            ctr1++;
        }else if(a[i]==2){
            ctr2++;
        }
    }
    for(int i=0;i<ctr0;i++){
        a[i]=0;
    }
    for(int i=ctr0;i<ctr0+ctr1;i++){
        a[i]=1;
    }
    for(int i=ctr0+ctr1;i<a.size();i++){
        a[i]=2;
    }
    
}
int main(){
    vector <int> a = {0,1,2,0,1,2,1,0,1,1,0};
    better(a);
    for(int i=0;i<a.size();i++){
        cout << a[i] <<" ";
    }
}
