#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int a,b;
    cout << "請輸入兩個不同數字：" << endl;
    cin>>a>>b;
    cout << "a=" << a << "b=" << b << endl;
    if(a>b)
        cout<<"a大於b"<<endl;
        
    else cout << "a小於b" << endl;

    system("pause");
    return 0;
}