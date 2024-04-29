#include <iostream>
using namespace std;

class stacks {
    private:
    int *arr;
    int nextIndex, capacity;

    public:
    stacks(){
        capacity = 4;
        arr = new int[capacity];
        nextIndex = 0;
    }
    stacks(int cap){
        capacity = cap;
        arr = new int[capacity];
        nextIndex = 0;
    }
    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        return (nextIndex == 0);
    }
    void push(int ele){
        /* for static stack
        if (nextIndex == capacity){
            cout<<"\nStack is full";
            return;
        }*/
        if( nextIndex == capacity){
            int *new_arr = new int[2*capacity];
            for (int i = 0; i < capacity; i++)
            {
                new_arr[i] = arr[i];
            }
            delete []arr;
            arr = new_arr;
            capacity = 2*capacity;
            
        }
        arr[nextIndex] = ele;
        nextIndex++;
    }
    void pop(){
        if(isEmpty()){
            cout<<"\nStack is empty";
            return;
        }
        nextIndex--;
    }
    int top(){
    if(isEmpty()){
            cout<<"\nStack is empty";
            return;
        }
        return arr[nextIndex -1];
        
    }

};

int main(){
 Stack s(4);
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);

  cout<<s.top()<<endl;
  s.pop();

  cout<<s.top()<<endl;
  s.pop();

  cout<<s.top()<<endl;
  s.pop();

  cout<<s.size()<<endl;
  cout<<s.isEmpty()<<endl;

  Stack s2(10);
  for(int i=1;i<=10;i++){
    s2.push(i);
  }
  /// print content of stack
  while(!s2.isEmpty()){
    cout<<s2.top()<<endl;
    s2.pop();
  }
  cout<<s2.size()<<endl;  
    
    return 0;
}