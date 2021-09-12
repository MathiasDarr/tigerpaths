Hello Tigergraph community. 

I have been attempting to work with UDFs that take as inputs various accumulators, vertices & edges.  I have had trouble 



I have been trying to progressivly increase my knowledge with Tigergraph and GSQL by implemeting sma


### Accessing Vertex Attributes

I have been trying to access vertex & edge attributes from within a UDF.  I have encountered several difficulties with this.
The only example I have been able to find of vertices being passed to a UDF comes from the gsql algorithms github repository.
In this example references to SetAccums of vertices & edges are passed to the UDF.  Where is there more documentaiton regarding these types


  inline void getNeighbors(SetAccum<EDGE>& edgeSet, SetAccum<VERTEX>& res) {
    for (auto it = edgeSet.data_.begin(); it != edgeSet.data_.end(); ++it) {
      res += it->srcVid;
      res += it->tgtVid;
    }
  }


The vertices have an attribute named 'value' which I would like to access from the UDF.  When I try to pass an individual vertex 


CREATE QUERY vertexValueQuery(){
  SetAccum<INT> @@vertexValues;
  source = {node*}
  nodes = SELECT v FROM source ACCUM @@vertexValues += vertex_value_udf(v);
  PRINT @@vertexValues;
}



  inline int vertex_const_udf(const VERTEX v){
    VertexAttribute attr;

  }

  inline int vertex_ref_udf(VERTEX& v){
    return 1;
  }









### SumAccum

UDF 
  inline void incrementSumAccum(SumAccum<int64_t>& number){
    number +=1;
  }




QUERY






in passing argument 1 of ‘int UDIMPL::vertex_value(VERTEX&)