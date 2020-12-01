#include "include/list.h"

void List::print_menu()
{
    int choice;

    cout << " ****************************" << endl;
    cout << " 1 - print list" << endl;
    cout << " 2 - Add to list" << endl;
    cout << " 3 - Delete from list" << endl;
    cout << " 4 - Quit" << endl;
    cout << " Enter you choice and press enter: ";

    cin >> choice;
    if(choice == 4)
    {
        cout << "FIM" << endl;
        exit(0);
    } else if(choice == 1)
    {
        print_list();
    } else if(choice == 2)
    {
        add_item();
    } else if(choice == 3)
    {
        delete_item();
    }
    else
    {
        cout << "Not implemented yet" << endl;
    }
}

void List::add_item()
{
    cout << endl;
    cout << " **** ADD ITEM **** " << endl;
    cout << "New item to add: ";

    string item;
    cin >> item;

    list.push_back(item);
    cout << "Adicionado o item: " << item << endl;
    cin.clear();

    print_menu();
}

void List::delete_item()
{
    cout << "*** Delete Item ***" << endl;
    cout << "Select item to delete" << endl;

    if(list.size())
    {
        for(int i=0; i < (int) list.size();i++)
        {
            cout << i << ": " << list[i] << endl;
        }
    } else
    {
        cout << "No items to delete" << endl;
    }
    print_menu();
    
}

void List::print_list()
{
    cout << "*** Print List ***" << endl;
    for(int i=0; i < (int) list.size();i++)
    {
        cout << " * " << list[i] << endl;
    }
    print_menu();

}