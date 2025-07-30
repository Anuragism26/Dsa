// grade a if marks >=90
// grade b if marks >=70
// grade c if marks >=50
// grade d if marks >=50
// grade d if marks >=35
// fail other wise
#include <bits/stdc++.h>
using namespace std;
void fun(int marks){
    if(marks >=90){
        cout << "A";
    }else if (marks >=70){
        cout << "B";
    }else if (marks >=50){
        cout << "C";
    }else if (marks >=35){
        cout << "D";
    }else{
        cout << "FAIL";
    }
}
int main(){
    int marks;
    cin >> marks;
    fun(marks);
}