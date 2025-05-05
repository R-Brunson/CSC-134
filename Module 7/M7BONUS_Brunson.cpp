#include <iostream>
#include "Graph.h"
// you should replace the above line with 
// #include "StringGraph.h"
// if you wish to use graphs with string data


using namespace std;

int main() {
    // Create a new Graph object
        Graph graph1;
    // Add vertices and edges representing train routes in RDR2
        Vertex* valentine = graph1.AddVertex("Valentine");
        Vertex* emerald = graph1.AddVertex("Emerald Station");
        Vertex* rhodes = graph1.AddVertex("Rhodes");
        Vertex* saintDenis = graph1.AddVertex("Saint Denis");
        Vertex* annesburg = graph1.AddVertex("Annesburg");
        Vertex* riggs = graph1.AddVertex("Riggs Station");
        Vertex* wallace = graph1.AddVertex("Wallace Station");

        graph1.AddUndirectedEdge(valentine, emerald, 10);
        graph1.AddUndirectedEdge(emerald, rhodes, 15);
        graph1.AddUndirectedEdge(rhodes, saintDenis, 20);
        graph1.AddUndirectedEdge(saintDenis, annesburg, 25);
        graph1.AddUndirectedEdge(valentine, riggs, 12);
        graph1.AddUndirectedEdge(riggs, wallace, 18);
        graph1.AddUndirectedEdge(wallace, annesburg, 30);
    
   // Show the graph's vertices and edges
   for (Vertex* vertex : graph1.GetVertices()) {
      cout << "Location: " << vertex->label << endl;
        
      // Show outgoing edges (flights from location)
      cout << "  Rail Transport from " << vertex->label << ":" << endl;
      for (Edge* outgoingEdge : *graph1.GetEdgesFrom(vertex)) {
         cout << "   - " << vertex->label << " to ";
         cout << outgoingEdge->toVertex->label << ", ";
         cout << (int)outgoingEdge->weight << " miles" << endl;
      }
     
      // Show incoming edges (flights to location)
      cout << "  Rail Transport to " << vertex->label << ":" << endl;
      for (Edge* incomingEdge : *graph1.GetEdgesTo(vertex)) {
         cout << "   - " << incomingEdge->fromVertex->label << " to ";
         cout << vertex->label << ", ";
         cout << (int)incomingEdge->weight << " miles" << endl;
      }
   }
    
   return 0;
}