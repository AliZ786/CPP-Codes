#include <iostream>
using namespace std;

int main()
{
    int large_rooms {0};
    int small_rooms {0};
    const double price_lr (35);
    const double price_sr {25};
    const double sales_tax {0.06};
    const int estimate_days {30};
    
    
    cout <<"Welcome to Ali's room cleaning service"<<endl;
    cout <<"--------------------------------------"<<endl;
    cout<<"How many large rooms do you want to have cleaned?: ";
    cin >>large_rooms; 
    cout <<"How many small rooms do you want to have cleaned?: ";
    cin >> small_rooms;
    
    double total_price_lr {price_lr* large_rooms};
    double total_price_sr {price_sr* small_rooms};
    double total_room_price {total_price_lr + total_price_sr};
    double price_tax {sales_tax *total_room_price};
    double total_estimate {total_room_price + price_tax};
    
    cout <<"\nEstimate for carpet cleaning service"<<endl;
    cout <<"------------------------------------"<<endl;
    cout << "Number of large rooms: "<< large_rooms <<endl;
    cout << "Number of small rooms: " << small_rooms <<endl;
    cout <<"Price per large room: $" <<price_lr<<endl;
    cout <<"Price per small room: $" <<price_sr<<endl;
    cout <<"Total price for large room(s): $" << total_price_lr <<endl;
    cout <<"Total price per small room(s): $" << total_price_sr <<endl;
    cout <<"Total cost for all the rooms: $" <<total_room_price<<endl;
    cout <<"Cost of the tax: $"<<price_tax<<endl;
    cout <<"===================================="<<endl;
    cout <<"Total estimate: $"<<total_estimate<<endl;
    cout <<"This estimate lasts for " <<estimate_days<<" days"<<endl;
    
    cout <<"\nThank you for using this carpet cleaning service!"<<endl;
    
    
    
    
    
    return 0;
    
}
