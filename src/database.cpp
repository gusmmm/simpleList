#include "include/database.h"

void Database::write(vector<string> list)
{
    ofstream db;
    db.open("db/lists.sl");

    if(db.is_open())
    {
         for(int i=0; i < (int) list.size();i++)
        {
            db << list[i] << endl;
        }
    } else
    {
        cout << "list.sl cannot be opened" << endl;
    }
    db.close();
}

void Database::read()
{
    ifstream db;
    string line;
    db.open("db/lists.sl");

    if(db.is_open())
    {
        while(getline(db,line,'\n'))
        {
            cout << line << endl;
        }
    } else
    {
        cout << "list.sl cannot be opened" << endl;
    }
    db.close();

}