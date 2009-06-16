// This file is part of Hermes2D.
//
// Copyright 2005-2008 Jakub Cerveny <jakub.cerveny@gmail.com>
// Copyright 2005-2008 Lenka Dubcova <dubcova@gmail.com>
// Copyright 2005-2008 Pavel Solin <solin@unr.edu>
//
// Hermes2D is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Hermes2D is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Hermes2D.  If not, see <http://www.gnu.org/licenses/>.

// $Id: shapeset_l2_all.h 1086 2009-06-16 09:05:44Z lenka $

#ifndef __HERMES2D_SHAPESET_L2_ALL
#define __HERMES2D_SHAPESET_L2_ALL

// This file is a common header for all L2 shapesets.

#include "shapeset.h"


/// L2 shapeset - products of legendre polynomials
class L2ShapesetLegendre : public Shapeset
{
  public: L2ShapesetLegendre();
  virtual int get_id() const { return 30; }
};


/// This is the default shapeset typedef
typedef L2ShapesetLegendre L2Shapeset;


#endif
