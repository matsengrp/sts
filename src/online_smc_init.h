/// \file smc_init.h
/// \brief Smc_init class
/// \author metatangle, inc.

#ifndef STS_MOVES_ONLINE_SMC_INIT_H
#define STS_MOVES_ONLINE_SMC_INIT_H

#include "smctc.hh"
#include <vector>

namespace sts {
class Tree_particle;
}

namespace sts { namespace moves {

/// Particle initializer.

/// Uses as log_likelihood the \\perp ll.
class Online_smc_init
{
public:
    Online_smc_init(const std::vector<sts::Tree_particle>& particles) :
        particles(particles),
        it(particles.begin()) {};

    smc::particle<Tree_particle> operator()(smc::rng*);
private:
    const std::vector<sts::Tree_particle> particles;
    std::vector<sts::Tree_particle>::const_iterator it;
};

} // namespace moves
} // namespace sts
#endif // STS_MOVES_ONLINE_SMC_INIT