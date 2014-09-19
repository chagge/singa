// Copyright © 2014 Wei Wang. All Rights Reserved.
// 2014-07-15 18:40

#ifndef INCLUDE_MODEL_INNER_PRODUCT_EDGE_H_
#define INCLUDE_MODEL_INNER_PRODUCT_EDGE_H_

#include <google/protobuf/repeated_field.h>
#include <string>
#include <map>
#include "net/edge.h"
#include "net/param.h"
#include "net/lapis.h"

namespace lapis {
class InnerProductEdge : public Edge {
 public:
  /**
   * Identifier of this edge, used to set the type field of EdgeProto
   */
  static const std::string kInnerProductEdge;
  virtual void Init(const EdgeProto &edge_proto,
                    const std::map<std::string, Layer *> &layer_map);
  virtual void ToProto(EdgeProto *edge_proto);

  virtual void Setup(const char flag);
  /**
   * Read src Blob multiply with weight Param, plus bias Param and set the
   * result to the dest Blob
   * @param src feature/output Blob from the start layer of the edge.
   * @param dest activation/input Blob of the end layer of the edge.
   */
  virtual void Forward(const Blob &src_fea, Blob *dest_fea, bool overwrite);
  /**
   * Compute gradient w.r.t weight, bias, and feature of the source layer of
   * this edge.
   * @param src gradient w.r.t the output generated by this edge in ::Forward()
   * @param dest gradient Blob corresponding to the src Blob in ::Forward()
   */
  virtual void Backward(const Blob &src_fea, const Blob &src_grad,
                        const Blob &dest_fea, Blob *dest_grad,
                        bool overwrite);

  virtual void SetupTopBlob(const bool alloc, Blob *blob);
  virtual char PrefixAbbrev() {return 'i';}
 private:
  //! the dimension of the output feature i.e., the feature for the top layer
  int num_output_;
  //! dimension of the input feature
  int num_input_;
  int num_;
  Param weight_, bias_;
  google::protobuf::RepeatedPtrField<ParamProto> param_proto_;
};

}  // namespace lapis

#endif  // INCLUDE_MODEL_INNER_PRODUCT_EDGE_H_
