#include <iostream>
using namespace std;
class Shape
{
protected:
    float final;

public:
    Shape()
    {
        final = 3.14;
    }
    virtual void Volume() = 0;
};
class Cone : public Shape
{
private:
    float cradius, slantheight, cvolume;

public:
    void getdimension_cone()
    {
        cout << "Enter the radius of cone: " << endl;
        cin >> cradius;
        cout << "Enter the slant height of cone: " << endl;
        cin >> slantheight;
    }
    void Volume()
    {
        cvolume = (final * (cradius * cradius) * slantheight) / 3;
        cout << "The volume of CONE is: " << cvolume << endl
             << endl;
    }
};
class Sphere : public Shape
{
private:
    float sradius, svolume;

public:
    void getdimension_sphere()
    {
        cout << "Enter the radius of sphere: " << endl;
        cin >> sradius;
    }
    void Volume()
    {
        svolume = 4 * (final * (sradius * sradius * sradius)) / 3;
        cout << "The volume of SPHERE is: " << svolume << endl
             << endl;
    }
};
int main()
{
    Cone C;
    C.getdimension_cone();
    C.Volume();
    Sphere S;
    S.getdimension_sphere();
    S.Volume();
}