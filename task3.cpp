#include <iostream>
using namespace std;
main()
{
float initial_velocity;
float final_velocity;
float time;
float acceleration;
cout << " Enter Initial Velocity: ";
cin >> initial_velocity;
cout << " Enter Acceleration: ";
cin >> acceleration;
cout << " Enter Time: ";
cin >> time ;
final_velocity= acceleration*time + initial_velocity;
cout << " Enter Final Velocity= " << final_velocity;
} 