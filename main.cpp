#include <fstream>
#include <string>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    ofstream out ("../school/result.txt", ios_base::app);
    ifstream in ("../school/questions.txt", ios_base::in);
    int choice;
    cout << "Choose:" << endl << "1, if u need a test" << endl << "2, if u need results" << endl << "3, if u need change questions" << endl;
    cin >> choice;
    if(choice == 1)
    {
        string question, answer, name;
        cout << "Your name:" << endl;
        cin >> name;
        out << name << endl << "#^#^#^#" << endl;
        if(!out.is_open())
            cout << "you fucked up" << endl;
        if(!in.is_open())
            cout << "I fucked up" << endl;
        while(getline(in, question))
        {
            cout << question << endl;
            cin >> answer;
            out << answer << endl;
        }
        out << "#*#*#*#" << endl;
        out.close();
    }
    if(choice == 2)
    {
        int switcher = 0;
        string temp;
        ifstream res ("../school/result.txt");
        map<string, vector<string>> name_answers;
        string temp_name;
        while(!res.eof())
        {
            getline(res, temp);
            if (temp == "#^#^#^#")
                switcher = 1;
            if (temp == "#*#*#*#")
                switcher = 0;
            if (temp != "#^#^#^#" && temp != "#*#*#*#")
            {
                if (switcher == 0)
                {
                    temp_name = temp;
                    name_answers[temp_name];
                }
                if (switcher == 1)
                    name_answers[temp_name].push_back(temp);
            }
        }
        for (auto it = name_answers.begin(); it != name_answers.end(); ++it)
        {
            cout << it->first << endl;
            for(int i=0; i < it->second.size(); i++)
            {
                cout << it->second[i] << "; ";
            }
            cout << endl;
        }
    }
    if(choice==3)
    {
        string question;
        string all_questions="";
        cout << "if you finish enter /end" << endl << "enter your questions:" << endl;
        while(true)
        {
            getline(cin, question);
            if(question=="/end")
                break;
            if(question!="/end")
                all_questions=all_questions+question+"\n";

        }
        all_questions.erase(all_questions.begin(), all_questions.begin()+1);
        all_questions.erase(all_questions.end()-1, all_questions.end());
        ofstream out ("../school/questions.txt");
        out << all_questions;
        out.close();
        out.open("../school/result.txt", ofstream::out | ofstream::trunc);
        out.close();
    }
    return 0;
}
