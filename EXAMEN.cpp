//Nombre:
// Grupo:
// Fecha:
//

#include <iostream>
#include"Eigen/Dense"


using namespace std;
using namespace Eigen;

int foo = 98;
double F = 0;
double masa = 0;
char letra = 'a';
string texto = "El texto va entre comillas";
int main()
{
   
    cout << "El numero que les envie es el 'pi' \t3.1416\t y algo mas que diga" << endl;
   




    MatrixXd A(3, 3);
    A << 1, 2, 3,
        4, 5, 6,
        1, 1, 1;
    cout << A;
    cout << endl;
    cout << endl;

    MatrixXd B(3, 3);
    B << -1, 0, -1,
        2, 1, 5,
        1, 1, 1;
    cout << B;
    cout << endl;
    cout << endl;

    MatrixXd C(3, 3);
    C << 1, 0, 1,
        0, 1, 0,
        1, 0, 1;
    cout << C;
    cout << endl;
    cout << endl;

    cout << "C = A + B" << endl;

    C = A + B;
    cout << C;
    cout << endl;
    cout << endl;

    cout << "C = A - B" << endl;

    C = A - B;
    cout << C;
    cout << endl;
    cout << endl;

    cout << "C = A*B" << endl;

    C = A * B;
    cout << C;
    cout << endl;
    cout << endl;

    cout << "det (A)" << endl;
    cout << A.determinant();
    cout << endl;
    cout << endl;

    cout << "inv (C)" << endl;
    cout << C.inverse();
    cout << endl;
    



  
}
