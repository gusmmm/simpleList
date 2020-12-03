#include "include/list.h"
#include "include/database.h"


int main(int argc, char *argv[])
{
    List simpleList;
    Database data;

    if(argc>1)
    {
        
        simpleList.name = string(argv[1]);
        cout << "Nome: " << simpleList.name << endl;
        simpleList.print_menu();
        data.write(simpleList.list);
        data.read();
    } else
    {
        cout << "Nao introduziu o nome" << endl;
    }
    
   
    

    cout << "FIM" << endl;
    return 0;
}
