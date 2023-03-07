#include "src/adult.hpp"
#include "src/book.hpp"
#include "src/children.hpp"
#include "src/person.hpp"

class user_app
{
public:
    void init(person *a)
    {
        all.push_back(a);
    }

    void start()
    {
        person *t1 = new children();
        person *t2 = new adult();

        t1->add_info();
        t2->add_info();

        init(t1);
        init(t2);
    }
    void displays()
    {
        for (int i = 0; i < all.size(); i++)
        {
            all[i]->display();
        }
    }

private:
    std::vector<person *> all;
};

int main()
{
    user_app app;

    app.start();
    app.displays();

    return 0;
}