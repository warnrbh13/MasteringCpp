#include <iostream>
#include <complex>

struct My_Var{
    int a;
    std::string str;
};

std::ostream &operator<<(std::ostream& stream, My_Var& var){
    stream << "Int value: " << var.a << std::endl << "String value: " << var.str << std::endl;
    return stream;
}

inline void Log(My_Var var){
    std::cout<< "[My_Var] Log is: " << std::endl << var << std::endl;
}
inline void Log(std::string str){
    std::cout<< "[String] Log is: "<< str << std::endl;
}

template <class T>
void swap(T& a, T& b){
    T tmp = a;
    a = b;
    b = tmp;
}

void swapMyVar(My_Var& a, My_Var& b){
    My_Var tmp = a;
    a = b;
    b = tmp;
}

int main(){
    My_Var v1 = {10, "Hello"}; 
    My_Var v2 = {100, "Goodbye"};
    Log("Swap without Template");
    Log(v1);
    Log(v2);
    swapMyVar(v1, v2);
    Log(v1);
    Log(v2);
    Log("Now swap using Template");
    Log(v1);
    Log(v2);
    swap(v1, v2);
    Log(v1);
    Log(v2);

    return 0;
}







class point{
    public:
        double getx(){ return x;}
        void setx (double v) {x = v;}

        
        //Two ways of initialize a constructor
        point(){ x=y=0.0;};
        //Or
        point(){this->x + 0.0; this->y = 0.0;};


    private:
        double x, y;
};