#include <iostream>
#include <vector>

using namespace std;

class HotelRoom {
private:
    int bedrooms_;
    int bathrooms_;

public:
    HotelRoom(int bedrooms, int bathrooms) 
    : bedrooms_(bedrooms), bathrooms_(bathrooms) {cout << "creeated hotel" << endl;}
    
    virtual int get_price() {
        cout << "1" << endl;
        return 50*bedrooms_ + 100*bathrooms_;
    }

};

class HotelApartment : private HotelRoom {
public:
    HotelApartment(int bedrooms, int bathrooms) 
    : HotelRoom(bedrooms, bathrooms) {cout << "creeated aparat" << endl;}

    int get_price() {
        cout << "2" << endl;
        return 12 + 100;
    }
};

int main() {
    int n;
    cin >> n;
    vector<HotelRoom*> rooms;
    for (int i = 0; i < n; ++i) {
        string room_type;
        int bedrooms;
        int bathrooms;
        cin >> room_type >> bedrooms >> bathrooms;
        if (room_type == "standard") {
            rooms.push_back(new HotelRoom(bedrooms, bathrooms));
        } else {
            rooms.push_back(new HotelApartment(bedrooms, bathrooms));
        }
    }

    int total_profit = 0;
    for (auto room : rooms) {
        total_profit += room->get_price();
    }
    cout << total_profit << endl;

    for (auto room : rooms) {
        delete room;
    }
    rooms.clear();

    return 0;
}