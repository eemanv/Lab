#include <iostream>
using namespace std;
main()
{
string movie_name;
float adult_ticket_price;
float child_ticket_price;
int no_of_adult_ticket;
int no_of_child_ticket;
float amount_generated;
float percentage ;
float donation;
float remaining_amount;
cout << " Enter Movie Name: ";
cin >> movie_name;
cout << " Enter Adult ticket price: ";
cin >> adult_ticket_price;
cout << " Enter Child ticket price: ";
cin >> child_ticket_price;
cout << "Enter Number of Adult Ticket sold: ";
cin >> no_of_adult_ticket;
cout << "Enter Number of Child Ticket sold: ";
cin >> no_of_child_ticket;
cout << "Enter Percentage to Donate: ";
cin >> percentage ;
amount_generated = adult_ticket_price*no_of_adult_ticket + child_ticket_price*no_of_child_ticket;
donation=percentage*amount_generated/100;
remaining_amount= amount_generated-donation;
cout << " Total amount generated: " << amount_generated << endl;
cout  << " Total amount left: " << remaining_amount << endl;
}

