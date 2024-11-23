#include <iostream>
#include <string>

using namespace std;

int main()
{
    string exemplo1 = "Calabrezo da silva";
    string exemplo2("BlueCaps");
    string exemplo3(4,'x'); //xxxx
    string exemplo4 = exemplo1.substr(9,9);
    string exemplo5 = exemplo1.substr(0,9);

    cout << exemplo1 << endl;
    cout << exemplo2 << endl;
    cout << exemplo3 << endl;

    cout << exemplo2[4] << endl;
    cout << exemplo2.size() << endl;
    
    cout << exemplo5 + " e um hacker " + exemplo2 << endl;
    cout << "Sobrenome: " + exemplo4 << endl;
    cout << "Nome: " << exemplo5 << endl;

    exemplo1.replace(13,5,"Souza");
    cout << "" << endl;
    cout << exemplo1 << endl;

    if (exemplo1.compare(exemplo2) < 0)
    {
        cout << "exemplo 1 é menor que exemplo 2" << endl;
    }else
    {
        cout << "exemplo 2 é menor que exemplo 1" << endl;
    }
    
    
    return 0;
}
