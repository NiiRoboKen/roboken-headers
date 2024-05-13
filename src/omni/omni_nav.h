#ifndef ROBOKEN_HEADERS_OMNI_NAVICATION_H
#define ROBOKEN_HEADERS_OMNI_NAVICATION_H

class OmniNav {
 public:
  OmniNav(double radius, double circumference);
  void setRevolution(
      double v1, double v2,
      double v3);  // v1をX軸に水平，下向き,v2,v3をccwの順番のモータの回転数

  double getDeltaX();    // xの移動距離を取得
  double getDeltaY();    // Yの移動距離を取得
  double getDeltaRad();  // 回転角度を取得

  double getPositionX();  // xの絶対座標を取得
  double getPositionY();  // yの絶対座標を取得
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