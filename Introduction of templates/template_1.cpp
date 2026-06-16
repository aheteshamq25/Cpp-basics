#include <iostream>

using namespace std;

template <class T>

class Vector
{
    
    public:
    T *arr;
    int size;
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(Vector &v)
    {
        T d = 0;
        for(int i =0; i<size; i++){
            d += this->arr[i] * v.arr[i];
        }
        cout<<d;
        return d;
    }
};

int main()
{
    Vector <float>v1(3);
    v1.arr[0] = 4.4;
    v1.arr[1] = 1.4;
    v1.arr[2] = 3.4;
    Vector<float> v2(3);
    v2.arr[0] = 2.4;
    v2.arr[1] = 0.4;
    v2.arr[2] = 5.4;

    v1.dotProduct(v2);

    return 0;
}