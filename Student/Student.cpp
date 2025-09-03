#include <iostream>
using namespace std;
class Student {
    char* fullname;
    int age;
    char* telefonNumber;
    char* university;
    char* city;
    char* country;
public:
    char* GetTel() {
        return telefonNumber;
    }

    char* GetUni() {
        return university;
    }

    char* GetCity() {
        return city;
    }

    char* GetFname() {
        return fullname;
    }

    void Print() {
        cout << "Name: " << fullname
            << " | Age: " << age
            << " | Tel: " << telefonNumber
            << " | Country: " << country
            << " | City: " << city
            << " | University: " << university
            << endl;
    }

    void Init(const char* n, int a, const char* telN, const char* cou, const char* cit, const char* uni) {
        fullname = new char[strlen(n) + 1];
        strcpy_s(fullname, strlen(fullname) + 1, n);

        telefonNumber = new char[strlen(telN) + 1];
        strcpy_s(telefonNumber, strlen(telefonNumber) + 1, cit);

        university = new char[strlen(uni) + 1];
        strcpy_s(university, strlen(university) + 1, uni);

        country = new char[strlen(cou) + 1];
        strcpy_s(country, strlen(country) + 1, cou);

        city = new char[strlen(cit) + 1];
        strcpy_s(city, strlen(city) + 1, cit);

        age = a;
    }

    void MyDelete() {
        delete[] fullname;
        delete[] telefonNumber;
        delete[] university;
        delete[] city;
        delete[] country;
    }
};

int main() {
    Student obj1;
    obj1.Init("Katya", 19, "+1999999999", "Deutschland", "Berlin", "TU Berlin");
    obj1.Print();
    obj1.MyDelete();

};
