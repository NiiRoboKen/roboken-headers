#include "omni_nav.h"

#include <math.h>
OmniNav::OmniNav(double radius) { this->radius = radius; }

void OmniNav::setRevolution(double v1, double v2, double v3) {
  this->revolution1 = v1;
  this->revolution2 = v2;
  this->revolution3 = v3;
}
double OmniNav::getPositionX() {
  return (1 / 3 * ((2 * revolution1) - revolution2 - revolution3));
}
double OmniNav::getPositionY() {
  return ((sqrt(3) / 3) * (revolution2 - revolution3));
}
