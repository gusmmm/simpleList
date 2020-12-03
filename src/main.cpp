#include "include/list.h"
#include "include/database.h"


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
    
    Database data;
    data.write();

    cout << "FIM" << endl;
    return 0;
}
