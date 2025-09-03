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
    void Init(const char* n, int a, const char* telN, const char* cou, const char* cit, const char* uni) {
        fullname = new char[strlen(n) + 1];
        strcpy(fullname, n);

        telefonNumber = new char[strlen(telN) + 1];
        strcpy(telefonNumber, telN);

        university = new char[strlen(uni) + 1];
        strcpy(university, uni);

        country = new char[strlen(cou) + 1];
        strcpy(country, cou);

        city = new char[strlen(cit) + 1];
        strcpy(city, cit);

        age = a;
    }
};
int main() {

}