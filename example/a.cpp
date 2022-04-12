
#include <iostream>
using namespace std;

struct A{
    int* xp[10];
    int d[5];
    int* k;
};
struct B{
    A* xt;
    B* r;
};

int main() {
    B *h,*p,*t,g[50];

    for(int i = 0; i<50; i++ ){
        g[i].xt = new A;

        for(int j =0; j<5;j++){
            g[i].xt->d[j] = 1;
        }

        for(int j =0; j<10;j++){
            g[i].xt->xp[j] = new int;
            *(g[i].xt->xp[j])=1;
        }


    }


    return 0;
}
