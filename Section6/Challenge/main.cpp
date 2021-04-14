#include <iostream>

using namespace std;

int main() {
    
    cout << "Hello, welcome to Andrew's Carpet Cleaning Service" << endl;
    cout << "\nHow many small rooms would you like cleaned? ";
    
    int num_small_rooms {0};
    cin >> num_small_rooms;
        
    cout << "How many large rooms would you like cleaned? ";
    
    int num_large_rooms {0};
    cin >> num_large_rooms;
    
    const double price_per_small {25};
    const double price_per_large {35};
    const double percent_tax {0.06};
    const int expir_date {30};
    
    double pretax_total {num_large_rooms * price_per_large + num_small_rooms * price_per_small};
    double tax {pretax_total * percent_tax};
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << num_small_rooms << endl;
    cout << "Number of large rooms: " << num_large_rooms << endl;
    cout << "Price per small room: $" << price_per_small << endl;
    cout << "Price per large room: $" << price_per_large << endl;
    cout << "Cost: $" << pretax_total << endl;
    cout << "Tax: $" << tax << endl;
    cout << "==========================" << endl;
    cout << "Total estimate: $" << pretax_total + tax << endl;
    cout << "This estimate is valid for " << expir_date << " days" << endl;
    
    return 0;
}