/*Name: Alejandro Rodriquez,2001889172,lab8A
*Description: creating arithmetic functions
*Input: values to be used in calculations
*Output: calculated floating point values
*/
//include proper libraries
#include <iostream>
#include <string>
#include <iomanip>

//prototypes
double getDoubleInput(std::string&,double&,double&);
void getDoubleInputs(double&,double&);
void addSubtract(double&,double&);
void multiplyDivide(double&,double&);
bool checkFailure(double,double,double);

//varaiable containing Input range
double max = 20.500000; //max
double min = 0.500000; //min
std::string prompt1;
std::string prompt2;
int main(){
    //variables containing userInputs
    double num1, num2;
    //save user prompt user for inputs
    prompt1 = "Enter a double between " 
                            +  std::to_string(min) + " and " 
                            +  std::to_string(max) 
                            +"\n**";
    prompt2 = "Enter another double between " 
                            + std::to_string(min) + " and " 
                            + std::to_string(max)  
                            + "\n**";
                  
    //function calls varables containg prompt for user inputs
    //and checks variables are in correct range
    getDoubleInputs(num1,num2);

    //fuctions will store result of calculations
    //and output their result

    //add and subtract function
    addSubtract(num1,num2);

    //multiply and divide function
    multiplyDivide(num1,num2);
    
    return 0;
}
//function will add/subtr userInputs and output calculations
void addSubtract(double& num1, double& num2){
    double add = num1 + num2;
    double subtr = num1 - num2; 
    std::cout <<std::fixed<<std::setprecision(2)<< num1 << " + " 
              << num2 << " = " << add <<std::endl;
    
    std::cout <<std::fixed<<std::setprecision(2)<< num1 << " - " 
              << num2 << " = " << subtr << std::endl;
}
//functions will mult/div userInputs and output calculations
void multiplyDivide(double& num1, double& num2){
    double mult = num1 * num2;
    double div = num1 / num2; 
    std::cout <<std::fixed<<std::setprecision(2)<< num1 << " * " 
              << num2 << " = " << mult <<std::endl;
    
    std::cout <<std::fixed<<std::setprecision(2)<< num1 << " / " 
              << num2 << " = " << div << std::endl;
}
//function that checks validity of user Input
bool checkFailure(double input, double min, double max){
    const int ingnoreNum =23;
    //if statement will check if user input within required range
    //will also check and clear failState if invalid input is 
    //enterd
    if(std::cin.fail() || (input < min || input > max)){
    std::cin.clear();
    std::cin.ignore(ingnoreNum,'\n');
    std::cout<<"\nERROR: Invalid input!"<<std::endl;
    return false; //will thow error if user input
                 //does not fall within desired range
    }
    return true;
}
void getDoubleInputs(double& num1, double& num2){   
    num1 = getDoubleInput(prompt1,min,max);
    num2 = getDoubleInput(prompt2,min,max);
}
double getDoubleInput(std::string& prompt, double& min,double &max){
    double input;

    do{ //will prompt user for input until requirments are met
    std::cout<<prompt;
    std::cin>>input;
  
    }while(!checkFailure(input,min,max)); //call userdefined check
    std::cout<<std::endl;
    return input;
     //if input valid will be passed into other functions
}