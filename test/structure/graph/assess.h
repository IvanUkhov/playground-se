#ifndef STRUCTURE_GRAPH_ASSESS_H_
#define STRUCTURE_GRAPH_ASSESS_H_

#include "gtest/gtest.h"

namespace structure { namespace graph { namespace assess {

template <typename T>
T Create() {
  T graph;
  auto node0 = graph.AddNode(0);
  auto node1 = graph.AddNode(1);
  auto node2 = graph.AddNode(2);
  auto node3 = graph.AddNode(3);
  auto node4 = graph.AddNode(4);
  auto node5 = graph.AddNode(5);
  graph.AddEdge(node0, node1, 0);
  graph.AddEdge(node0, node2, 0);
  graph.AddEdge(node0, node5, 0);
  graph.AddEdge(node1, node2, 0);
  graph.AddEdge(node1, node3, 0);
  graph.AddEdge(node2, node3, 0);
  graph.AddEdge(node2, node5, 0);
  graph.AddEdge(node3, node4, 0);
  graph.AddEdge(node4, node5, 0);
  return graph;
}

template <typename T>
void Manipulate() {
  T graph = Create<T>();
  auto node0 = graph.FindNode(0);
  auto node5 = graph.FindNode(5);
  ASSERT_TRUE(graph.Connected(node0, node5));
  graph.RemoveEdge(node0, node5);
  ASSERT_FALSE(graph.Connected(node0, node5));
  graph.RemoveNode(node0);
  ASSERT_EQ(graph.FindNode(0), nullptr);
}

template <typename T, typename N = int>
void Traverse() {
  T graph = Create<T>();
  std::vector<N> data;
  for (auto& node : *graph.FindNode(0)) data.push_back(node.Value());
  ASSERT_EQ(data, std::vector<N>({0, 1, 2, 3, 4, 5}));
}

} } } // namespace structure::graph::assess

#endif // STRUCTURE_GRAPH_ASSESS_H_
