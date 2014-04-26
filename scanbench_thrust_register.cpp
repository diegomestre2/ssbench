#include "scanbench_algorithms.h"

template<typename T>
class thrust_scan;

template<typename T>
class thrust_sort;

template<typename A>
struct algorithm_factory;

template<typename T>
struct algorithm_factory<thrust_scan<T> >
{
    scan_algorithm<T> *create(const std::vector<T> &h_a);
};

template<typename T>
struct algorithm_factory<thrust_sort<T> >
{
    sort_algorithm<T> *create(const std::vector<T> &h_a);
};

static register_scan_algorithm<thrust_scan> register_thrust_scan;
static register_sort_algorithm<thrust_sort> register_thrust_sort;