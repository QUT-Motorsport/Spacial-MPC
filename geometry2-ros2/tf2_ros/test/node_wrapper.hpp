/*
 * Copyright (c) 2019, Open Source Robotics Foundation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Willow Garage, Inc. nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef NODE_WRAPPER_HPP_
#define NODE_WRAPPER_HPP_

#include <memory>
#include <string>

#include "gtest/gtest.h"
#include "rclcpp/rclcpp.hpp"

class NodeWrapper
{
public:
  explicit NodeWrapper(const std::string & name)
  : node(std::make_shared<rclcpp::Node>(name))
  {}

  rclcpp::node_interfaces::NodeBaseInterface::SharedPtr
  get_node_base_interface() {return this->node->get_node_base_interface();}

  rclcpp::node_interfaces::NodeTopicsInterface::SharedPtr
  get_node_topics_interface() {return this->node->get_node_topics_interface();}

  rclcpp::node_interfaces::NodeLoggingInterface::SharedPtr
  get_node_logging_interface() {return this->node->get_node_logging_interface();}

  rclcpp::node_interfaces::NodeParametersInterface::SharedPtr
  get_node_parameters_interface() {return this->node->get_node_parameters_interface();}

private:
  rclcpp::Node::SharedPtr node;
};

#endif  // NODE_WRAPPER_HPP_
