#include "../include/place.hpp"

bool place::set_location(const double X, const double Y)
{
    this->location.first = X;
    this->location.second = Y;

    if (this->location.first == X && this->location.second == Y)
        return true;
    else
        return false;
}
bool place::add_nearLocations (const double X, const double Y, const unsigned int weight)
{
    struct locations temp;

    temp.location.first = X;
    temp.location.second = Y;
    temp.weight = weight;

    this->nearLocations.push_back (temp);

    temp.distance = this->calculate_distance (this->location.first, this->location.second, temp.location.first, temp.location.second);

    if (this->nearLocations.at (this->nearLocations.size ()).location.first == X)
        if (this->nearLocations.at (this->nearLocations.size ()).location.second == Y)
            if (this->nearLocations.at (this->nearLocations.size ()).weight == weight)
                return true;

    return false;
}

double place::calculate_distance (const double first_X, const double first_Y, const double second_X, const double second_Y)
{
    double tempX = first_X - second_X;
    double tempY = first_Y - second_Y;

    tempX = pow (tempX, 2);
    tempY = pow (tempY, 2);

    return sqrt (tempX + tempY);
}