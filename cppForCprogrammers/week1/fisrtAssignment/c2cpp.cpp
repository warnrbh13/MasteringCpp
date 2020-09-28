#include <iostream>
#include <vector>
#include <string>

const int n = 40;

typedef struct myStruct{
    int x, y, z;
}myStruct_t;

std::ostream &operator<<(std::ostream& stream, myStruct_t& structure){
    stream << structure.x << ", " << structure.y << ", " << structure.z;
    return stream;
}

void sum(int& p, int n, std::vector<int> data){
    for(int i =0; i < n ; ++i){
        p += data[i];
    }
}

int main(){
    int accum = 0;
    myStruct s = {1, 2, 3};
    std::vector<int> data;
    for(int i = 0; i < n ;++i){
        data.push_back(i);
    }
    sum(accum, n, data);
    std::cout << accum << std::endl;
    std::cout << s << std::endl;
    return 0;
}