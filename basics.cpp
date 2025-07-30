#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int rev = 0;

    while (x != 0) {
        int digit = x % 10;
        x /= 10;

        // Check for overflow/underflow before multiplying or adding
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) return 0;

        rev = rev * 10 + digit;
    }

    return rev;
}

int main() {
    int x;
    cin >> x;
    cout << reverse(x) << endl;
    return 0;
}
printing all the divisors
int divisors(int n){
    vector <int> ls;
    for( int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            ls.push_back(i);
            if( int(n/i)!=i){
                ls.push_back((n/i));
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it: ls){
        cout << it <<" ";
    }

}
int main(){
    int n;
    cin >> n;
    divisors(n);
// }
HCF OR GCD
