#include <iostream>
#include <cmath>

using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int number,count=0,sum_num, max_n, min_n, c_5=0, c_2=0, proof_2=2, p_1,p_2,c_p;
    float sr;
    number = 11;    cout<< sum_num;
    while (true) {
        cout << "Число: "<< endl;
        cin >> number;
        if(number == 0) {
            break;
        }
        count++;
        if (count == 1 ){
            max_n = number;
            min_n = number;
        }
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
        if (number%2 == 0 && number > 0){
            while (proof_2 < number){
                proof_2 *=2;
            }}
        if (proof_2 == number or number == 1){
            c_2++;
        }
        proof_2 = 2;
        if (count == 1){
            p_1 = number;}
        if (count == 2){
            p_2 = number;}
        if (count >=3){
            if (number > (p_1 + p_2)){
                c_p ++;
            }
            p_1 = p_2;
            p_2 = number;
        }
    }
    sr = ((float) sum_num/count)*100;
    sr = round(sr)/100;

    cout << "Среднее арифметическое: "<<  sr << " Разница максимального и минимального: "<< max_n - min_n <<
    " Количество чисел, кратных 5: " << c_5<< " Количество чисел, являющихся степенью двойки: "<<c_2 <<
    " Количество чисел, которые превосходят сумму двух предыдущих  "<< c_p<< endl;
    return 0;
}