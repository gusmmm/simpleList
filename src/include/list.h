#include <iostream>
#include <vector>
using namespace std;

class List
{
private:
protected:
public:
    List(){

    }
    ~List(){
        
    }
    vector<string> list;
    string name;

    void print_menu();
    void add_item();
    void delete_item();
    void print_list();
};