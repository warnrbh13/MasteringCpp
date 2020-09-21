#include <iostream>

#define LOG(x) std::cout << x << std::endl;
//#define LOG(x) printf("%s\n", x);

struct Human{
    public:
        int age;
        int height;
        char *name;
};

struct Police : public Human{
    public:
        std::string weapo;
};

struct Baker : public Human{
    public:
        std::string bread;
};

int main(){

    Police p1;
    p1.weapo = "Gun";
    LOG(p1.weapo);

    return 0;
}