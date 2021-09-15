#include <fstream>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    ofstream out ("/home/batman/school/task1/result.txt") ;
    string name, favourite, kprf;
    cout << "ФИО: ";
    cin >> name;
    cout << "Рекомендуемая книга: ";
    cin >> favourite;
    cout << "За какую партию планируете голосовать: ";
    cin >> kprf;
    out << name << endl << favourite << endl << kprf;
    out.close();
    return 0;
}
