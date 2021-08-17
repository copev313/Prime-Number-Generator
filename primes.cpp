#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    bool flag = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            flag = 1;
            cout<<"Not prime";
            break;
        }
    }

    if(flag == 0) {
        cout<<"Prime number!";
    }

    return 0;
}
