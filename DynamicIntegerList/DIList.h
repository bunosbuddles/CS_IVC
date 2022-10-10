#ifndef DILIST_H
#define DILIST_H
#include <string>
#include <iostream> 
using namespace std; 

const int INITIAL_SIZE = 10;

class DIList
{
    private:
        int *list;
        int size;
        int capacity; 
    public:
        DIList();
        ~DIList();
        void add(int num);
        int indexOf(int num);
        int remove(int num);
        void insert(int pos, int value);
};
#endif