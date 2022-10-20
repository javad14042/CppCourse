#include <iostream>
#include "aria100.h"

int main() {
    ariaCar *a = new aria100(10,30);
  // ariaCar *b = new aria200(10,30);

 //aria100 a(10,30);
 a->menu();


 /*
  * issue with raw pointer (*a)
  *     explicit allocate and deallocate memory
  *     uninitialized pointer
  *     memory leak
  *     ...
  *
  * smart pointer
  *     who owns pointer
  *     when delete
  *
  *     -> object -> template class
  *     ptr<int> a;
  *     automatic call delete
  *
  *     unique pointer
  *         unique_ptr<int> a;
  *         auto b = a; //compile error
  *     shared pointer
  *     weak pointer
  *
  *     syntax
  *         #include <memory>
  *         dereference (*) , member selection (->)
  *         ++,-- not define
  *         can custom deleter
  *         smart_pointer<some_class> ptr = ...;
  *         RAII;
  * */



 return 0;
}
