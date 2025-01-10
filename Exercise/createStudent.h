#include <iostream>
#include <string>
#include <random>

#define numStudent 35

using namespace std;

struct student{
    string fName;
    string sName;
    int age;
    string school;
    int grade;
};

// 46 first names
string fNameList[] = {"Gregory", "Laurent", "Alexis", "Matteo", "Lena", "Clementine", "Maxime", "Mathis", "Lucas", "Emilien", "Vivien", "Paul", "Enoal", "Vianney", "Julian", "Yann-Mael", "Michel", "Salah", "Thibaud", "Alexandre", "Abde", "Antoine", "Aurelien", "Axel", "Benoit", "Camille", "David", "Guillaume", "Elone", "Enzo", "Evan", "Habi", "Jason", "Loic", "Manech", "Mariem", "Mathias", "Max", "Pavlo", "Pierre", "Quentin", "Remy", "Robin", "Thomas", "Tino", "Victor"};
// 51 names
string sNameList[] = {"Pagnoux", "Bouquin", "Lefin", "De Germain", "Curel", "Caron", "Despaux", "Lebel", "Megnan", "Nowak", "Namir", "Bouton", "Santos", "Lasselin", "Adam", "Riff", "Bopp", "Aubard", "Marlier", "Polard", "Pascucci", "Reine", "Chinsy", "Makran", "Thizeau", "Prevost", "Fernandez", "David", "De Keyn", "Bistrel", "Gayat", "Cuahonte", "Delille", "Guillouche", "Uhring", "Deramchi", "Cailleau", "Grosso", "Nogues", "Laguens", "Zaiane", "Gagnepain", "Bernard", "Prendi", "Gorin", "Clement", "Charles", "Goumy", "Planchard", "Gabet", "Leroy"};
// 5 schools
string schoolList[] = {"42", "ALGOSUP", "Paris University", "Science Po", "Sorbonne"};

void createStudent(){
    student student[numStudent];

    // calculate the size of each list
    int fNameListSize = sizeof(fNameList) / sizeof(fNameList[0]);
    int sNameListSize = sizeof(sNameList) / sizeof(sNameList[0]);
    int schoolListSize = sizeof(schoolList) / sizeof(schoolList[0]);

    random_device rd;
    mt19937 gen(rd());
    //int n = rd(nameListSize); //choose an index for nameList
    //int a = ageRand(17, 30); //choose an age between 17 and 30
    //int s = rd(schoolListSize); //choose an index for schoolList
    //int g = gradeRand(0, 20); //choose a grade between 0 and 20
    uniform_int_distribution<> fNameRand(0, fNameListSize - 1); //choose an index for fNameList
    uniform_int_distribution<> sNameRand(0, sNameListSize - 1); //choose an index for sNameList
    uniform_int_distribution<> ageRand(17, 30); //choose an age between 17 and 30
    uniform_int_distribution<> schoolRand(0, schoolListSize - 1); //choose an index for schoolList
    uniform_int_distribution<> gradeRand(0, 20); //choose a grade between 0 and 20

    for(int i = 0; i < numStudent; i++){
        // create student
        student[i].fName = fNameList[fNameRand(gen)];
        student[i].sName = sNameList[sNameRand(gen)];
        student[i].age = ageRand(gen);
        student[i].school = schoolList[schoolRand(gen)];
        student[i].grade = gradeRand(gen);

        // print student informations
        cout << "//---------- " << i + 1 << " ----------//" << endl;
        cout << "First name: " << student[i].fName << endl;
        cout << "Name: " << student[i].sName << endl;
        cout << "Age: " << student[i].age << endl;
        cout << "School: " << student[i].school << endl;
        cout << "Grade: " << student[i].grade << endl;
    }
}