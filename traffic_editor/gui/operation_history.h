#ifndef OPERATION_HISTORY_H
#define OPERATION_HISTORY_H

#include <vector>

#include "traffic_editor/vertex.h"
#include "traffic_editor/fiducial.h"

enum Operation {
    ADD_VERTEX,
    ADD_LANE,
    ADD_POLYGON,
    ADD_FIDUCIAL,
};

class OperationHistory {
public:
    Operation _type;
    int _level;

    OperationHistory(Operation type, int level)

    // Set method of the base history class
    // By default does nothing
    virtual void setVertex(Vertex v) {};

    virtual Fiducial getFiducial();
    virtual Vertex getVertex();
};

class VertexHistory extends OperationHistory {
public:
    Vertex _v;
}

#endif