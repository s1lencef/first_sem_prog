#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int n;
    string filename;
    char a;
    string sent="";
    setlocale(LC_ALL,"Russia");
    while(true){
        cout<<"Дальше? "<<endl;
        cin>> n;
        if (n == 1){
            cout<<"Адрес: "<<endl;
            cin>> filename;
            ifstream file(filename);
            while(!file.eof()){
                file.get(a);
                sent+=a;
            }
            cout<< sent<< endl;

        }
        else{
            break;
        }
    }
    return 0;
}