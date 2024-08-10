// copy_n algorithm example

#include "includes.cpp"
#include "classes.h"



template<typename T>
void ExecuteOutput(unique_ptr<T>ptrs) {
    ptrs->display();
}

int main() {
    while (true) {
        string stringDecision{ "" };
        int decision{ 0 };
        unique_ptr<Amount>ptrs;
        float input{ 0 };

        cout << endl;
        system("cls");
        system("color 0A");
        system("pause");
        cout << "Welcome in Unit converter!!!" << endl << endl;

        cout << "Choose action" << endl;
        cout << "1. Currency" << endl;
        cout << "2. Volume" << endl;
        cout << "3. Length" << endl;
        cout << "4. Weight and mass" << endl;
        cout << "5. Temperature" << endl;
        cout << "6. Exit" << endl << endl;

        cin >> stringDecision;

        if (regex_match(stringDecision, regex("[1-6]"))) {
            decision = stoi(stringDecision);
        }
        else {
            system("color 4");
            cout << "Entered wrong input! Remember to enter only numbers between 106" << endl;
            system("pause");
            system("cls");
            system("color 0A");
            continue;
        }

        if (decision == 1) {

            cout << "Choose your unit:" << endl;
            cout << "1. Euro" << endl;
            cout << "2. PLN" << endl;
            cout << "3. GBP" << endl;
            cout << "4. USD" << endl;
            cout << "5. Exit" << endl;
            cin >> stringDecision;

            if (!regex_match(stringDecision, regex("[1-5]+"))) {
                system("color 4");
                system("pause");
                system("cls");
                cout << "Entered wrong input!!" << endl;
                system("color 0A");
                break;
            }

            decision = stoi(stringDecision);

            if(decision == 5){
                system("cls");
                continue;
			}

            cout << "Enter amount of money you want to calculate into different unit: " << endl;
            cin >> input;
            
            if (input <= 0) {
                system("color 4");
                cout << "Entered wrong input! Remember to enter positive number" << endl;
                system("pause");
                system("cls");
                system("color 0A");
                continue;
            }

            switch(decision){
            case 1:
                ptrs = make_unique<Euro>(input);
                break;
            case 2:
                ptrs = make_unique<PLN>(input);
				break;
            case 3: 
                ptrs = make_unique<GBP>(input);
                break;
            default:
                ptrs = make_unique<USD>(input);
                break;
            }
            
            ExecuteOutput(move(ptrs)); 

        }
        else if (decision == 2) {
            

            cout << "Choose your unit:" << endl;
            cout << "1. Liters" << endl;
            cout << "2. Meters" << endl;
            cout << "3. Inches" << endl;
            cout << "4. Feets" << endl;
            cout << "5. Yards" << endl;
            cout << "6. Exit" << endl << endl;

            cin >> stringDecision;

            if (regex_match(stringDecision, regex("[1-6]"))) {
                decision = stoi(stringDecision);
            }else {
                system("color 4");
                cout << "Entered wrong input! Remember to enter only numbers between 106" << endl;
                system("pause");
                system("cls");
                system("color 0A");
                continue;
            }
            
            if (decision == 6) {
                system("cls");
                continue;
            }
            cout << endl << "Enter volume: ", cin >> input;
            cout << endl;

            if (input <= 0) {
                system("color 4");
                cout << "Entered wrong input! Remember to enter positive number" << endl;
                system("pause");
                system("cls");
                system("color 0A");
                continue;
            }

            switch (decision) {
            case 1:
                ptrs = make_unique<Liters>(input);
                break;
            case 2:
                ptrs = make_unique<Metres3>(input);
                break;
            case 3:
                ptrs = make_unique<Inches3>(input);
                break;
            case 4:
                ptrs = make_unique<Feets3>(input);
                break;
            default:
                ptrs = make_unique<Yards3>(input);
                break;
            }
            ExecuteOutput(move(ptrs));
        }
        else if (decision == 3) {
            //length
            cout << "Choose your unit:" << endl;
            cout << "1. Metres" << endl;
            cout << "2. Inches" << endl;
            cout << "3. Feets" << endl;
            cout << "4. Yards" << endl;
            cout << "5. Miles" << endl;
            cout << "6. Exit" << endl << endl;

            cin >> stringDecision;

            if (regex_match(stringDecision, regex("[1-6]"))) {
                decision = stoi(stringDecision);
            }
            else {
                system("color 4");
                cout << "Entered wrong input! Remember to enter only numbers between 106" << endl;
                system("pause");
                system("cls");
                system("color 0A");
                continue;
            }

            if (decision == 6) {
                system("cls");
                continue;
            }

            cout << endl << "Enter length: ", cin >> input;
            cout << endl;

            if (input <= 0) {
                system("color 4");
                cout << "Entered wrong input! Remember to enter positive number" << endl;
                system("pause");
                system("cls");
                system("color 0A");
                continue;
            }

            switch (decision) {
            case 1:
                ptrs = make_unique<Metres>(input);
                break;
            case 2:
                ptrs = make_unique<Inches>(input);
                break;
            case 3:
                ptrs = make_unique<Feets>(input);
                break;
            case 4:
                ptrs = make_unique<Yards>(input);
                break;
            default:
                ptrs = make_unique<Miles>(input);
                break;
            }
            ExecuteOutput(move(ptrs));

        }
        else if (decision == 4) {
            //mass

            cout << "Choose your unit:" << endl;
            cout << "1. Kilograms" << endl;
            cout << "2. Pounds" << endl;
            cout << "3. Ounces" << endl;
            cout << "4. Exit" << endl;

            cin >> stringDecision;

            if (regex_match(stringDecision, regex("[1-4]"))) {
                decision = stoi(stringDecision);
            }
            else {
                system("color 4");
                cout << "Entered wrong input! Remember to enter only numbers between 106" << endl;
                system("pause");
                system("cls");
                system("color 0A");
                continue;
            }

            if (decision == 4) {
                system("cls");
                continue;
			}

            cout << endl << "Enter mass: ", cin >> input;
            cout << endl;

            if (input <= 0) {
                system("color 4");
                cout << "Entered wrong input! Remember to enter positive number" << endl;
                system("pause");
                system("cls");
                system("color 0A");
                continue;
            }

            switch (decision) {
            case 1:
                ptrs = make_unique<Kilograms>(input);
                break;
            case 2:
                ptrs = make_unique<Pounds>(input);
                break;
            default:
                ptrs = make_unique<Ounces>(input);
                break;
            }
            ExecuteOutput(move(ptrs));
        }
        else if (decision == 5) {
            //temperature

            cout << "Choose your unit:" << endl;
            cout << "1. Celcius" << endl;
            cout << "2. Kelvin" << endl;
            cout << "3. Farenheit" << endl;
            cout << "4. Exit" << endl;

            cin >> stringDecision;

            if (regex_match(stringDecision, regex("[1-4]"))) {
                decision = stoi(stringDecision);
            }
            else {
                system("color 4");
                cout << "Entered wrong input! Remember to enter only numbers between 106" << endl;
                system("pause");
                system("cls");
                system("color 0A");
                continue;
            }

            if(decision == 4){
                system("cls");
                continue;
			}

            cout << endl << "Enter temperature: ", cin >> input;
            cout << endl;

            if (input <= 0) {
                system("color 4");
                cout << "Entered wrong input! Remember to enter positive number" << endl;
                system("pause");
                system("cls");
                system("color 0A");
                continue;
            }

            switch (decision) {
            case 1:
                ptrs = make_unique<Celcius>(input);
                break;
            case 2:
                ptrs = make_unique<Kelvin>(input);
                break;
            default:
                ptrs = make_unique<Farenheit>(input);
                break;
            }
            ExecuteOutput(move(ptrs));
        }
		else if (decision == 6) {
            system("cls");

            cout << "Thank you for using our program!!" << endl;
            cout << "See you next time!" << endl;

			break;
		}
		else {
			cout << "Entered wrong input!!" << endl;
            system("color 0C");
			system("pause");
			system("cls");
            system("color 0A");
            continue;
		}




    };










    return 0;
}