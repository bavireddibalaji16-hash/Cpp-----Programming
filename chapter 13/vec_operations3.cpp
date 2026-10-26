#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec={1,2,3,4,5,6,7};

      vec.erase(vec.begin()+1,vec.begin()+3);
    // vec.erase() will remove vectors from its array 
    // vec.begin() is the first element of array 

     //vec.insert(vec.begin()+3,45);
    // vec.insert() will insert a specific elemnet in a speciifc opsition o farray given 

    // vec.clear();
    // vec.clear() will remove all the elements in a array

    for(int val : vec){
        cout << val << " ";
    }
    cout << vec.size() << " " << vec.capacity() << endl;

    // vec.empty() confirms whether array is cleared or not with 1 as true(if cleared) and 0 as false(if any element is present)
     cout << "is empty : " << vec.empty();
    
    return 0;
}
