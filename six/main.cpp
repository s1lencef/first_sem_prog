#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL,"Russia");
    string sentence="";
    int  count_words = 1,n,i=1;
    char s;
    bool flag = true;
    cin>>n;
    ifstream file("E:\\LETI\\1_kurs\\prog\\six\\text.txt");
    if(file.fail() ) {
        cerr << "Ошибка доступа к файлу" << endl;
    }
    while (!file.eof()){

        file.get(s);
        sentence+=s;
        i++;

        if (s == '.' || s == '!' || s == '?'){
            for (int j = 0; j < sentence.size(); j++) {

                if (sentence[j] == ' ' || sentence[j] == '\n' ){
                    count_words++;
                }
            }
   
            if(count_words == n){

                if (flag == false){
                sentence.erase(0,1);
                }
                cout<<sentence<<endl;
            }
            flag = false;
            sentence="";
            count_words= 0;

        }

    }

    return 0;
}
