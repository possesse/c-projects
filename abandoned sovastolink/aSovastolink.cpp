#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h> 
#include <windows.h>
#include <stdio.h>


using namespace std;

int main()
{
    system ("CLS");
    int entry;
    double Logs = 0.0;
    double Reports = 0.0;
    double Proplems = 0.0;
    double Reviews = 0.0;
    double AllReviews = 0.0;
    bool isTrue = true;

    system("color 2");

        cout << "\n\n\n                                               SOVASTOLINK                        ";
    cout << "\n\n\n\n\n\n\n\n               	Loading ";
    char x=219;

    for(int i=0; i<=60; i++)

    
    //try to find a way to playsound in vs code. 
    //PlaySound(TEXT("sovastolinkopening.wav"),NULL,SND_SYNC);

    {
        Sleep(60);
        cout << x;
    }
    system("CLS");
    

    
    system("Color 2");
    do
    {
       


        
        {
            do
            {
                cout << "***Welcome to Sovastopol***\n"
                 << "1. Logs\n"
                 << "2. Reports\n"
                 << "3. problems\n"
                 << "4. AllReviews\n"
                 << "5. Exit\n";
            cout << "Choose an option:\n";
            cin >> entry;

            //try to get the invalid input feature to work
            //attempt to get this to work will be tried from the 24/7/21-25/7/21 
            /*if (entry = string);
            cout << "Your input is invalid try again";*/

            switch(entry)
            {
                case 1:
                    system ("CLS");
                
                    cout << "______________________________________________________________________" << endl;
                    cout << "| Riply                                              20/4/21         |" << endl;                                                      
                    cout << "|                                                                    |" << endl;
                    cout << "|          Hello this is Riply we are having a lot of proplems       |" << endl;
                    cout << "|      on the ship we need help Taylor is hurt she got hurt          |" << endl;
                    cout << "|      from the space walk from debri. Come to coms and bring        |" << endl;
                    cout << "|      meds we need them ergently.                                   |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|____________________________________________________________________|" << endl;
                    cout << "| Note: SPACE RUNNING LOW PLS UPGRADE TERMINAL FOR MORE SPACE        |" << endl;
                    cout << "|____________________________________________________________________|" << endl;                          
                    cout << "View amount:\n";        
                        cin >> Reviews ;
                        AllReviews = AllReviews + Reviews;
                        system ("CLS");
                    
                     break;
                case 2:
                    system ("CLS");
                    cout << "______________________________________________________________________" << endl;
                    cout << "| Riply                                          25/4/21             |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|         This is Riply reporting now and there is something         |" << endl;
                    cout << "|      in this ship it's like an alien it dangerous and              |" << endl;
                    cout << "|      eats humans we need to get off this ship ergently.            |" << endl;
                    cout << "|      contact the other ships to help us get off this ship.         |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|____________________________________________________________________|" << endl;
                    cout << "|____________________________________________________________________|" << endl;
                    cout << "| Note: ALL VENTS OPENED                                             |" << endl;
                    cout << "|____________________________________________________________________|" << endl;
                    cout << " View amount:\n";
                    cin >> Reviews ;
                    AllReviews = AllReviews + Reviews;
                    system ("CLS");
                    
                    
                    break;
                case 3:
                    system ("ClS");
                    cout << "______________________________________________________________________" << endl;
                    cout << "| Riply                                          30/4/21             |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|      We are low on food and water we need suplies pls help any     |" << endl;
                    cout << "|   ship that is range to connect with us pls send us food and water.|" << endl;
                    cout << "|   We are also running low on medical suplies.                      |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|                                                                    |" << endl;
                    cout << "|____________________________________________________________________|" << endl;
                    cout << "|____________________________________________________________________|" << endl;
                    cout << "|Note: ERROR ALL DOORS LOCKED                                        |" << endl;
                    cout << "|____________________________________________________________________|" << endl;
                    cout << "View amount:\n";
                    
                    cin >> Reviews ;
                    AllReviews = AllReviews + Reviews;
                    system ("CLS");

                    break;
                case 4:
                    system ("CLS");
                    cout << "Current Views: " << AllReviews << endl; 
                    if (AllReviews = 0)
                    cout << "0";
                    break;
                case 5:
                    system ("CLS");
                    cout << "Thank you for using the Sovastolink have a nice day!\n";
                    isTrue = false;
                    break;
            }
            }while(isTrue != false);
            
        }
        
            
    }while(isTrue != false);

    return 0;

}
    //loading bar code by TECH SCREENER
    //Original code written by codefoxx
    //Edited by Demetris Michael
    //Final code written by Demetris Michael