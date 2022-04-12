#include <iostream>
using namespace std;
const int m1=3, n1=3;
int matrix_degree(int m, int n,int matrix1[m1][n1],int matrix2[m1][n1],int result[m1][n1]){
    for (int i=0;i<m; i++){
        for (int j=0; j<n; j++){
            result[i][j] = 0;
        }}
    for (int i=0; i < m;i++){
        for (int j=0; j<n; j++ ){
            for (int k = 0; k<n; k++){
                result[i][j] += matrix2[i][k]*matrix1[k][j];
            }}}

    return result[m][n];
}
int main() {

    int f_matrix[m1][n1], result[m1][n1], s_matrix[m1][n1],i,j,deg,t=1;

    setlocale(LC_ALL,"Russia");
    if (m1!=n1){
        return 0;
    }
    cout<< "Заполните первую матрицу"<< endl;
    for (i=0;i<m1; i++){
        for (j=0; j<n1; j++){
            cin>>f_matrix[i][j];
            s_matrix[i][j] = f_matrix[i][j];
        }}

    cout << "В какую степень возвести эту матрицу? ";
    cin>> deg;
    cout << endl;

while (t<deg){
    result[m1][n1] = matrix_degree( m1, n1, f_matrix,s_matrix, result);
    for (i=0;i<m1; i++){
        for (j=0; j<n1; j++){
            s_matrix[i][j] =  result[i][j];
        }}
    t++;
    }
    for (i=0;i<m1; i++){
        for (j=0; j<n1; j++){
            cout<<result[i][j]<< "  ";
        }
        cout<< endl;
    }
    return 0;
}