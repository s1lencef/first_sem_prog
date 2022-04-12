# include <iostream>

using namespace std;

const int Ax = 0, Ay = 0, Bx = 5, By = 5, Cx = 0, Cy =5;

int main() {
    setlocale(LC_ALL, "Russian");
    int triangle_vertex_x, triangle_vertex_y;
    if (Ax != Ay) {
        triangle_vertex_x = Ax;
        triangle_vertex_y = Ay;
    } else if (Bx != By) {
        triangle_vertex_x = Bx;
        triangle_vertex_y = By;
    } else {
        triangle_vertex_x = Cx;
        triangle_vertex_y = Cy;
    }
    int triangle_type, max_height;
    max_height = max(Ay, By);
    max_height = max(max_height, Cy);
    if (triangle_vertex_y < max_height) {
        triangle_type = 1;
    } else {
        triangle_type = 2;
    }

    int self_x, self_y;

    while (true) {
        cout << "Введите значение координаты 'х' \n";
        cin >> self_x;
        cout << " Введите значение координаты 'y'\n";
        cin >> self_y;
        if (self_x == 0 && self_y == 0){
            break;
        }
        if (triangle_type == 1) {
        int min_x;
        min_x = min(Ax, Bx);
        min_x = min(Cx, min_x);
        cout << self_x << "   " << self_y << "\n";
        if ((self_x <= triangle_vertex_x) && (self_x >= min_x) && (self_y <= max_height) && (self_y >= triangle_vertex_y) && (self_y <= self_x) ) {
            cout << "OK\n";
        } else
            cout << "Не OK\n";

        }
        else {
            int max_x, min_y;
            max_x = max(Ax, Bx);
            max_x = max(Cx, max_x);
            min_y = min(Ay, By);
            min_y = min(Cy, min_y);
            cout << self_x << "   " << self_y << "  ";
            if ((self_x >= triangle_vertex_x) && (self_x <= max_x) && (self_y >= min_y ) && (self_y <= triangle_vertex_y) && (self_x <= self_y) ) {
                cout << "OK\n";
            } else
                cout << "Не OK\n";

        }
    }

    return 0;
}
