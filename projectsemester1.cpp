#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

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
    cout << "Management System For Resturant !"<< endl;
    cout << endl;
    cout << "Press 1 to Select .... ";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Management System For School !"<< endl;
    cout << endl;
    cout << "Press 2 to Select .... ";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Management System For retail shop !"<< endl;
    cout << endl;
    cout << "Press 3 to Select .... ";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Which Platform do You Want to Access ";
    cout << endl;
    cout << "Please Enter the Command = ";
    cin >> a;


    if (a==1){
        cout << "WELCOME !!!!!";
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "BILLING SYSTEM RESTURANT !!!!";
        double grandTotal = 0.0; // Variable to store the grand total of all bills

    do {
        int numVariables;

        cout << "Enter the number of items (enter 0 to exit): ";
        cin >> numVariables;

        if (numVariables == 0) {
            // Exit the loop if the user enters 0
            break;
        }

        vector<string> names(numVariables);
        vector<int> quantities(numVariables);
        vector<double> prices(numVariables);

        double total = 0.0; // Variable to store the total of the current bill

        for (int i = 0; i < numVariables; ++i) {
            cout << "Enter details for item " << i + 1 << ":" << endl;

            cout << "Name: ";
            cin.ignore();  // Clear the input buffer
            getline(cin, names[i]);

            cout << "Quantity: ";
            cin >> quantities[i];

            cout << "Price: $";
            cin >> prices[i];

            cout << endl;

            // Update the total for the current bill
            total += prices[i] * quantities[i];
        }

        // Accumulate the grand total
        grandTotal += total;

        // Display the entered values for the current bill
        cout << "\n----------------------------------------------";
        cout << "\n| Item   | Name             | Quantity | Price  |";
        cout << "\n----------------------------------------------" << endl;

        for (int i = 0; i < numVariables; ++i) {
            cout << "| Item " << setw(1) << i + 1 << " | " << setw(16) << left << names[i] << " | " << setw(8) << left << quantities[i] << " | $" << setw(6) << fixed << setprecision(2) << prices[i] << " |" << endl;
            cout << "\n----------------------------------------------" << endl;
        }

        // Display the total for the current bill
        cout << "                          Total: $" << setw(18) << fixed << setprecision(2) << total << endl;
        
    } while (true);

    // Display the grand total at the end
    cout << "----------------------- Grand Total: $" << setw(18) << fixed << setprecision(2) << grandTotal << " -----------------------" << endl;

    
}

       if(a==2){

       } 


    }





