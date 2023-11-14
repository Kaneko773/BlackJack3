#include "Number.h"
#include "Participant.h"

void Participant::ScoreCalculation()
{
    for (int i = 0; i < _status.get_outwardlyNum(); ++i) {
        if (_status.get_pcard(i).get_Number() == ace) {
            if (_status.get_score() + 11 > 21) {
                _status.set_score(_status.get_pcard(i).get_Number());
            }
            else {
                _status.set_score(jack);
            }
        }
        else if (two <= _status.get_pcard(i).get_Number() && _status.get_pcard(i).get_Number() <= ten) {
            _status.set_score(_status.get_pcard(i).get_Number());
        }
        else if (jack <= _status.get_pcard(i).get_Number() && _status.get_pcard(i).get_Number() <= king) {
            _status.set_score(ten);
        }
    }
}