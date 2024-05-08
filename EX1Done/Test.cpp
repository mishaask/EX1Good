//314085986
//mishaaskarov@gmail.com
#include "doctest.h"
#include "Algorithms.hpp"
#include "Graph.hpp"

using namespace std;

TEST_CASE("Test isConnected")
{
    ariel::Graph g;
    vector<vector<int>> graph1 = {
        {0, 1, 0},
        {1, 0, 1},
        {0, 1, 0}};
    g.loadGraph(graph1);
    CHECK(ariel::Algorithms::isConnected(g) == true);

    vector<vector<int>> graph2 = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}};
    g.loadGraph(graph2);
    CHECK(ariel::Algorithms::isConnected(g) == false);

    //additional tests

    vector<vector<int>> graph3 = {
        {0, 1, 0},
        {0, 0, 1},
        {0, 0, 0}};
    g.loadGraph(graph3);
    CHECK(ariel::Algorithms::isConnected(g) == false);

    vector<vector<int>> graph4 = {
        {0, 0, 0},
        {1, 0, 0},
        {0, 1, 0}};
    g.loadGraph(graph4);
    CHECK(ariel::Algorithms::isConnected(g) == false);

    vector<vector<int>> grapha = {
        {0, 1, 0},
        {1, 0, 0},
        {0, 0, 0}};
    g.loadGraph(grapha);
    CHECK(ariel::Algorithms::isConnected(g) == false);

    vector<vector<int>> graph5 = {
        {0, 1, 1},
        {1, 0, 0},
        {1, 0, 0}};
    g.loadGraph(graph5);
    CHECK(ariel::Algorithms::isConnected(g) == true);
   
    vector<vector<int>> graphb = {
        {0, 1, 1},
        {1, 0, 1},
        {1, 1, 0}};
    g.loadGraph(graphb);
    CHECK(ariel::Algorithms::isConnected(g) == true);

    vector<vector<int>> graph6 = {
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1},
        {1, 0, 0, 0}};
    g.loadGraph(graph6);
    CHECK(ariel::Algorithms::isConnected(g) == true);

    vector<vector<int>> graph7 = {
        {0, 1, 0, 1},
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 0, 1, 0}};
    g.loadGraph(graph7);
    CHECK(ariel::Algorithms::isConnected(g) == true);

    vector<vector<int>> graph8 = {
        {0, 1, 1, 1},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {1, 1, 1, 0}};
    g.loadGraph(graph8);
    CHECK(ariel::Algorithms::isConnected(g) == true);

    vector<vector<int>> graph9 = {
        {0, 1, 0, 0},
        {1, 0, 0, 0},
        {0, 0, 0, 1},
        {0, 0, 1, 0}};
    g.loadGraph(graph9);
    CHECK(ariel::Algorithms::isConnected(g) == false);

    vector<vector<int>> graph10 = {
        {0, -1, 0},
        {-1, 0, -1},
        {0, -1, 0}};
    g.loadGraph(graph10);
    CHECK(ariel::Algorithms::isConnected(g) == true);

    vector<vector<int>> graph11 = {
        {0, -1, -1, 0, 0},
        {-1, 0, -1, 0, 0},
        {-1, -1, 0, -1, 0},
        {0, 0, -1, 0, 0},
        {0, 0, 0, 0, 0}};
    g.loadGraph(graph11);
    CHECK(ariel::Algorithms::isConnected(g) == false);
}

TEST_CASE("Test hasNegativeCycle")
{
    ariel::Graph g;

    // Graph with negative cycle
    vector<vector<int>> graph1 = {
        {0, 1, -1, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1},
        {-1, 0, 0, 0}};
    g.loadGraph(graph1);
    CHECK(ariel::Algorithms::hasNegativeCycle(g) == true);

    // Graph without negative cycle
    vector<vector<int>> graph2 = {
        {0, 1, 1},
        {1, 0, 1},
        {1, 1, 0}};
    g.loadGraph(graph2);
    CHECK(ariel::Algorithms::hasNegativeCycle(g) == false);

    // Graph with no edges
    vector<vector<int>> graph3 = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}};
    g.loadGraph(graph3);
    CHECK(ariel::Algorithms::hasNegativeCycle(g) == false);

    // Graph with multiple negative cycles
    vector<vector<int>> graph4 = {
        {0, 1, -1, 0},
        {0, 0, -1, 0},
        {0, 0, 0, -1},
        {-1, 0, 0, 0}};
    g.loadGraph(graph4);
    CHECK(ariel::Algorithms::hasNegativeCycle(g) == true);

    // Graph with positive cycle
    vector<vector<int>> graph5 = {
        {0, 1, 1},
        {1, 0, 1},
        {1, 1, 0}};
    g.loadGraph(graph5);
    CHECK(ariel::Algorithms::hasNegativeCycle(g) == false);

    // Graph with self loops
    vector<vector<int>> graph6 = {
        {-1, 0, 0},
        {0, -1, 0},
        {0, 0, -1}};
    g.loadGraph(graph6);
    CHECK(ariel::Algorithms::hasNegativeCycle(g) == true);
}

TEST_CASE("Test hasNegativeCycle")
{
    ariel::Graph g;

    vector<vector<int>> graph1 = {
        {0, 1, -1, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1},
        {-1, 0, 0, 0}};
    g.loadGraph(graph1);
    CHECK(ariel::Algorithms::hasNegativeCycle(g) == true);

    vector<vector<int>> graph2 = {
        {0, 1, 1},
        {1, 0, 1},
        {1, 1, 0}};
    g.loadGraph(graph2);
    CHECK(ariel::Algorithms::hasNegativeCycle(g) == false);

    vector<vector<int>> graph3 = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}};
    g.loadGraph(graph3);
    CHECK(ariel::Algorithms::hasNegativeCycle(g) == false);

    vector<vector<int>> graph4 = {
        {0, 1, -1, 0},
        {0, 0, -1, 0},
        {0, 0, 0, -1},
        {-1, 0, 0, 0}};
    g.loadGraph(graph4);
    CHECK(ariel::Algorithms::hasNegativeCycle(g) == true);

    vector<vector<int>> graph5 = {
        {0, 1, 1},
        {1, 0, 1},
        {1, 1, 0}};
    g.loadGraph(graph5);
    CHECK(ariel::Algorithms::hasNegativeCycle(g) == false);

}


TEST_CASE("Test shortestPath")
{
    ariel::Graph g;
    vector<vector<int>> graph = {
        {0, 1, 0},
        {1, 0, 1},
        {0, 1, 0}};
    g.loadGraph(graph);
    CHECK(ariel::Algorithms::shortestPath(g, 0, 2) == "0->1->2");
    CHECK(ariel::Algorithms::shortestPath(g, 2, 2) == "Same start and end points");

    vector<vector<int>> graph2 = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}};
    g.loadGraph(graph2);
     CHECK(ariel::Algorithms::shortestPath(g, 0, 4) == "-1");
     CHECK(ariel::Algorithms::shortestPath(g, 1, 3) == "1->2->3");
     CHECK(ariel::Algorithms::shortestPath(g, 2, 4) == "-1");
     CHECK(ariel::Algorithms::shortestPath(g, 0, 3) == "0->2->3");
     CHECK(ariel::Algorithms::shortestPath(g, 2, 0) == "2->0");
     CHECK(ariel::Algorithms::shortestPath(g, 3, 2) == "3->2");
     CHECK(ariel::Algorithms::shortestPath(g, 2, 3) == "2->3");

    vector<vector<int>> graph3 = {
        {0, -1, 0},
        {-1, 0, -1},
        {0, -1, 0}};
    g.loadGraph(graph3);
    CHECK(ariel::Algorithms::shortestPath(g, 0, 2) == "-1");

    vector<vector<int>> graph4 = {
        {0, -1, 7, 0, -3},
        {-1, 0, -1, 0, 0},
        {-8, -1, 0, -1, 2},
        {0, 1, 5, 0, 0},
        {0, 0, 0, 0, 0}};
    g.loadGraph(graph4);
    CHECK(ariel::Algorithms::shortestPath(g, 0, 3) == "-1");
    CHECK(ariel::Algorithms::shortestPath(g, 0, 2) == "-1");

    vector<vector<int>> graphc = {
        {0, -5, -7},
        {-3, 0, -2},
        {-4, -6, 0}};
    g.loadGraph(graphc);
    CHECK(ariel::Algorithms::shortestPath(g, 0, 2) == "-1");

    vector<vector<int>> graphb = {
        {0, 1, 3},
        {1, 0, -1},
        {1, 1, 0}};
    g.loadGraph(graphb);
    CHECK(ariel::Algorithms::shortestPath(g, 0, 2) == "0->1->2");

    vector<vector<int>> graph5 = {{0}};
    g.loadGraph(graph5);
    CHECK(ariel::Algorithms::shortestPath(g, 0, 0) == "Same start and end points");

    vector<vector<int>> graph6 = {
        {0, 1, 0},
        {1, 0, 0},
        {0, 0, 0}};
    g.loadGraph(graph6);
    CHECK(ariel::Algorithms::shortestPath(g, 0, 2) == "-1");

    vector<vector<int>> graph7 = {
        {0, 1, 1},
        {1, 0, 1},
        {1, 1, 0}};
    g.loadGraph(graph7);
    CHECK(ariel::Algorithms::shortestPath(g, 0, 2) == "0->2");

    vector<vector<int>> graph8 = {
        {0, 1, 1},
        {1, 0, 0},
        {1, 0, 0}};
    g.loadGraph(graph8);
    CHECK(ariel::Algorithms::shortestPath(g, 0, 2) == "0->2");
    //CHECK(ariel::Algorithms::shortestPath(g, 2, 0) == "-1");

    vector<vector<int>> graph11 = {
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1},
        {1, 0, 0, 0}};
    g.loadGraph(graph11);
    CHECK(ariel::Algorithms::shortestPath(g, 0, 2) == "0->1->2");

}
TEST_CASE("Test isContainsCycle")
{
    ariel::Graph g;
    vector<vector<int>> graph = {
        {0, 1, 0},
        {1, 0, 1},
        {0, 1, 0}};
    g.loadGraph(graph);
    CHECK(ariel::Algorithms::isContainsCycle(g) == false);

    vector<vector<int>> graph2 = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}};
    g.loadGraph(graph2);
    CHECK(ariel::Algorithms::isContainsCycle(g) == true);

    vector<vector<int>> graph3 = {
        {0, 1, 0},
        {0, 0, 1},
        {0, 0, 0}};
    g.loadGraph(graph3);
    CHECK(ariel::Algorithms::isContainsCycle(g) == false);

    vector<vector<int>> graph4 = {
        {0, 1, 1},
        {1, 0, 0},
        {1, 0, 0}};
    g.loadGraph(graph4);
    CHECK(ariel::Algorithms::isContainsCycle(g) == false);

    vector<vector<int>> graph5 = {
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1},
        {1, 0, 0, 0}};
    g.loadGraph(graph5);
    CHECK(ariel::Algorithms::isContainsCycle(g) == false);

    vector<vector<int>> graph6 = {
        {0, 1, 0, 1},
        {1, 0, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 0, 0}};
    g.loadGraph(graph6);
    CHECK(ariel::Algorithms::isContainsCycle(g) == true);

    vector<vector<int>> graph7 = {
        {0, 1, 1, 1},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {1, 1, 1, 0}};
    g.loadGraph(graph7);
    CHECK(ariel::Algorithms::isContainsCycle(g) == true);

    vector<vector<int>> graph8 = {
        {0, 1, 0, 0},
        {1, 0, 0, 0},
        {0, 0, 0, 1},
        {0, 0, 1, 0}};
    g.loadGraph(graph8);
    CHECK(ariel::Algorithms::isContainsCycle(g) == false);

    vector<vector<int>> graph9 = {
        {0, -1, 0},
        {-1, 0, -1},
        {0, -1, 0}};
    g.loadGraph(graph9);
    CHECK(ariel::Algorithms::isContainsCycle(g) == false);

    vector<vector<int>> graph10 = {
        {0, -1, -1, 0, 0},
        {-1, 0, -1, 0, 0},
        {-1, -1, 0, -1, 0},
        {0, 0, -1, 0, 0},
        {0, 0, 0, 0, 0}};
    g.loadGraph(graph10);
    CHECK(ariel::Algorithms::isContainsCycle(g) == true);
}
TEST_CASE("Test isBipartite")
{
    ariel::Graph g;
    vector<vector<int>> graph = {
        {0, 1, 0},
        {1, 0, 1},
        {0, 1, 0}};
    g.loadGraph(graph);
    CHECK(ariel::Algorithms::isBipartite(g) == "The graph is bipartite: A={0, 2}, B={1}");

    vector<vector<int>> graph2 = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}};
    g.loadGraph(graph2);
    CHECK(ariel::Algorithms::isBipartite(g) == "0");

    vector<vector<int>> graph3 = {
        {0, 1, 2, 0, 0},
        {1, 0, 3, 0, 0},
        {2, 3, 0, 4, 0},
        {0, 0, 4, 0, 5},
        {0, 0, 0, 5, 0}};
    g.loadGraph(graph3);
    CHECK(ariel::Algorithms::isBipartite(g) == "0");

    vector<vector<int>> graph4 = {
        {0, 1, 0, 1},
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 0, 1, 0}};
    g.loadGraph(graph4);
    CHECK(ariel::Algorithms::isBipartite(g) == "The graph is bipartite: A={0, 2}, B={1, 3}");

    vector<vector<int>> graph8 = {
        {0, 1, 1, 1},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {1, 1, 1, 0}};
    g.loadGraph(graph8);
    CHECK(ariel::Algorithms::isBipartite(g) == "0");

    vector<vector<int>> graph9 = {
        {0, 1, 0, 0},
        {1, 0, 0, 0},
        {0, 0, 0, 1},
        {0, 0, 1, 0}};
    g.loadGraph(graph9);
    CHECK(ariel::Algorithms::isBipartite(g) == "The graph is bipartite: A={0, 2}, B={1, 3}");

    vector<vector<int>> graph5 = {
        {0, -1, 0},
        {-1, 0, -1},
        {0, -1, 0}};
    g.loadGraph(graph5);
    CHECK(ariel::Algorithms::isBipartite(g) == "The graph is bipartite: A={0, 2}, B={1}");

    vector<vector<int>> graph6 = {
        {0, -1, -1, 0, 0},
        {-1, 0, -1, 0, 0},
        {-1, -1, 0, -1, 0},
        {0, 0, -1, 0, 0},
        {0, 0, 0, 0, 0}};
    g.loadGraph(graph6);
    CHECK(ariel::Algorithms::isBipartite(g) == "0");
}
TEST_CASE("Test invalid graph")
{
    ariel::Graph g;
    vector<vector<int>> graph = {
        {0, 1, 2, 0},
        {1, 0, 3, 0},
        {2, 3, 0, 4},
        {0, 0, 4, 0},
        {0, 0, 0, 5}};
    CHECK_THROWS(g.loadGraph(graph));
}
