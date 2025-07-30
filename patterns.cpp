#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for( int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for( int j=0;j<2*i+1;j++){
            cout << "*";
        }
        for( int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
	for(int i=0;i<n;i++){
        for( int j=0;j<i;j++){
            cout << " ";
        }
        for( int j=0;j<2*(n-i)-1;j++){
            cout << "*";
        }
        for( int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main(){
    int n= 9;
    for(int i=0;i<2*n-1;i++){
        if (i<n){
            for(int j=0;j<=i;j++){
                cout << "*";

            }
            cout << endl;
        }
        else if (i>n){
            for(int j=0;j<2*n-i-1;j++){
                cout << "*";
            }
            cout << endl;
        }
    }
        for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout << "  ";
        }
        for(int j=i;j>=1;j--){
            cout << j << " " ;
        }
        cout << endl;

    }'
    char start = char('A'+ 3);
    cout << start;
}
int main(){
    int n= 4;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down=(2*n-2)-i;
            cout << (n-(min(min(top,down),min(left,right)))) << " ";

        }
        cout << endl;
    }
}
