#include <iostream>
#include <string>
#include "DIList.h"
using namespace std;

DIList::DIList()
{
    this->list = new int[INITIAL_SIZE];
    this->size = INITIAL_SIZE;
    this->capacity = 0;
}

DIList::~DIList(){};

void DIList::add(int num)
{
    if(capacity < size)
        list[capacity] = num;
    else
    {
        int *templist = new int(size * 2);
        for(int i = 0; i < capacity; i++)
        {   
            templist[i] = list[i];
        }
        this->list = templist; 
        this->size = size*2;
    }
};

int DIList::indexOf(int num)
{
    for(int i = 0; i < capacity; i++)
    {
        if(list[i] == num)
            return i; 
    }
    return -1; 
}

int DIList::remove(int num)
{
    int index = indexOf(num);
    if(index == -1)
        return -1;
    else
    {
        for(int i = index; i < capacity; i++)
        {
            list[i] = list[i+1];
        }
        return index;
    }
}

void DIList::insert(int pos, int value)
{
    if(size == capacity)
    {
        int *templist = new int(size * 2);
        for(int i = 0; i < capacity; i++)
        {   
            templist[i] = list[i];
        }
        delete list;
        this->list = templist; 
        this->size = size*2;
    }
    for(int i = capacity; i >= pos; i--)
    {
        list[i + 1] = list[i];
    }
    list[pos] = value;

}