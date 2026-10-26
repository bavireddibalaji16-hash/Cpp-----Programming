#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// 9. Sliding Window Maximum

int main(){
    vector < int > vec1={1, 3, -1, -3, 5, 3, 6, 7};
    priority_queue<int > vec2;
    vector<int>vec3;

    int k;
    cin >> k;

     if (k < 1 || k > n) {
        cout << "Invalid window size";
        return 0;
    }


    int a = vec1.size();
    for(int b=0;b<a-k+1;b++){
        for(int d=0;d<3;d++){
        vec2.push(*(vec1.begin()+b+d));
        }
          vec3.push_back(vec2.top());
         for(int c=0;c<3;c++){
          vec2.pop();
     }
  }

  for(auto e : vec3){
    cout << e << " ";
  }

return 0;
}