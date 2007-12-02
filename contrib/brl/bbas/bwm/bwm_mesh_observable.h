#ifndef bwm_mesh_observable_h_
#define bwm_mesh_observable_h_
//:
// \file

#include "bwm_observable.h"

#include <dbmsh3d/dbmsh3d_mesh_mc.h>

class bwm_mesh_observable : public bwm_observable
{
 public:

  vcl_string type_name() {return "bwm_mesh_observable"; }

  //: constructors
  bwm_mesh_observable() {}

  bwm_mesh_observable(dbmsh3d_mesh_mc* object)
    : object_(object) {}

  bwm_mesh_observable(vsol_polygon_3d_sptr poly);

  bwm_mesh_observable(vsol_polygon_3d_sptr poly, double dist);

  virtual ~bwm_mesh_observable();

 private:
  dbmsh3d_mesh_mc* object_;
};

#endif
