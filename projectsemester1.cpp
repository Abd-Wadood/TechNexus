#include <iostream>
#include <iomanip>
#include <vector> // used for dymanic memory to print bill beacause the bill my be long and array do not have that mush of memory to store all of it 
#include <string>
#include <map> //it is used to store the menu and its prices if we use if eles it would take very lang and not efficient way to make 

using namespace std;




int main (){
    int a,b,c;
    cout << endl;
    cout << endl;
    cout << " WELCOME TO CROSS PLATFORM MANAGEMAENT SYSTEM !!!! ";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "============   =========   ==========   ||       ||        || \\      ||   ==========   \\      //  ||        ||  =========\n";
    cout << "     ||        ||          ||           ||       ||        ||  \\     ||   ||            \\    //   ||        ||  ||\n";
    cout << "     ||        ||          ||           ||       ||        ||   \\    ||   ||             \\  //    ||        ||  ||\n";
    cout << "     ||        ||======    ||           ||=======||  ====  ||    \\   ||   ||========      \\//     ||        ||  =========\n";
    cout << "     ||        ||          ||           ||       ||        ||     \\  ||   ||             // \\     ||        ||          ||\n";
    cout << "     ||        ||          ||           ||       ||        ||      \\ ||   ||            //   \\    ||        ||          ||\n";
    cout << "     ||        =========   ==========   ||       ||        ||       \\||   ==========   //     \\     ========    ==========\n";
    cout << endl;
    cout << endl;
    cout << endl;
    cout<< "Enter if You want to access Billing System || Press 1";
    cout << endl;
    cout << endl;
    cout << endl;
    cout<< "abdullah`s logic || Press 2 ";
    cout << endl;
    cout << endl;
    cout << endl;
    cout<< "saddiqui`s logic || Press 3";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Enter Which System You want to Access = ";
    cin>>a;
    if (a==1){
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "WELCOME !!!!!";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "BILLING SYSTEM RESTAURANT !!!";
    cout << endl;

    // Map to store menu items and their prices its syntax is name of the map here its is the menu and with in the type of variable u want to store in this case the string and double is used that is used to store the value of product and its price 
    map<string, double> menu;

    //  the menu 
    menu["tikka pizza"] = 10.99;
    menu["supreme pizza"] = 9.99;
    menu["fajita pizza"] = 8.99;
    menu["burger"] = 5.99;
    menu["pepsi"] = 2.99;
    menu["coke"] = 2.99;
    menu["shawarma"] = 5.99;
    menu["water"] = 1.99;
    menu["doner"] = 4.99;
    menu["tacos"] = 12.99;
    menu["chocolate and brownie"] = 7.99;
    menu["sandwich"] = 3.99;
    menu["grilled chicken"] = 15.99;
    menu["fish"] = 15.99;
    menu["fries"] = 5.99;
    menu["loaded fires"] = 9.99;
    menu["bbq"] = 15.99;
    menu["ice cream"] = 2.99;
    // Add more items to the menu as needed or remove if nessesery 

    double grandTotal = 0.0; // Variable to store the grand total of all bills in the day 

    do {  // we used the do to make interface run until the user enter the 0 and it will exit the loop
        int numVariables;
         cout << endl;
         cout << endl;
         // its takes the number of item and the loop is executer addording tu the value enter by the user

        cout << "Enter the number of items (enter 0 to exit): ";
        cin >> numVariables;

        if (numVariables == 0) {
            // Exit the loop if the user enters 0 
            break;
        }

        vector<string> names(numVariables);// first we write the vector then declear its type in <> here we used the string then the name of the vector that is "names"and then decleared its size that we have taken foem the user  
        vector<int> quantities(numVariables); //same here
        vector<double> prices(numVariables); // same here
        double GST=0.0; // variable for GST 
        double total1=0.0; //variable for total with GST included 

        double total = 0.0; // Variable to store the total of the current bill

        for (int i = 0; i < numVariables; ++i) { // in this loop the the userwill be asked to enter the products and its name according to the number the user has entered above in numVariable 
            cout << "Enter details for item " << i + 1 << ":" << endl;

            cout << "Name: ";
            cin.ignore();  // Clear the input buffer
            getline(cin, names[i]);

            // Check if the entered item is in the menu
            if (menu.find(names[i]) != menu.end()) {
                // If the item is in the menu, use its price
                prices[i] = menu[names[i]]; // Array is used to store multiple value in variable like its price product and their name until the i = numVariable
            } else { // if not found the option is provieded to enter it maually
                cout << "Item not found in the menu. Enter price manually: $";
                cin >> prices[i]; //here it takes the price if the product is not decleared in the menu
            }

            cout << "Quantity: ";
            cin >> quantities[i]; //here is the how many quantity of product are entered 

            // Update the total for the current bill
            total = total + prices[i] * quantities[i]; //the quantities are multiplied by the decleared price and added to gether 
           
        }
         GST=0.18 * total;
            total1=total +GST; // Calculats the GST tax which is 18% and add to the total 

        // Accumulate the grand total
        grandTotal = grandTotal + total1;

        // Display the entered values for the current bill
        cout << "\n----------------------------------------------";
        cout << "\n| Item   | Name             | Quantity | Price  |";
        cout << "\n----------------------------------------------" << endl;

        for (int i = 0; i < numVariables; ++i) {
            cout << "| Item " << setw(1) << i + 1 << " | " << setw(16) << left << names[i] << " | " << setw(8) << left << quantities[i] << " | $" << setw(6) << fixed << setprecision(2) << prices[i] << "|" << endl;
            cout << "\n----------------------------------------------" << endl;
        }

        // Display the total for the current bill
        cout << "                        GST Tax: $" << setw(18) << fixed << setprecision(2) << GST << endl;
        cout << "                          Total: $" << setw(18) << fixed << setprecision(2) << total1 << endl;
        cout << endl;
        cout << endl;

    } while (true);

    cout << endl;
    cout << endl;

    // Display the grand total at the end
    cout << "----------------------- Total Sale Today: $" << setw(18) << fixed << grandTotal << " -----------------------" << endl;

    return 0;
}

if (a==2){







}

if (a==3){












}






}



