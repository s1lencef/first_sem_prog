#include <iostream>
#include <fstream>
#include <map>
#include <cmath>
using namespace std;
class SqrtMatrix{ //класс квадратной матрицы
    int **m; //сама матрица
    int rk; // размерность
public:
    SqrtMatrix( int matrix_rank){ //метод инициализации матрицы (создаем нулевую)
        this -> rk = matrix_rank;
        this -> m = new int*[this ->rk];
        for (int i = 0; i< rk; i++) {
            this->m[i] = new int[this->rk];
            for (int j =0; j<rk; j++){
                this->m[i][j] = 0;
            }
        }
    }
    int &operator()(const int a, const int b){
        // создаем метод задания элементов матрицы, через перегрузку оператора "()"
        return this->m[a][b];
    }
    int  get_rank(){
        return this->rk;// вывод разряда матрицы
    }
    void print(){ // метод вывода самой матрицы
        for (int i = 0; i< rk; i++) {
            for (int j =0; j<rk; j++){
                cout<< this->m[i][j]<< "  ";
            }
            cout<< endl;
        }
    }
    int found(int z) {
        //этот метод нужен для поиска каких-либо значений в матрице, возращает количество элементов по значению
        int count =0;
        for (int i = 0; i < rk; i++) {
            for (int j = 0; j < rk; j++) {
                if (this->m[i][j] == z) {
                    count++;
                }
            }
        }
        return count;
    }
};
int  conclusion(SqrtMatrix a,SqrtMatrix b,SqrtMatrix c){
    //функция для вывода данных о матрицах по желанию пользователя
    int f;
    while(true){
    cout<<"Хотите получить какую-либо информацию о введенных матрицах? \n 1 - Да | 2 - Нет"<<endl;
    cin>>f;
    if (f == 2){
        return 0;
    }
    char g;
    cout<<"О какой матрице хотите получить информацию? (A,B или C)"<<endl;
    cin>> g;
    switch (g) {
        case'A':
            cout<<"Матрица "<<g<<endl;
            a.print();
            cout<<"Порядок матрицы: "<< a.get_rank()<<endl;
            break;
        case'B':
            cout<<"Матрица "<<g<<endl;
            b.print();
            cout<<"Порядок матрицы: "<<b.get_rank()<<endl;
            break;
        case'C':
            cout<<"Матрица "<<g<<endl;
            c.print();
            cout<<"Порядок матрицы: "<< c.get_rank()<<endl;
            break;
        default:
            break;

    }
    }
    return 0;
}
int  editing(SqrtMatrix a,SqrtMatrix b,SqrtMatrix c){
    //функция для изменения  данных матриц по желанию пользователя
    int f,i,j;
    while(true) {
        cout << "Хотите изменить какую-либо из матриц? \n 1 - Да | 2 - Нет" << endl;
        cin >> f;
        if (f == 2) {
            return 0;
        }
        char g;
        cout << "Какую матрицу хотите изменить? (A,B или C)" << endl;
        cin >> g;
        cout << "Ввидите индекс изменяемого элемента: " << endl;
        cin>> i>>j;
        switch (g) {
            case 'A':
                cout << "Введите новое значение: " << g << endl;
                cin>>a(i,j);
                break;
            case 'B':
                cout << "Введите новое значение: " << g << endl;
                cin>>b(i,j);
                break;
            case 'C':
                cout << "Введите новое значение: " << g << endl;
                cin>>c(i,j);
                break;
            default:
                break;

        }
    }
    return 0;
}
SqrtMatrix console_in( SqrtMatrix matrix, int r, int k){
    /*передача переменной пользовательского класса в функцию по ссылке
  (сама функция считывает матрицу через поэлементный ввод в консоль)*/
    int n;
    cout<< "Введите значения "<<k<< "-ой матрицы: "<<endl;
    for (int i = 0; i<r;i++){
        for(int j=0; j<r; j++) {
            cin >> n;
            // проверка корректно введенных данных
            if (cin.fail()) {
                cout<<"Введено неверное значение, перепишите ячейку";
                cin.clear();
                cin.ignore(32767, '\n');
                if (j - 1 < 0) {
                    i--;
                    j = 2 - 1;
                } else {
                    j--;
                }
            } else {
                matrix(i, j) = n;
            }
        }
    }
    return matrix;
}
SqrtMatrix file_in( SqrtMatrix matrix, int r, string s){
    /*передача переменной пользовательского класса в функцию по ссылке
  (сама функция считывает матрицу через чтение текстового файла)*/
    int arr[r*r];
    string s_z="";
    int l=0;
    s.erase(0,4);
    for(char c:s){
        if(c >= '0' && c <= '9'){//игнорирование пробелови переносов строки
            s_z+=c;// чтобы читать числа из более чем одной цифры
        }
        else{
            try {
                arr[l] = stoi(s_z);// перевод из string в int, если будет поймана ошибка, то сама программа не свалиться
                l++;
                s_z="";
            }
            catch(invalid_argument e) {
                continue;
            }
        }

    }
   int k = 0;
    //передача значений в матрицу
    for (int i = 0; i<r;i++){
        for(int j=0; j<r; j++){
            matrix(i,j) = arr[k];
            k++;
        }
    }
    return matrix;
}
void file_out( SqrtMatrix matrix, int r){
    //функция для записи результата в файл
ofstream file_out("E:\\LETI\\1_kurs\\prog\\term_paper\\out_task.txt",ios::app);
    file_out<<endl;
    file_out<<'C'<<r<<' '<<r<<endl;
    for (int i = 0; i<r;i++){
        for(int j=0; j<r; j++){
            file_out<<matrix(i,j)<<' ';
        }
        file_out<<endl;
    }
    file_out.close();
}

SqrtMatrix task(SqrtMatrix a,SqrtMatrix b,SqrtMatrix c,int r1, int r2, int r3){
    // собственно, функция по индивидуальному заданию
    int* arr = new int[(r2*r2)];
    int k=-1, l=0,m=0;
    /*первый цикл перебирает матрицы А и Б и проверяет количество каждого элемента матрицы Б в них
     элменты, удовлетворяющие условию задания, добавляются в массив*/
    for (int i = 0; i<r2;i++){
        for (int j =0 ; j<r2; j++){
            if (b.found(b(i,j)) > 1 && a.found(b(i,j)) > 0 ){
                k++;
                arr[k] = b(i,j);

            }
        }
    }
    if(k>=0){
    int last[k];
    // следующая часть функции нужна для устранения повторений
    //сначала сортируем первичный массив по возрастанию
    for (int i = 0; i<k-1;i++){
        for (int j =i ; j<k; j++){
            if (arr[j] < arr[i]){
                m =arr[i];
                arr[i] = arr[j];
                arr[j] =m;
            }
        }
    }
    // проверка на повторение, если элемент не равен следующему, то добавляем в новый массив
    for (int i = 0; i<k-1;i++){
        if(arr[i] != arr[i+1]){
            last[l] = arr[i];
            l++;
        }
    }
    last[l] = arr[k-1];// закидываем в массив последний элемент, так как он не ловится циклом
    for (int i = 0; i<k;i++){
        if (i>l){
            last[i] = 0;// зануляем весь мусор в новом массиве (если количество нужных элементов меньше ранга третьей матрицы
        }
    }
    //занесние в матрицу значений
    k=l;
    l = 0;

    for (int i = 0; i<r3;i++){
        for (int j =0 ; j<r3; j++){
            if (l <= k){
                c(i,j) = last[l];
            }
            l++;
        }
    }}
    return c;
    }

int main() {
    int r1,r2,r3,io_action, k=0, flag,f_1; // эти переменные отвечают за размерность каждой из 3 матриц
    char a;
    ifstream infile;
    string s="";
    setlocale(LC_ALL, "Russia");
    while(true){
        cout<<"Работаем? 1 - Да| 2- Нет ";
        cin>> flag;
        if (flag == 2){
            break;
        }

        cout << "Как записать матрицы?"<<"\n"<<" 1 - Прочитать из файла | 2 - Ввести через консоль ";
        cin>> io_action;
        cout<< endl;
        if (io_action == 1){
            string filename;
            cout<<"Введите полное имя файла(путь): ";
            cin>> filename;
            infile.open(filename);
            infile.seekg(0,ios::beg);
            if(infile.fail() ) {
                cerr << "Ошибка доступа к файлу" << endl;
                continue;}
            // читает матрицы из файла и создает объекты класса
            infile.get(a);
            while (a!='B'){
                infile.get(a);
                s +=a;}
            r1 = (int)s[1] - 48;
            s.erase((s.size()-4));
            SqrtMatrix mat1(r1);
            file_in(mat1,r1,s);
            s ="";
            while (a!='C'){
                infile.get(a);
                s +=a;}
            r2 = (int)s[1] - 48;
            s.erase((s.size()-4));
            SqrtMatrix mat2(r2);
            file_in(mat2,r2,s);
            s ="";
            while (!infile.eof()){
                infile.get(a);
                s +=a;}

            infile.clear();
            infile.close();

            r3 = (int)s[1] - 48;
            SqrtMatrix mat3(r3);
            file_in(mat3,r3,s);
            editing(mat1,mat2,mat3);
            mat3 = task(mat1,mat2,mat3,r1,r2,r3);
            mat3.print();

            cout<< "Записать результат в файл? 1 - Да| 2- Нет ";
            cin>> f_1;
            if (f_1 == 1){
                file_out( mat1, r1);
                file_out( mat2, r2);
                file_out( mat3, r3);
            }
            conclusion(mat1,mat2,mat3);
            s ="";
       }


        if( io_action == 2) {
            k= 0;
            cout << "Введите размерности матриц: ";
            cout << "1 матрица: ";
            cin >> r1;
            cout << "2 матрица: ";
            cin >> r2;
            cout << "3 матрица: ";
            cin >> r3;
            cout << endl;
            SqrtMatrix mat1(r1);
            SqrtMatrix mat2(r2);
            SqrtMatrix mat3(r3); // cоздание трех матриц методом из класса
            mat1 = console_in(mat1,r1, ++k);
            mat2 = console_in(mat2,r2, ++k);
            editing(mat1,mat2,mat3);
            task(mat1,mat2,mat3,r1,r2,r3);
            cout<< "Записать результат в файл? 1 - Да| 2- Нет ";
            cin>> f_1;
            if (f_1 == 1){
                file_out( mat1, r1);
                file_out( mat2, r2);
                file_out( mat3, r3);

            }
            mat3.print();
            conclusion(mat1,mat2,mat3);
        }
    }

    return 0;
}





