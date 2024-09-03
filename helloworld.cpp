#include <iostream>
using namespace std;
int main(){
    int integer1 = 10;
    int integer2 = 20;
    int s;
    cout << "What would be the answer of 10 + 20? ";
    cin >> s;
    while (s != 30){
        cout << "You entered an incorrect answer! Try again: ";
        s = 30;
        cin >> s;
    }
    cout << "Thats right! the answer is " << integer1 + integer2 << " !\n";
    return 0;
}




