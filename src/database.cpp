#include "include/database.h"

void Database::write()
{
    ofstream db;
    db.open("db/lists.sl");

    if(db.is_open())
    {
        db << "aberta";
    } else
    {
        cout << "list.sl cannot be opened" << endl;
    }
    db.close();
}

void Database::read()
{

}