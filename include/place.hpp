#ifndef _place
#define _place

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct locations
{
    pair<double, double> location;
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
};

#endif