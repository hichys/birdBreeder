//
// Created by awad on 10/05/18.
//

#ifndef BIRDBREEDER_TYPE_H
#define BIRDBREEDER_TYPE_H

namespace ba {

    enum class type {
        male,female,unknown
    };
    const static ba::type female          = ba::type ::female;
    const static ba::type male            = ba::type ::male;
    const static ba::type unknownType     = ba::type ::unknown;

}
#endif //BIRDBREEDER_TYPE_H
