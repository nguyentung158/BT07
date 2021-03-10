#include<iostream>

using namespace std;

void timkiemnhiphan(int* p, int a, int b, int t){
    int dem =0;
for(int i =0; i<= b;i++){
    if(p[i] == t) dem++;
}
    if(dem == 0 ) cout << "khong";
        else cout << "co";

}

int main(){
    int* p;
    int solg, scantim;
    cin >> solg >> scantim;
    for(int i =0; i<solg;i++){
        cin >> p[i];
    }
    timkiemnhiphan(p,0,solg-1,scantim);

}
