//
// Created by pmaxwell on 8/13/2022.
//

#ifndef GIGAFRAME_GIGAFRAME_H
#define GIGAFRAME_GIGAFRAME_H

#include "giga_series.h"

class GigaFrame {
public:
    virtual unsigned long get_rows() = 0;
    virtual unsigned long get_cols() = 0;
    virtual unsigned long long get_bytes() = 0;
};

class StaticGigaFrame : public GigaFrame {
private:
    GigaSeries* giga_series_array;
    unsigned long long bytes_size;
    unsigned long num_cols;
    unsigned long num_cols;
public:
    StaticGigaFrame(GigaSeries* giga_series_array, unsigned long num_cols, unsigned long num_rows);
};

#endif //GIGAFRAME_GIGAFRAME_H
