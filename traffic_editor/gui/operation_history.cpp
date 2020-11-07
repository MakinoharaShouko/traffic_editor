#include "operation_history.h"

OperationHistory::OperationHistory(Operation type, int level)
{
    _type = type;
    _level = level;
}

// Vertex related methods
VertexHistory::VertexHistory(Operation type, int level, Vertex v):OperationHistory(type, level)
{
    _v = v;
}

void VertexHistory::setVertex(Vertex v)
{
    _v = v;
}

Vertex VertexHistory::getVertex()
{
    return _v;
}