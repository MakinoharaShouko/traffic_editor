#ifndef OPERATION_HISTORY_H
#define OPERATION_HISTORY_H

#include <vector>

#include "traffic_editor/vertex.h"
#include "traffic_editor/fiducial.h"

enum Operation {
    ADD_VERTEX = 1,
};

class OperationHistory {
public:
    Operation _type;
    int _level;

    OperationHistory(Operation type, int level);

    // By default does nothing
    virtual void setVertex(Vertex v) {};
    virtual Fiducial getFiducial() {};
    virtual Vertex getVertex() {};
};

class VertexHistory : public OperationHistory {
public:
    Vertex _v;

    VertexHistory(Operation type, int level, Vertex v);

    virtual void setVertex(Vertex v);
    virtual Vertex getVertex();
};

#endif