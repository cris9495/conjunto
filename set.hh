#include <iostream>
#include "bst.hh"

template <typename T> class Set {
private:
  BST<T> storage;

public:
  Set() : storage() {}
  bool member(T elem) { return storage.search(elem); }
};
