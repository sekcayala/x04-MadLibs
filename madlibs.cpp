//Authors: Alejandro Ayala//
#include <iostream>
#include <string>

int main()
{
std::string name1;
std::cout <<"What is his name?"<< std::endl;
std::cin >>name1;

int number1;
std::cout<<"What number can he go"<< std::endl;
std::cin >>number1;

int number2;
std::cout <<"What section of the book where they on?"<< std::endl;
std::cin >>number2;

char symbol;
std::cout <<"Is she asking a question, or yelling?"<< std::endl;
std::cin >>symbol;

std::cout<<"One day," <<name1<< "had to go to school."<< std::endl;
std::cout<<"He asked his teacher to go number" <<number1<< "." <<std::endl;
std::cout<<"But the teacher requested that he answered the math equation on section" <<number2<< "."<<std::endl;
std::cout<<"Eventually he left and she asked where are you going" <<symbol<< "." <<std::endl; 
  return 0;
}
