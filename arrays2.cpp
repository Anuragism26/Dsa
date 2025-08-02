#include <bits/stdc++.h>
using namespace std;
//FIND THE MISSING NUMBER IN THE ARRAY
int missnum(vector <int> a,int n){
    int xor2=0;
    int xor1=0;
    for(int i=0;i<n-1;i++){
        xor1=xor1^a[i];
        xor2=xor2^(i+1);
    }
    xor2=xor2^n;
    return xor1^xor2;
}
//FIND THE HIGHEST CONTINUOUS ELEMENT
int maxc(vector <int> a){
    int maxi=0;
    int ctr=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==1){
            ctr++;
            
            maxi=max(ctr,maxi);
        }
        else{
            ctr=0;
        }
    }
    return maxi;
}
//FIND THE ELEMENT THAT APPEARS ONLY ONCE IN ALL TWICE APPEARING ONES
int single(vector <int> a){
    int xorr=0;
    for(int i=0;i<a.size();i++){
        xorr= xorr ^ a[i];


    }
    return xorr;
}
int main(){
    vector <int> a={1,2,3,1,1,1,1,3,3};
    int result = longestSubarrayWithSumK(a,7);
    cout << result ;
}
//brute force approach is nested loops
//better approach is hash maps
//xor approach is the optimal
//TO FIND THE LONGEST SUBARRAY ADDING UPTO K
#include <bits/stdc++.h>
using namespace std;
// FIND THE LONGEST CONTINUOUS SUBARRAY THAT ADDS UPTO K
int longestSubarrayWithSumK(vector<int> a, long long k) { //this method is better overall as it also handles the negative ones 
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < a.size(); i++) {
        sum += a[i];

        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        long long rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}
// the time complexity is big o of n squared. when using unordered map in worst case scenario and big o of nlogn when using ordered map.
//the space complexity is big of n.
//this is the optimal method in case of only positive numbers
int longestSubarrayWithSumK(vector<int> a, long long k) {
    long long sum = 0;
    int maxlen = 0;
    int j=0;
    for(int i=0;i<a.size();i++){
        sum=sum+a[i];
        if (sum==k){
            maxlen=max(maxlen,i-j+1);
        }while(sum>k && j<=i){
            sum-=a[j];
            j++;
        }

    }
    return maxlen;
}
//time complexity is big o of 2N and space complexity is big o of 1