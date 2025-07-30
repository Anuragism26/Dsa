// #include <bits/stdc++.h>
// using namespace std;
//PAIRS:-
//-----------------
// void explainpairs(){
//     pair <int , pair <int,int>> p={1,{3,4}};
//     cout << p.first << " " << p.second.second <<" " << p.second.first << " ";
//     pair <int,int> arr[] ={{1,2},{3,4}};
//     cout<< arr[1].second;
// }
// VECTORS:-
//-------------------
// int main() {
//   vector < int > v;

//   for (int i = 0; i < 10; i++) {
//     v.push_back(i); //inserting elements in the vector
//   }

//   cout << "the elements in the vector: ";
//   for (auto it = v.begin(); it != v.end(); it++)
//     cout << * it << " ";

//   cout << "\nThe front element of the vector: " << v.front();
//   cout << "\nThe last element of the vector: " << v.back();
//   cout << "\nThe size of the vector: " << v.size();
//   cout << "\nDeleting element from the end: " << v[v.size() - 1];
//   v.pop_back();

//   cout << "\nPrinting the vector after removing the last element:" << endl;
//   for (int i = 0; i < v.size(); i++)
//     cout << v[i] << " ";

//   cout << "\nInserting 5 at the beginning:" << endl;
//   v.insert(v.begin(), 5);
//   cout << "The first element is: " << v[0] << endl;
//   cout << "Erasing the first element" << endl;
//   v.erase(v.begin());
//   cout << "Now the first element is: " << v[0] << endl;

//   if (v.empty())
//     cout << "\nvector is empty";
//   else
//     cout << "\nvector is not empty" << endl;

//   v.clear();
//   cout << "Size of the vector after clearing the vector: " << v.size();

// }
//SETS:-
//--------------------------------
// #include<bits/stdc++.h>

// using namespace std;

// int main() {
//   set < int > s;
//   for (int i = 1; i <= 10; i++) {
//     s.insert(i);
//   }

//   cout << "Elements present in the set: ";
//   for (auto it = s.begin(); it != s.end(); it++) {
//     cout << * it << " ";
//   }
//   cout << endl;
//   int n = 2;
//   if (s.find(2) != s.end())
//     cout << n << " is present in set" << endl;

//   s.erase(s.begin());
//   cout << "Elements after deleting the first element: ";
//   for (auto it = s.begin(); it != s.end(); it++) {
//     cout << * it << " ";
//   }
//   cout << endl;

//   cout << "The size of the set is: " << s.size() << endl;

//   if (s.empty() == false)
//     cout << "The set is not empty " << endl;
//   else
//     cout << "The set is empty" << endl;
//   s.clear();
//   cout << "Size of the set after clearing all the elements: " << s.size();
// }
// permutations using library functions
// --------------------------------------------------------
// int main(){
//     string s="123";
//     do{
//         cout << s <<endl;
//     }while( next_permutation(s.begin(),s.end()));
// }