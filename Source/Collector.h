#pragma once

#include <vector>

template<typename T>
class Collector {
  private:
    std::vector<T> store;
  public:
    Collector() {}
    Collector(const T& obj)
    {
        Add(obj);
    }
    Collector* Add(const T& obj)
    {
        store.push_back(obj);
        return this;
    }
};