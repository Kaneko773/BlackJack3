#pragma once

#include "Mark.h"
#include "Number.h"
#include "Card.h"

class Status {
public:
    Status();
    Status(const Status& other);
    ~Status();

public:
    Card get_pcard(int Index) const {
        return _pcard[Index];
    }
    int get_outwardlyNum() const {
        return _outwardlyNum;
    }
    void set_outwardlyNum() {
        ++_outwardlyNum;
    }
    int get_score() const {
        return _score;
    }
    void set_score(Number point) {
        point == reset ? _score = 0 : _score += point;
    }

protected:
    Card* _pcard;
    int _outwardlyNum;
    int _score;
};