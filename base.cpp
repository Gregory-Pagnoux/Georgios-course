//***********************************INSTRUCTIONS***********************************//
//This is the very basic C++ program.
//***********************************BASIC PROGRAM***********************************//

//Linking section
#include <iostream> //library to use << (print) and >> (//!What is it?)
#include <string> //library for all string operation
//using namespace std; //std = standard and namespace group/organize name of functions, variables in the right library to avoid conflict. It permit also to don't write std::
/* exemple:
std::myfunction(); is not the same as cv::myfunction(); */

//Definition section
#define message "factorial" //You can use message everywhere but at some point you need to change the message, So you just need to change the define and not all message position
typedef int GT_INT; //Define 

//No semicolon behind include and define because isn't considered as normal code line in C++

//Global declaration section
GT_INT num = 3;
GT_INT fact = 1;
GT_INT store = 0;
//or GT_INT num = 0, GT_INT fact = 1, GT_INT store = 0;

GT_INT factorial(GT_INT num){
    if(num == 0){
        return 0;
    }
    for (GT_INT i=1 ; i <= num; i++){
        fact *= i;
    }
    return fact;
};

GT_INT main(){
    store = factorial(num);
    std::string msg = " of ";
    std::cout << message << msg << num << ": " << std::endl;
    std::cout << store;
    return 0;
}
