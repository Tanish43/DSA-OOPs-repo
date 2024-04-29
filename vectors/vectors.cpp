#include <iostream>
#include <vector>

using namespace std;
/* 
1 static vector
2 dynamic vector
3 vector.push_back(element);
4 vector.pop_back(); it works as LIFO
5 you can add using vector[] but it will not increaase the size of vector whereas push_back 
6 function will dobule the size as 2^n.
7 v.size(); tells the size of your vector
8 v.capacity(); tells how many elements can be inserted more in the vector
*/

int main (){
    vector<int> v;   //static
    vector<int> *vp = new vector<int>(); //dynamic
    v.push_back(10);
    v.push_back(20);
    v.push_back(10);
    v.pop_back(); // LIFO - Last in first out;
    // cout<<v[2];
    //v[3] = 100;
    // cout << v.at(2)<<endl;
    for(int i = 0; i < v.size();i++){
        cout<<v.at(i)<<endl;
    }
    vector<int> vect;
    for(int i = 0; i < 10; i++){
        cout <<"\nCapacity is : "<<vect.capacity();
        cout <<"\nSize is : "<<vect.size();
        vect.push_back(i+1);
    }
    return 0;
}