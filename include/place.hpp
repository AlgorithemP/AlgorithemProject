#ifndef _place
#define _place

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct locations
{
    pair<double, double> location;
    double distance;
    unsigned int weight;
};

class place
{
    private:

        pair<double, double> location;
        vector<struct locations> nearLocations;

    public:

        bool set_location(const double, const double);
        bool add_nearLocations (const double, const double, const unsigned int);
        double calculate_distance (const double, const double, const double, const double); 

        pair<double, double> get_location () { return location; }
        vector<struct locations> get_nearLocations () { return nearLocations; }
};

#endif