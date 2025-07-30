#include <bits/stdc++.h>
using namespace std;
FIND THE MISSING NUMBER IN THE ARRAY
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
FIND THE HIGHEST CONTINUOUS ELEMENT
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
    vector <int> a={1,1,2,3,3,4,4,4,4};
    int result = single(a);

    cout << result ;

}
//brute force approach is nested loops
//better approach is hash maps
//xor approach is the optimal
