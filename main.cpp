#include <fstream>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    ofstream out ("/home/batman/school/task1/result.txt") ;
    string name, favourite;
    cout << "ФИО: ";
    cin >> name;
    cout << "Рекомендуемая книга: ";
    cin >> favourite;
    out << name << endl << favourite;
    out.close();
    return 0;
}
