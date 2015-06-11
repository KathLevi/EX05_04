////////////////////////
//Name: Kathleen Levi
//
//Project: EX05_04 (12.20)
//
//Date: 09 June 2105
////////////////////////

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

template<typename T>
//shffles the content of a vector
void shuffle(vector<T>& v){
    for (int i = 0; i < v.size(); i++){
        int location = rand() % v.size();
        T temp = v[location];
        v[location] = v[i];
        v[i] = temp;
    }
}

int main(){
    srand(time(NULL));
//test program that reasds in 10 int values into a vector and display a shuffled result
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    
    shuffle(v1);
    
    //display a shuffled result
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    
}
