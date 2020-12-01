#include "include/list.h"


int main(int argc, char *argv[])
{
    if(argc>1)
    {
        List simpleList;
        simpleList.name = string(argv[1]);
        cout << "Nome: " << simpleList.name << endl;
        simpleList.print_menu();
    } else
    {
        cout << "Nao introduziu o nome" << endl;
    }
    

    cout << "FIM" << endl;
    return 0;
}
