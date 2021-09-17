#include <fstream>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    ofstream out ("/home/batman/school/task1/result.txt", ios_base::app) ;
    ifstream res ("/home/batman/school/task1/result.txt");
    string question, answer, result;
    int choice;
    cout << "Отправьте:" << endl << "1, если Вам нужно провести опрос пользователя" << endl << "2, если Вам нужны результаты опроса" << endl;
    cin >> choice;
    ifstream in ("/home/batman/school/task1/questions.txt");
    if(choice == 1)
    {
        if(in.is_open())
        {
            while(getline(in, question))
            {
                cout << question << endl;
                cin >> answer;
                out << answer << endl;
            }
        }
    }
    if(choice == 2)
    {
        if(res.is_open())
        {
            while(getline(res, result))
            {
                cout << result << endl;
            }
        }
    }
    out.close();
    return 0;
}
