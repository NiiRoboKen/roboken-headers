#include "omni_nav.h"

#include <math.h>

OmniNav::OmniNav(double radius, double circumference) {
  this->radius = radius;
  this->circumference = circumference;
}

void OmniNav::setRevolution(double v1, double v2, double v3) {
  this->revolution1 = v1;
  this->revolution2 = v2;
  this->revolution3 = v3;
}
double OmniNav::getPositionX() {
  return (circumference *
          (1 / 3 * ((2 * revolution1) - revolution2 - revolution3)));
}
double OmniNav::getPositionY() {
  return (circumference * ((sqrt(3) / 3) * (revolution2 - revolution3)));
}
