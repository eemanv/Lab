#include <iostream>
using namespace std;
main()
{
float pounds;
float cost;
float area;
float area_in_sq_feet;
float cost_of_fertilizer;
cout << " Enter Bag size in Pounds: ";
cin >> pounds ;
cout << " Enter cost of the bag: ";
cin >> cost;
area_in_sq_feet= cost/area;
cout << "Enter area in sq.feet :" ;
cin >> area_in_sq_feet ;
cost_of_fertilizer=cost/pounds;
cout << "Cost of the fertilizer per pound: " << cost_of_fertilizer << endl;
area= cost/ area_in_sq_feet;
cout << " Cost of fertilizing the area per sq feet: " <<area;
}
 