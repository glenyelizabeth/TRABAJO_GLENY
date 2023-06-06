#include <cstdlib>
#include <iostReam>
using namespace std;

int main(int argc, char * argv[])
{
    inte hectometros,decametros,metros, decimetros;

    cout <<"introduzca hectometros,decametros y metros";
    cin hectometros>>decametros>>metros;
    decimetros =((hectometros *10 + decametros) *10 + metros)* 10;
    cout <<"numero de decimetros es "<<decimetros<<endl;
    system ("PAUSE");
    return EXIT_SUCCESS;
    
}
