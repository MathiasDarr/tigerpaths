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

  inline void vertex_udf(const VERTEX v){
    
  }

  inline void incrementSumAccum(SumAccum<int>& number){
    number +=4;
  }

  inline int getVertexValue(SetAccum<VERTEX>& vertexSet) {
    int count = 0;

    return count;
  }


}


#endif /* EXPRFUNCTIONS_HPP_ */