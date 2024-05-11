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
/*x座標を求める  {(sqrt(2)/3*v1) - (1/3*v2) - (1/3*v3)} */
double OmniNav::getPositionX() {
  return (circumference *
          (1.0 / 3.0 * ((2.0 * revolution1) - revolution2 - revolution3)));
}
/*y座標を求める  {sqrt(3)/3 * (v2-v3)} */
double OmniNav::getPositionY() {
  return (circumference * ((sqrt(3.0) / 3.0) * (revolution2 - revolution3)));
}
/*角度を求める  {1/(3*radius) * (v1+v2+v3)} */
double OmniNav::getRadian() {
  return ((1.0 / (3.0 * radius)) * (revolution1 + revolution2 + revolution3));
}
