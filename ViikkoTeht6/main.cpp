#include "student.h"

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// funktio vertailua varten
bool compareByName(Student& a, Student b) {
    return a.getName() < b.getName();
}

// Funktio vertailua varten
bool compareByAge(Student& a, Student& b) {
    return a.getAge() < b.getAge();
}

int main()
{
    int selection = 0;
    vector <Student> studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

    switch(selection)
    {
        case 0:
        {
            string n;
            int i;
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            cout << "Anna nimi: ";
            cin >> n;
            cout << "Anna ika: ";
            cin >> i;
            // Lisää uusi student StudentList vektoriin.
            Student uusiOppilas("", 0);
            uusiOppilas.setName(n);
            uusiOppilas.setAge(i);
            studentList.push_back(uusiOppilas);
            break;
        }

        case 1:
        {
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            for(auto& uusiOppilas : studentList)
                uusiOppilas.printStudentInfo();
            break;
        }
        case 2:
        {
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            sort(studentList.begin(), studentList.end(), compareByName);

            for(auto& uusiOppilas : studentList)
            {
                uusiOppilas.printStudentInfo();
            }

            break;
        }
        case 3:
        {
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(), compareByAge);

            for(auto& uusiOppilas : studentList)
            {
                uusiOppilas.printStudentInfo();
            }
            break;
        }

        case 4:
        {

            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            string n;
            cout << "Etsi nimella: ";
            cin >> n;

            auto it = find_if(studentList.begin(), studentList.end(), [&n](Student &s)
            {
                return s.getName() == n;
            });

            if (it != studentList.end())
            {
                // Tulosta opiskelijan tiedot
                cout << "Loytyi" << endl;
                it->printStudentInfo();
            }
            else
            {
                cout << "Opiskelijaa ei loytynyt." << endl;
            }
                break;
            }

        break;

        default:
        {
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    }
}
    while(selection < 5);

    return 0;
}
