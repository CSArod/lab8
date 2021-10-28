/*Name: Alejandro Rodriquez,2001889172,lab8A
*Description:
*Input:
*Output:
*/
//include proper libraries
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
//prototypes
double getDoubleInput(std::string prompt,double num1,double num2);
void getDoubleInputs(double& num1,double& num2);
void addSubtract(double& num1 ,double& num2);
void multiplyDivide(double,double);
bool checkFailure(double input,double min,double max);
void addInput(double& num1,double& num2);
void subract(double& num1,double& num2);
void multiplyDivide(double& num1, double num2);
//main function
int main(){
    double max = 20.500000;
    double min = 0.500000;
    double num1, num2;
    //double mult = 0;
    //double div = 0;
    //double add = 0;
    //double subtr = 0;
    //prompt user to enter num1 and num2
    std::string prompt1 = "Enter a double between " 
                          +  std::to_string(min) + " and " 
                          +  std::to_string(max) 
                          +"\n**";
                          
    std::string prompt2 = "Enter another double between " 
                          + std::to_string(min) + " and " + std::to_string(max)  
                          + "\n**";

    

    std::cout<< prompt1;
    std::cin>> num1;
    
    std::cout<<prompt2;
    std::cin>>num2;

    getDoubleInputs(num1,num2);

    double userInput1;
    double userInput2;

    double sum = num1 + num2;
    double subtr = num1 - num2;
    double mult = num1 * num2;
    double div = num1 / num2;
    //pass userInputs as parameters into function
   
    //getDoubleInputs(prompt2,num1,num2);
    std::cout <<std::fixed<<std::setprecision(2)<< std::to_string(num1) + " + " 
    + std::to_string(num2) << " = " << sum <<std::endl;
    

    std::cout <<std::fixed<<std::setprecision(2)<< std::to_string(num1) + " - " 
    + std::to_string(num2) << " = " << subtr << std::endl;

    std::cout <<std::fixed<<std::setprecision(2)<< std::to_string(num1) + " * " 
    + std::to_string(num2) << " = " << mult << std::endl;

    std::cout <<std::fixed<<std::setprecision(2)<< std::to_string(num1) + " / " 
    + std::to_string(num2) << " = " << div << std::endl;

    num1 = sum;
    num2 = subtr;

    num1 =mult;
    num2 = div;

    return 0;
    

}
//function that adds two user inputs
void addInput(double& num1,double& num2){
    double sum = num1 + num2;
    
    
}
//function that subtracts userInputs;
void subtract(double& num1,double& num2){
    double subtr = num1 - num2;
    std::cout <<std::fixed<<std::setprecision(2)<< num1 +
    + num1 << " = " << subtr;
    
}
void getDoubleInputs(double& num1, double& num2){
    double userInput1;
    double userInput2;
    num1 = userInput1;
    num2 = userInput2;
}
double getDoubleInput(std::string& prompt, double& min,double &max){
    double input;
    do{ //will prompt user for radius until requirments are met
    std::cout<<prompt;
    std::cin>>input;
    }while(!checkFailure(input,min,max)); //call userdefined checkFail
    return input;
     //if input valid will be passed into other functions
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
    std::cout<<"\nERROR: invalid input!"<<std::endl;
    return false; //will thow error if user input
                 //does not fall within desired range
    }
    return true;
}

