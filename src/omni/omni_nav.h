#ifndef ROBOKEN_HEADERS_OMNI_NAVICATION_H
#define ROBOKEN_HEADERS_OMNI_NAVICATION_H

class OmniNav {
 public:
  OmniNav(double radius);
  void setRevolution(
      double v1, double v2,
      double v3);  // v1をX軸に水平,v2,v3をccwの順番のモータの回転数とする。
  double getPositionX();
  double getPositionY();

 private:
  double radius;  // モータの半径
  double revolution1;
  double revolution2;
  double revolution3;
};

#endif