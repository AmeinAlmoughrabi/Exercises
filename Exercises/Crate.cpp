#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double COST_PER_CUBIC_FOOT = 0.23;

double CHARGE_PER_CUBIC_FOOT = 0.5;

double length;
double width;
double height;
double volume;
double cost;
double charge;
double profit;



int main()
{

cout << "what is the length of the crate?" << endl;
cin >> length;

cout << "what is the width of the crate?" << endl;
cin >> width;

cout << "what is the height of the crate?" << endl;
cin >> height;

volume = length * width * height;
cost = volume * COST_PER_CUBIC_FOOT;
charge = volume * CHARGE_PER_CUBIC_FOOT;
profit = charge - cost;

cout << "the volume is: " << volume << ' ' << ", the cost is: " << cost << ' ' << ", the charge is: " << charge << ' ' << ", the profit is: " << profit << endl;
}