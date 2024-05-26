#include <iostream>
#include <conio.h>
#include <list>
using namespace std;
void print(list<int> num_list);
int main(){
    list<int> num_list({1,2,3,4,5});
    cout<<"Before Pushing : "<<endl;
    print(num_list);
    num_list.push_front(0);
    num_list.push_back(6);
    cout<<"After Pushing : "<<endl;
    print(num_list);
    num_list.pop_front();
    num_list.pop_back();
    cout<<"After Popping : "<<endl;
    print(num_list);

}

void print(list<int> num_list){
    for (int val : num_list){
        cout<<val<<" ";
    }
    cout<<endl;

}
// update for today