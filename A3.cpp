#include<iostream>
using namespace std;
int count_event(int* p , int n){
    int count =0;
    for(int i =0; i<n;i++){
        if(p[i] %2 ==0){
            count ++;
        }
    }
    return count;
}
int main()
{
    int p[10];


    cout<< count_event(p,5) << endl;
    cout << count_event(p+4,5);

}
