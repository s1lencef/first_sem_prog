#include <iostream>

using namespace std;
int main() {

const int m1=2, n1=3,m2=3,n2=2;
int f_matrix[m1][n1], s_matrix[m2][n2],result[m1][n2],i,j;

    setlocale(LC_ALL,"Russia");

    if(n1!=m2){
        return 0;
    }
    for(i=0; i<m1; i++){
        for(j=0; j<n2; j++){
            result[i][j] =0;
        }
    }

    cout<< "Заполните первую матрицу";
    for (i=0;i<m1; i++){
        for (j=0; j<n1; j++){
            cin>>f_matrix[i][j];
        }}

    cout<< "Заполните вторую матрицу";
    for (i=0;i<m2; i++){
        for (j=0; j<n2; j++){
            cin>>s_matrix[i][j];
        }}

    for (i=0; i < m1;i++){
        for (j=0; j<n2; j++ ){
            for (int k = 0; k<n1; k++){
                result[i][j] += f_matrix[i][k]*s_matrix[k][j];
            }}}

    for (i=0;i<m1; i++){
        for (j=0; j<n2; j++){
            cout<< result[i][j]<<"  ";

        }
        cout<< endl;
    }
    return 0;
}
