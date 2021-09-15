#include <fstream>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    ofstream out ("/home/batman/school/task1/result.txt") ;
    string name, favourite, getcontent;
    cout << "ФИО: ";
    cin >> name;
    cout << "Рекомендуемая книга: ";
    cin >> favourite;
    out << name << endl << favourite;
    out.close();
    ifstream openfile ("/home/batman/school/task1/result.txt");
    if(openfile.is_open())
    {
        while(getline(openfile, getcontent))
        {
            cout << getcontent << endl;
        }
    }
    return 0;
}
