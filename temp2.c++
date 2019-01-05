#include<iostream>

class Vector{
  private:
    int sz;
    double *elem;
  public:
    Vector()
    {
      std::cout<<"default const called\n";
      sz = 0;
      elem = nullptr;
    }
    Vector(int s)
    {
    std::cout<<"one arg const called \n";
      sz = s;
      elem = new double[sz];
      for(auto i =0; i != sz; ++i)
        elem[i] = 0;
    }
    
    Vector(const Vector & v)
    {
      std::cout<<"copy const called\n";
      sz = v.sz;
      elem = new double[sz];
      for (auto i =0 ; i!= sz; ++i)
        elem[i] = v.elem[i];
    }

    //copy assignment
  Vector & operator= (const Vector &v)
    {
      std::cout<<"copy assingment called \n";
      sz = v.sz;
      delete[] elem;
      elem = new double[sz];
      for(auto i=0; i!=sz; ++i)
        elem[i] = v.elem[i];
      return *this;
    }

    //idnex ofperator
    double &  operator[](int index)//v1[20]
    {
    std::cout<<"index opeartor called \n";
      return elem[index];
    }

    ~Vector()
    {
      std::cout<<"destructor called\n";
      delete[] elem;
    }

  };

Vector func(int sz){
  Vector v(sz),  v1;
  for (auto i=0; i!= sz; ++i){
    v[i] = i+1;
  }
//  return v;
  if (sz <4)
    return v;
  else
   return v1;
}

int main()
{
  Vector v1(2);
  v1[0] = 2;
  v1[1] = 3;
  Vector v2 = func(10);
  std::cout<<v2[0]<<" "<<v2[1]<<std::endl;

}
