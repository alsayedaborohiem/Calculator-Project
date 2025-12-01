#include <iostream>

using namespace std;

int main()
{
     int num1,num2;
     char chr,again;

     do{
        cout<< "Enter your number 1 \n";
        cin>>num1;
        cout<< "Enter your number 2 \n";
        cin>>num2;
        cout<< "Enter your operator of this ( + - * % / ) \n";
        cin>>chr;

        if(chr == '+'){
            cout<< "Result = "<<num1+num2;
        }else if(chr == '-'){
            cout<< "Result = "<<num1-num2;
        }else if(chr == '*'){
            cout<< "Result = "<<num1*num2;
        }else if(chr == '/'){
            if(num2 != 0){
                cout<< "Result = "<<num1/num2;
            }else{
                cout << "Error, I can't divide by zero"<<endl;
            }
        }else if(chr == '%'){
            cout<< "Result = "<<num1%num2;
        }else{
            cout << "Wrong operator ";
        }
        cout<< "\n need another operator ? write Y for YES and N for NO : ";
        cin>>again;
        while(again != 'Y' && again != 'N'){
            cout<< "Error , write only (Y) for YES and (N) for NO : ";
            cin>>again;
        }

     }while(again=='Y');

    return 0;
}
