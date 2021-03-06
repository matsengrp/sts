#ifndef STS_ONLINE_MULTIPLIER_SMC_MOVE_H
#define STS_ONLINE_MULTIPLIER_SMC_MOVE_H

#include "smctc.hh"

namespace sts { namespace online {

// Forwards
class CompositeTreeLikelihood;
class TreeParticle;

class MultiplierSMCMove
{
public:
    MultiplierSMCMove(CompositeTreeLikelihood& calculator,
                      const double lambda=1.386);

    void operator()(long, smc::particle<TreeParticle>&, smc::rng*);
private:
    CompositeTreeLikelihood& calculator;
    double lambda;
};

}}

#endif
