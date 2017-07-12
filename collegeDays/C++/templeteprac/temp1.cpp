#include <iostream>
using namespace std;

/* template <typename T> class Vcr */  //Also correct

template <class T> class Vcr {         //template syntax

  int lenth;
  T* vr;

  public :
  Vcr(int, const T* const);
  Vcr(int  = 0 , T = 0);
  Vcr(const Vcr&);   //copy constructor
  ~Vcr(){
    delete[] vr;    //destructor
  }

  int size() const {
    return lenth;   //const because function becomes mutator by default
  }

  Vcr& operator=(const Vcr&);
  T& operator[](int i){
    return vr[i];
  }

  Vcr& operator+=(const Vcr&);
  T maxnorm() const;          //mutator to accesor conversion

  template<class S>
  friend s dot(const Vcr<S>&, const Vcr<S>&);
};

template<class T> Vcr<T>::Vcr(int n, const T* const abd){

}
