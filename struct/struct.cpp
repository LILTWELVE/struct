// struct.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    struct Student {
        string name;
        string surname;
        int oneball, twoball, threeball, srball;

    };

    Student otherStudent;
    otherStudent.name = "Иван Иванов";
    otherStudent.surname = "Петров";
    otherStudent.oneball = 5;
    otherStudent.twoball = 4;
    otherStudent.threeball = 3;
    otherStudent.srball = (otherStudent.oneball + otherStudent.twoball + otherStudent.threeball) / 3;

    cout << "Имя студента: " << otherStudent.name << endl;
    cout << "Фамилия студента: " << otherStudent.surname << endl;
    cout << "Оценки за экзамены: " << otherStudent.oneball << "," << otherStudent.twoball << "," << otherStudent.threeball << endl;
    cout << "Средний балл студента: " << otherStudent.srball << endl;

    return 0;
}

