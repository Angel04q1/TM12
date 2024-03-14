//Nombre:Angel Alexander Rodriguez Ciriaco
// Grupo:TM12
// Fecha: 13/03/2024
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
const double gravedad = 9.81;
bool respuesta = true;



int main()
{
    /* 
    MatrixXd A(3, 3);
    A << 1, 2, 3, 
         4, 5, 6, 
         7, 8, 9;   
    cout << A;
    cout << endl;
    cout << endl;

    MatrixXd B(3, 3);
    B << 1, 2, 3,
        4, 5, 6,
        7, 8, 9;    
    cout << B;
    cout << endl;
    cout << endl;

    MatrixXd C(3, 3);
    C << 1, 2, 3,
        4, 5, 6,
        7, 8, 9;
    cout << C;
    cout << endl;
    cout << endl;



    */

    /*

    cout << "hola que \*llegaron\* tarde?" << endl;
    cout << "hola que \\*llegaron\\* tarde?" << endl;
    cout << "hola que \tllegaron\t tarde?" << endl;
    cout << "hola que \nllegaron\n tarde?" << endl;

    cout << "mi variable int es " << foo << endl;
    cout << "mi variable double es " << F << endl;
    cout << "mi variable char es " << letra << endl;
    cout << "mi variable string es " << texto << endl;

    cout << "¿cual es tu masa? " << endl;
    cin >> masa;

    F = masa * gravedad;

    cout << "fuerza = " << F << endl;

    */
    

    respuesta = -5;

    cout << respuesta << endl;
    cout << "(9 < 10) =" << (9<10) << endl;
    cout << "(9 > 10) =" << (9 > 10) << endl;
    cout << "(9 == 10) =" << (9 == 10) << endl;
    cout << "(9 != 10) =" << (9 != 10) << endl;
    cout << "(9 >= 10) =" << (9 >= 10) << endl;
    cout << "(9 <= 10) =" << (9 <= 10) << endl;

    MatrixXd A(3, 3);
    A << 1, 2, 3,
        4, 5, 6,
        7, 8, 9;
    cout << A;
    cout << endl;
    cout << endl;

    MatrixXd B(3, 3);
    B << 1, 2, 3,
        4, 5, 6,
        7, 8, 9;
    cout << B;
    cout << endl;
    cout << endl;

    cout << respuesta << endl;

    cout << "(A==B) = " << (A == B) << endl;
    cout << "(A!=B) = " << (A != B) << endl;
}
