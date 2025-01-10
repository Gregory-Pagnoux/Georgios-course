#include <iostream>
#include <string>

using namespace std;

//Structure isn't like class (//!what is the difference?)
struct Student{
    string name;
    string adress;
    int year;
    int grade;
};

Student George;
George.name = "George";
George.adress = "None of your business 13";
George.year = 100;
George.grade = -100;

Student Gregory;
Gregory.name = "Gregory";
Gregory.adress = "Vierzon";
Gregory.year = 20;
Gregory.grade = 35;

//Pointer to allocate 32 bits * 10
//You can use new or delete (//!delete 3 pointer's locations or the 3rd pointer?)
int* ptr = new int[10];
delete[3] ptr;

void main(){

}
