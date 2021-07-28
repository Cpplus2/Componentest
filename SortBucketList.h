#ifndef SORTBUCKETLIST_H
#define SORTBUCKETLIST_H

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

class SortBucketList
{
    public:
        int * arr;
        int sz;

    private:
        SortBucketList();
        SortBucketList(int *, int);
        ~SortBucketList();
        void setSize(int);
        void setArr(int *);
        int * getArray();
        int getSize();
        void RadixSort();
        void CountSort(int);
};

#endif // SORTBUCKETLIST_H
