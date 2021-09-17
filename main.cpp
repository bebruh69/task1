#include <fstream>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    ofstream out ("/home/batman/school/task1/result.txt") ;
    string question, answer;
    ifstream in ("/home/batman/school/task1/questions.txt");
    if(in.is_open())
    {
        while(getline(in, question))
        {
            cout << question << endl;
            cin >> answer;
            out << answer << endl;
        }
    }
    out.close();
    return 0;
}
