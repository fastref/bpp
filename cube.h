#ifndef CUBE_H
#define CUBE_H

#include "object.h"

#include <btBulletDynamicsCommon.h>

class Cube : public Object {

 public:
  Cube(btVector3 dim, btScalar mass = 1.0);
  Cube(btScalar width = 1.0, btScalar height = 1.0, btScalar depth = 1.0,
	   btScalar mass = 1.0);
  
  btScalar         lengths[3];
  
  static void luaBind(lua_State *s);
  QString toString() const;
 protected:
  void init(btScalar width, btScalar height, btScalar depth, btScalar mass);
  void renderInLocalFrame(QTextStream *s) const;
};


#endif // CUBE_H