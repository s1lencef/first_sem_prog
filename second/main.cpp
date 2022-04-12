#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int number,count=0,sum_num, max_n = -1, min_n  = 32757, c_5=0, c_2=0, proof_2=2, p_1,p_2,c_p;

    number = 11;
    while (number != 0 ) {
        cout << "Число: "<< endl;
        cin >> number;
        if(number == 0) {
            break;
        }
        count++;
        sum_num += number;
        if (number > max_n ){
            max_n = number;
        }
        if (number < min_n ){
            min_n = number;
        }
        if ( number > 0 && number%5 == 0){
            c_5 ++;
        }
        if (number%2 == 0){
            cout << "+";
            while (proof_2 < number){
                proof_2 *=2;
                cout << " степень 2 " << proof_2;
            }}
        if (proof_2 == number ){
                c_2++;
            }
        proof_2 = 2;
        if (count == 1){
            p_1 = number;}
        if (count == 2){
            p_2 = number;}
        if (count >=3){
            cout << number<< endl;
            if (number > (p_1 + p_2)){
                c_p ++;
            }
            p_1 = p_2;
            p_2 = number;
        }
    }

    cout << (float) sum_num/count << "   "<< max_n - min_n << "   " << c_5<< "   "<<c_2<<"   "<< c_p<< endl;
    return 0;
}
