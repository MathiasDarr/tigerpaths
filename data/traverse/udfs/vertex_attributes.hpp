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
    int count = 0;  
    return count;
  }

  inline int vertex_ref_udf(VERTEX& v){
    return 1;
  }

  inline void getVertexesFromEdge(SetAccum<EDGE>& edgeSet, SetAccum<VERTEX>& res) {
    for (auto it = edgeSet.data_.begin(); it != edgeSet.data_.end(); ++it) {
      res += it->srcVid;
      res += it->tgtVid;
    }
  }
  /*

  inline int vertex_const_udf(const VERTEX v){
    int count = 5;  
    VertexAttribute attr;
    return count;
  }

  inline int vertex_ref_udf(VERTEX& v){
    return 1;
  }
  */


  inline void incrementSumAccum(SetAccum<int64_t>& setAccum){
    int64_t a = 1;
    setAccum += a;
  }


  inline void incrementSumAccum(SumAccum<int64_t> sumAccum){
    int64_t a = 1;
    sumAccum += a;
  }

  inline int getVertexValue(SetAccum<VERTEX>& vertexSet) {
    int count = 0;

    return count;
  }


}


#endif /* EXPRFUNCTIONS_HPP_ */