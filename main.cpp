#include "Chef.h"
#include "ItalianChef.h"
#include <iostream>

using namespace std;

int main()
{
    // Chef-olio
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    cout << endl;

    // ItalianChef-olio
    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();
    cout << "name of the Italian Chef is " << italianChef.getName() << endl;

    return 0;
}
