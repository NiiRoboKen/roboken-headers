#ifndef ROBOKEN_HEADERS_OMNI_NAVICATION_H
#define ROBOKEN_HEADERS_OMNI_NAVICATION_H

class OmniNav {
 public:
  OmniNav(int radius);
  void getPositionX();
  void getPositionY();

 private:
  int radius;
};

#endif