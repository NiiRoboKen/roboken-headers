#ifndef ROBOKEN_HEADERS_OMNI_NAVICATION_H
#define ROBOKEN_HEADERS_OMNI_NAVICATION_H

class OmniNav {
 public:
  OmniNav(double radius, double circumference);
  void setRevolution(
      double v1, double v2,
      double v3);  // v1をX軸に水平,v2,v3をccwの順番のモータの回転数とする。
  double getDeltaX();
  double getDeltaY();
  double getDeltaRad();

 private:
  double radius;  // ロボット中心からのオムニホイールまでの距離
  double circumference;  // オムニホイールの円周の長さ

  double revolution1 = 0.0;
  double revolution2 = 0.0;
  double revolution3 = 0.0;

  double deltaX = 0.0;    // xの移動距離
  double deltaY = 0.0;    // yの移動距離
  double deltaRad = 0.0;  // 回転角度 [rad]
};

#endif