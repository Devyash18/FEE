#include<iostream>
#include<memory>
using namespace std;
int main(){
    unique_ptr<int> ptr1(new int(13));
    cout<<*ptr1<<endl;
}