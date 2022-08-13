//
// Created by pmaxwell on 8/13/2022.
//

#ifndef GIGAFRAME_GIGASERIES_H
#define GIGAFRAME_GIGASERIES_H

class GigaSeries {
public:
    virtual unsigned long get_length() = 0;
    virtual unsigned long long get_bytes() = 0;
};

class StaticGigaSeries : public GigaSeries {

};

#endif //GIGAFRAME_GIGASERIES_H
