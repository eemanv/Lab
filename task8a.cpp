#include <iostream>
using namespace std;
main () 
{

float vegetable_price; 
float vegetable_in_kilo; 
float fruit_price; 
float fruit_in_kilo;
float total;
cout << "Vegetable price per kilogram: ";
cin >> vegetable_price;
cout << "Fruit price per kilogram: ";
cin >> fruit_price;
cout << "Total kilograms of vegetables: ";
cin >> vegetable_in_kilo;
cout << "Total kilograms of fruits: ";
cin >> fruit_in_kilo;
total = vegetable_price*vegetable_in_kilo + fruit_price*fruit_in_kilo;
total = total*1.94;
cout << "Your earnings in rupees: " << total;
}