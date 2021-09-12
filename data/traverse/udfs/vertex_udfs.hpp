#ifndef EXPRFUNCTIONS_HPP_
#define EXPRFUNCTIONS_HPP_

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <gle/engine/cpplib/headers.hpp>
#include <iostream>
#include <fstream>
#include <sstream>
#include <random> // include statement for rng()
#include <boost/regex.hpp>
#include <vector>
#include <map>


#include "ExprUtil.hpp"

namespace UDIMPL {
  typedef std::string string; 

  inline int vertex_const_udf(const VERTEX v){
    VertexAttribute attr;

  }

  inline int vertex_ref_udf(VERTEX& v){
    return 1;
  }

  inline void incrementSetAccum(SetAccum<int64_t>& setAccum){
    setAccum += 2;
  }

  inline void getNeighbors(SetAccum<EDGE>& edgeSet, SetAccum<VERTEX>& res) {
    for (auto it = edgeSet.data_.begin(); it != edgeSet.data_.end(); ++it) {
      res += it->srcVid;
      res += it->tgtVid;
    }
  }





}


#endif /* EXPRFUNCTIONS_HPP_ */