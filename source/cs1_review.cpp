// Computer Science 1 Review
// CS172 - Computer Science 2
// Whitworth University
// Created 1/29/2019
// Outlined by Scott Griffith
// Completed by: Sparsh Rawlani

// Jonus and Nora helped me on this project
// remove comments from each section before runnig the code and comment it back before running another section, just because I don't want to get things messed up!

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int sum(char a, char b, char c);// decalred the two functions globally
void switchCase(string &statement);

int main(){
    char a=0;// defined three characters and declared them equal to 0
    char b=0;
    char c=0;
    cout<< "Enter the first character: ";// user enters the three characters
    cin >> a;
    cout<< "Enter the second character: ";
    cin >> b;
    cout<< "Enter the third character: ";
    cin >> c;
    cout<< "The total is: ";
    a=a-48;// since the ASCII value of numbers starts at the value of 48, subtracting 48 from the number will make the ASCII value of an alphabatical character equal to 0.
    b=b-48;
    c=c-48;
    cout << sum(a ,b,c);// called the sum function  

    
    //bascially I never understood this function completely, Xavier helped me a lot on this, but I still not understood completely, you can dock points for this.
    /*string statement;// defined a string function to capture the user's string input
    cout<< "Please enter the sentence: ";
    getline(cin, statement);// getline captures the string
    switchCase(statement);*/ // called the function

    

    /*int num1=77;// declared two integers with random values
    int num2=9;
    cout << "Addition is: "<< num1+num2 << endl;// addition operator
    cout << "Subtraction is: "<< num1-num2 << endl;// subtraction operator
    cout << "Multiplication is: "<< num1*num2 << endl;// multiplication operator
    cout << "Division is: "<< num1/num2 << endl;// division
    cout << "The remainder when 77 is divided by 9 is: "<< num1%num2 << endl;// modulous


    /*float hours;// user can enter the hours in decimal
    cout <<"Enter time in hours: ";
    cin >> hours;
    cout<< "The entered time in hours when converted to minutes will be: "<< round(hours*60)<<" minutes"<< endl;*/// converts the hours to minutes and rounds it up


    /*char input;
    cout << "Enter a character: ";
    cin.get(input);// cin.get captures all the values including whitespaces and tab spaces.
    cout << "The ASCII value of the character is: "<< static_cast<int>(input) << endl;*/ // static cast casts the char to integer to get the ASCII value

   

    /* int testNum = (rand() % 10) + 1;
    //The statement above produces a random number between 1 and 10, since its +1 after the use of random function. Then the cout statement prints that random number between 1 and 9.
    
     cout << "Test Number is " << testNum << endl;
     
     if(testNum>5){// outputs if the random number generated is greater than 5.
         cout << "The test number is greater than 5"<< endl;
     }

     else if(testNum==5){// outputs if the random number generated is equal 5.
         cout << "The test number is equal 5"<< endl;
     }

     else if(testNum<5){// outputs if the random number generated is smaller than 5.
         cout << "The test number is smaller than 5"<< endl;
     }*/
     
     

    /*int day;// an integer day that switches from 0-6 based on user's input
    cout <<"Enter the day of the week between 0-6: " ;
    cin >> day;// takes in the user's input
    switch(day){
        case 0: 
            cout <<"Its Monday"<< endl;// outputs Monday if user enters 0 and goes on until 6.
            break;// breaks the case.
        case 1: 
            cout <<"Its Tuesday"<< endl;
            break;
         case 2: 
            cout <<"Its Wednesday"<< endl;
            break;
         case 3: 
            cout <<"Its Thursday"<< endl;
            break;
         case 4: 
            cout <<"Its Friday"<< endl;
            break;
         case 5: 
            cout <<"Its Saturday"<< endl;
            break;
         case 6: 
            cout <<"Its Sunday"<< endl;
            break;
        default:
        cout <<"Error" << endl;// displays error if user enters a number that does not lie in the range of 0-6.
        break;
    }*/

    

   
    // for loop patern
    /*int i,j;// intialized two general variables, could have intialized it inside the for loops but this also works
    for(i=0;i<=4;i++){// we need 5 lines, so i should be less than or equal to 4.
        int a=0;// intialzed a new variable that can control the value of k. Also, k<=5 never worked in the third for loop, so had to intialize a new variable.
    for(j=4;j>=i;j--)// this for loop starts the value of j from 4 and goes on till 0 printing down the stars
    {
        cout <<"* ";
        a++;// a incremented since it was 0.
    }
    for(int k=4; a<=5;k++){// the outer for prints the number 4 in the first line and and goes on incrementing in the next lines
        cout<< k << " ";
        a++;
    }
    
    cout << endl;
 }*/





 /*int n1=0;// three variables declared as 0 intially, so that remain 0 before user overwrutes them
 int n2=0;
 int finaldistance=0;
 cout<<"Enter the first number for the distance range: ";// user enters the two  values
 cin >> n2;
 cout <<"Enter the second number for the distance range: ";
 cin>>n1;
 finaldistance=n2;// the distance is equal to the initial value, since it starts from the initial value 
 if(n2<n1){ // if the first number is smaller and the second is bigger, the distance will be printed upto the bigger number
     while(finaldistance < n1){
         cout << finaldistance <<" ";
         finaldistance++; // final distance is incremented since the initial distance is greater than the finaldistance
     }
 }

 if(n1<n2){if the first number is bigger and the second is smaller, the distance will be negative and will be printed in backward order.
     while(finaldistance >n1){ // 
         cout << finaldistance << " ";
         finaldistance--;//final distance is decremented since the initial distance is less than the finaldistance
     }
 }
 cout << endl;
 cout <<"The total distance is "<< n1-n2 << endl;*/ // the total distance is final minus initial, simple physics.





    /*const int lenght=10;// constant integer size of an array
    int myArray[]={0,1,2,3,4,5,6,7,8,9};// defined two arrays as asked in the question, the other one is backwords of the first one
    int yarrAym[]={9,8,7,6,5,4,3,2,1,0};
    
    for(int i=0; i<lenght; i++){
        cout<< myArray[i]<< " ";// iterated through the array using a simple for loop, as did in LM 9 of CS 171.
    }
    cout << endl;
    for(int i=0; i<lenght; i++){// same as myArray
        cout<< yarrAym[i]<< " ";
    }
    cout << endl;

    cout << myArray[0] << " " << myArray[4]<< " "<< myArray[9] << endl;// iterated through the particular values of the array, that is first, fifth and the last
    cout << yarrAym[0] << " " << yarrAym[4]<< " "<< yarrAym[9] << endl;// did the same for yarrAym

    int sum=0;// intialized a variable equal to 0
    for(int i=0; i<lenght;i++){
        sum+=myArray[i]; // iterated through the array and added the elements by looping every element until the loop reaches the last value of the array
        }
    cout << sum << endl;// prints the sum of all the values inside of the array.
    sum=0;
    for(int i=0; i<lenght;i++){
        sum+=yarrAym[i]; // did the same for yarrAym
        }
    cout << sum << endl;*/



   return 0;
}



// function: Charcter Summer, named as summ
// sums the values of the three characters that the yser inputs.
// Input: None through thius function, all inputs through main function
// output: checks if the characters are numbers or not

int sum(char a, char b, char c){
     if(a>=9){
         a=0;// if the user enters a charcter, that is not a number which gets bigger than 9 since its single digit, its taken as 0, for all three characters
     }
      if(b>=9){
         b=0;
     }
      if(c>=9){
         c=0;
     }
     return a+b+c;// the function return the sum
}


// function: Case switcher, named as switchCase
// checks if the string is in uppercase or lowercase and then converts it into the opposite case
// Input: passed a string statement by refrence and used a for loop, i didn't really understood why
// output: converts the case based on user's string input and prints the switched statement
void switchCase(string &statement){
        for(int i=0; i<statement.length();i++){
            if(isupper(statement[i]))// checks if the string is in upper case and if yes, then converts it to lower case.
            {
                statement[i]=tolower(statement[i]);
            }
            else if(islower(statement[i]))// checks if the string is in lower case and if yes, then converts it to upper case.
            {
                statement[i]=toupper(statement[i]);
            }
        }
        cout << statement ; // prints the switched statement
    }