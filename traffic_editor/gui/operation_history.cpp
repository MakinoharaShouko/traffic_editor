#include "operation_history.h"

OperationHistory::OperationHistory(Operation type, int level) {
    _type = type;
    _level = level;
}

// Get method of the base history class
// By default returns empty objects
Fiducial OperationHistory::getFiducial() {
    Fiducial dummy;
    return dummy;
}

Vertex OperationHistory::getVertex() {
    Vertex dummy;
    return dummy;
}

// Vertex related methods
void VertexHistory::setVertex(Vertex v) {
    _v = v;
}

Vertex VertexHistory::getVertex() {
    return _v;
}