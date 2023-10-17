#include<iostream>
#include<string>
#include<sstream>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string cesar;
    int k;
    cout << "Введите сообщение, которое будет закодированно: " << endl;
    getline(cin,cesar);
    cout << "Введите шаг кодировки: " << endl;
    cin >> k;
    for (int i = 0;i < cesar.size(); i++)
        if ((int(cesar[i]) < 91 && int(cesar[i]) > 64) || (int(cesar[i]) < 123 && int(cesar[i]) > 96))
        {
            cesar[i] += k;
            if (int(cesar[i] > 91) && int(cesar[i] < 97))
                cesar[i] = (int(cesar[i]) - 90) + 64;
            if (int(cesar[i] > 122))
                cesar[i] = (int(cesar[i]) - 122) + 96;
        }
    cout << cesar << endl;  
}