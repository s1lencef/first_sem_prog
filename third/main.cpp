#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int number,j=1,k;

    cin >> number;
    if (number >=2 ){
        cout << 2<< "  ";
    }
    else {
        cout << "Простых чисел нет";
        return 0;
    }
    for (k=1; k<= number; k+=2) {
        int count =0;
        for (int i =1; i <= sqrt(k); i++){
            if (k%i == 0){
                count += 1;
            }
            if (count > 1){
                break;
            }
        }
        if ( count <= 1 && k!=1){
            if (k > 10*j){
                cout <<"\n";
                j++;
            }
            cout<< k <<"  " ;
    }

    }

    return 0;
}
