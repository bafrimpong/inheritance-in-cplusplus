#include <iostream>

using namespace std;

class Person {
    public:
        string name;
        string address;
        string birthDate;
        string phone;

    void updateBirthDate(){
    };
};

class Patient {
    public:
        string insuranceCarrier;

   int updateInsuranceCarrier(){
        return 0;
    };

    bool addInsuranceCarrier(){
        return false;
    }
};

class Doctor : public Person {
    string medicalSchoolSpeciality;

    void updateMedicalSchoolSpeciality(){
    };

};

int main()
{
    //cout << "Hello world!" << endl;
    Doctor doctor;
    doctor.name = "Bismark";
    doctor.address= "Box 1515, Sunyani";
    doctor.birthDate = "23-Sep-1852";

    cout << "My name is " + doctor.name + ". I live at " + doctor.address + ". I am was born on " + doctor.birthDate << endl;

    return 0;
}

