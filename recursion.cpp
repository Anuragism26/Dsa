#include <bits/stdc++.h>
using namespace std;

int factorial(int num){
    if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}

int main(){
    int num;
    cin >> num;
    cout << factorial(num);
}
// BACTRACKING

int backtrack(int num ){
    if (num > 3){
        return num;
    }
    backtrack(num+1);
    cout << num << endl;
}
reversing an array 

void reverse(int arr[],int i,int n){
    
    if(i>=(n/2)){
        return;
    }
    
    swap(arr[i],arr[n-i-1]);
    reverse(arr,i+1,n); 
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    reverse(arr,0,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
// palindrome
int pal(int i,string p,int n){
    if (i>=(n/2)){
        return 1;
    }if (p[i] !=p[n-i-1]){
        return 0;

    }
    return pal(i+1,p,n);
}
int main(){
    string p;
    int n;
    cin >> p;
    n=p.size();
    cout << pal(0,p,n);
    
    if (pal(0,p,n)==1){
        cout << "string is palindrome";
    }else{
        cout << "fuckoff";
    }

//fibonacci
int fib(int n){
    if(n<=1){
        return n;
    }
    int first=fib(n-1);
    int last =fib(n-2);
    return (first +last);
    
    
}
int main(){
    int n;
    cin >> n;
     cout << fib(n-1);
}
//HASHING

int main(){
    string s;
    cin >> s;
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    for(int i=0;i<256;i++){
        if (hash[i] >0){
            cout << (char)i << hash[i]<< endl;
        }
    }
}
// static_cast<char>(i) this is used to convert ascii to char we can also use (char)i in its place
//hash map
int main(){
    int n;
    cin>> n;
    int arr[n];
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    int max=0;
    int maxd=0;
    for(auto it:mpp){
        if (it.second>max){
            
            max= it.second;
            maxd=it.first;
        }
        else if(it.second==max && it.first<maxd){
                max=it.second;
                maxd=it.first;

        }
        }
    
    cout << maxd << " occurs max no of times "<< endl ;

}

