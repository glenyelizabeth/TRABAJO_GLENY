#include <cstdlib>
#include <iostReam>
using namespace std;

int main(int argc, char * argv[])
{
    const float G = 6.673e-8;

    float masa1, masa2, distancia, fuerza;
    cout<<"introduzca la masa de los cueRpos en gramos:\n";
    cin>>masa1 >>masa2;
    cout<<"introduzca la distancia entre ellos en centimetros:\n";
    cin>>distancia;

    if ((masa1 <=0) || (distancia <=0))
    cout <<"la solucion es: \n";
    else
    {
        fuerza =G *masa1 * masa2/ (distancia * distancia);
        cout <<"la solucion es: \n";
        cout<<"fuerza en dinas = "<<fuerza <<endl;

    }
    system("PAUSE");
return EXIT_SUCCESS;
    }