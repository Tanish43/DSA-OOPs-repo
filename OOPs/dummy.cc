#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    int arr[] = { 1, 1, 2, 1, 1, 3, 4, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
      
      // inserting elements
    map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
  
    // Printing of MAP
    cout << "Element  Frequency" << endl;
    for (auto i : m)
        cout << i.second << endl;
  
    return 0;
}