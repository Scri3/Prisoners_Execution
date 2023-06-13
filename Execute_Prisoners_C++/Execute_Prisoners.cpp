#include <iostream>
#include <string>

int main()
{
    using namespace std;

    // Ask the user to enter the number of prisoners:
    cout << "How many prisoners do we have? ";

O:

    string temp_Prisoners;
    cin >> temp_Prisoners;

    // Check if the input is a valid integer
    for (char c : temp_Prisoners) {

        if (!isdigit(c)) {

            cerr << "\n\nPlease enter a valid number: ";
            goto O;
        }
    }

    int numOfPrisoners = stoi(temp_Prisoners);

    if (numOfPrisoners >= 1) {
        // Define a dynamic array to dedicate the numbers to each cell:
        int* Prisoners = new int[numOfPrisoners];

        int g = 0;
        while (g < numOfPrisoners)
        {
            Prisoners[g] = g + 1;
            g++;
        }

        cout << "\n\n";

        // Execution order:
        cout << "Enter an order: ";

    G:

        string temp_Order;
        cin >> temp_Order;

        // Check if the input is a valid integer
        for (char c : temp_Order) {
            if (!isdigit(c)) {
                cerr << "\n\nPlease enter a valid number: ";
                goto G;
            }
        }

        int Order = stoi(temp_Order);

        int v = Order;

        if ((Order <= numOfPrisoners) && (Order > 0)) {

            int Result = numOfPrisoners / Order;

            cout << "\n\nnumber of executions: " << Result << "\n\n";

            cout << "executed prisoners: \n\n";

            int l = 0;

            while (l < Result) {
                cout << "Prisoner number " << Prisoners[v-1] << "\n\n";

                v = v + Order;
                l++;
            }

        }
        else if(Order == 0) {
            cout << "\n\nOrder cannot be 0!!!\n\nEnter a Valid number: ";
            goto G;
        }
        else {
            cout << "\n\nInvalid number!!!\n\nEnter a number less than or equal to the number of prisoners: ";
            goto G;
        }
       
    }
    else {
        cout << "\n\nNumber of prisoners cannot be 0!!!\n\nEnter a Valid number: ";
        goto O;
    }

}
