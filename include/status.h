//
// Created by awad on 10/05/18.
//

#ifndef BIRDBREEDER_STATUS_H
#define BIRDBREEDER_STATUS_H

namespace ba {

    enum class BirdCycle {
        chick, moulting , pairing, nestting , layyingEgg , hatching, raisingChicks,  ioslating ,
        sick , healthy,unknown
    };

    constexpr const static BirdCycle chick          = BirdCycle ::chick;
    constexpr const static BirdCycle moulting       = BirdCycle ::moulting;
    constexpr const static BirdCycle pairing        = BirdCycle ::pairing;
    constexpr const static BirdCycle nestting       = BirdCycle ::nestting;
    constexpr const static BirdCycle layyingEgg     = BirdCycle ::layyingEgg;
    constexpr const static BirdCycle hatching       = BirdCycle ::hatching;
    constexpr const static BirdCycle raisingChicks  = BirdCycle ::raisingChicks;
    constexpr const static BirdCycle ioslating      = BirdCycle ::ioslating;
    constexpr const static BirdCycle sick           = BirdCycle ::sick;
    constexpr const static BirdCycle healthy        = BirdCycle ::healthy;
    constexpr const static BirdCycle unknown        = BirdCycle ::unknown;


}


#endif //BIRDBREEDER_STATUS_H
