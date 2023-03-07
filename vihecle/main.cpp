// #include "vihecle.hpp"
#include "car.hpp"
#include <vector>

class vehicle_init
{
public:
    vehicle_init() {}
    void init(vehicle *v)
    {
        // std::cout << "1\n";
        vehicles.push_back(v);
    }
    void start()
    {
        vehicle *v1 = new vehicle();
        vehicle *v2 = new car();
        v1->add_info();
        init(v1);
        v2->add_info();
        // v1->print_info();
        // v2->print_info();
        init(v2);

        // vehicle *vehicle_list[2];
        // vehicle_list[0] = v1;
        // vehicle_list[1] = v2;
        // for (int i = 0; i < 2; i++)
        // {
        //     vehicle_list[i]->print_info();
        // }
    }
    void print()
    {
        // for (std::vector<vehicle *>::iterator it = vehicles.begin(); it != vehicles.end(); ++it)
        // {
        //     std::cout << *it << "\n";
        // }
        for (int i = 0; i < vehicles.size(); i++)
        {
            vehicles[i]->print_info();
        }
    }

private:
    std::vector<vehicle *> vehicles;
    vehicle *v[5];
};

int main()
{
    vehicle_init vi;
    vi.start();
    vi.print();

    return 0;
}