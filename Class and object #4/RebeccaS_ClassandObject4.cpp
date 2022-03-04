#include <iostream>
#include <list>
#include <cmath>
using namespace std;

class Moon
{
private:
    string name;
    double distance;
    double mass;
    double diameter;

public:
    Moon() {}
    Moon(string mName, double mDistance, double mMass, double mDiameter)
    {
        name = mName;
        distance = mDistance;
        mass = mMass;
        diameter = mDiameter;

    
    }

    string getName()
        {
            return name;
        }
};

class Planet
{
private:
    string name;
    double distance;
    double mass;
    double diameter;
    int numMoons;
    Moon TopMoons[3];

public:
    Planet() {}
    Planet(string pName, double pDistance, double pMass, double pDiameter, int pNumMoons, Moon pTM1, Moon pTM2, Moon pTM3)
    {

        name = pName;
        distance = pDistance;
        mass = pMass;
        diameter = pDiameter;
        numMoons = pNumMoons;
        TopMoons[0] = pTM1;
        TopMoons[1] = pTM2;
        TopMoons[2] = pTM3;
    }
    double getDistance()
    {
        return distance;
    }
    Moon getMoon(int i)
    {
        return TopMoons[i];
    }
    string getName()
    {
        return name;
    }
};

double distanceP(Planet A, Planet B)
{
    return abs(A.getDistance() - B.getDistance());
}
string findMoon(Moon x, Planet arr[8])
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (x.getName() == (arr[i].getMoon(j)).getName())
            return arr[i].getName();
        }
    }
}

int main()
{

    Planet solarSystem[8] = {

        Planet("Mercury", 69.592, 0.33, 4879, 0, Moon("No Moon", 0, 0, 0), Moon("No Moon", 0, 0, 0), Moon("No Moon", 0, 0, 0)),
        Planet("Venus", 4.87, 12104, 108.2, 0, Moon("No Moon", 0, 0, 0), Moon("No Moon", 0, 0, 0), Moon("No Moon", 0, 0, 0)),
        Planet("Earth", 5.97, 12756, 149.6, 1, Moon("Moon", 378000, 0.07346, 3476.2), Moon("No Moon", 0, 0, 0), Moon("No Moon", 0, 0, 0)),
        Planet("Mars", 0.642, 6792, 227.9, 2, Moon("Phobos", 9270, 22.5, 10.6), Moon("Deimos", 23460, 12.4, 2.4), Moon("No Moon", 0, 0, 0)),
        Planet("Jupiter", 1898, 142984, 778.6, 79, Moon("Io", 421600, 3629, 893.2), Moon("Europa", 670900, 3126, 480), Moon("Callisto", 1883000, 4800, 1075.9)),
        Planet("Saturn", 568, 120536, 1433.5, 82, Moon("Titan", 1221850, 5150, 1345.5), Moon("Mimas", 185520, 398, 0.379), Moon("Rhea", 527040, 1528, 23.1)),
        Planet("Uranus", 86.8, 51118, 2872.5, 27, Moon("Umbriel", 265970, 1190, 12.2), Moon("Ariel", 191240, 1160, 12.9), Moon("Miranda", 129780, 472, 0.66)),
        Planet("Neptune", 102, 49528, 4495.1, 14, Moon("Neso", 47279670, 60, 0.002), Moon("Sao", 22337190, 38, 0.001), Moon("Naiad", 48200, 50, 0.002))};
    cout << "Distance is " << distanceP(solarSystem[0], solarSystem[1]) << endl;
    cout << "Find the planet of moon Europa: " << findMoon(Moon("Europa", 670900, 3126, 480), solarSystem);
}