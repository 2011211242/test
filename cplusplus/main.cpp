#include <cstdio>
#include <vector>
using namespace std;

class Singleton
{
    public:
        Singleton(){
            printf("Singleton constructor\n");
        }

        ~Singleton(){
            printf("Singleton deconstructor\n");
        }


        static Singleton * instance()
        {
            p = new Singleton; 
            return p;
        }

    private:
        static Singleton *p;
};

Singleton *Singleton::p = NULL;

int main()
{
    vector<Singleton*> pa;

    for(int i = 0; i < 3; i++)
    {
        pa.push_back(Singleton::instance());    
    }

    Singleton ** pp = &pa[0];
    for(int i = 0; i < 3; i++)
        delete pp[i];

    return 0;
}
