//
//  ExprNode.cpp
//

#include <cmath>
#include "ExprNode.h"

// No ExprNode will have more than this number of children
const int MAX = 3;

//////////////////////////////////////////////////////////////
// Methods for ExprNode (superclass)
//////////////////////////////////////////////////////////////

ExprNode::ExprNode()
{
    // TODO: initialize fields
}

ExprNode::~ExprNode()
{
    // TODO: clean up dynamically allocated memory (including all child nodes)
}


// TODO: implement method(s), e.g., to add a child node, to get a child node, etc.


//////////////////////////////////////////////////////////////
// Methods for XNode
//////////////////////////////////////////////////////////////

XNode::XNode()
{
}

XNode::~XNode()
{
}


double XNode::evaluate(double x, double y) const
{
    return x;
}

std::string XNode::exprAsString() const
{
    return "x";
}

// TODO: methods for other ExprNode subclasses
//////////////////////////////////////////////////////////////
// Methods for YNode
//////////////////////////////////////////////////////////////

YNode::YNode()
{
}

YNode::~YNode()
{
}


double YNode::evaluate(double x, double y) const
{
    return y;
}

std::string YNode::exprAsString() const
{
    return "y";
}
//////////////////////////////////////////////////////////////
// Methods for CosNode
//////////////////////////////////////////////////////////////

CosNode::CosNode()
{
}

CosNode::~CosNode()
{
}


double CosNode::evaluate(double x, double y) const
{
    return cos(2);
}

std::string CosNode::exprAsString() const
{
    return "cos(";
}
//////////////////////////////////////////////////////////////
// Methods for SinNode
//////////////////////////////////////////////////////////////

SinNode::SinNode()
{
}

SinNode::~SinNode()
{
}


double SinNode::evaluate(double x, double y) const
{
    return sin(2);
}

std::string SinNode::exprAsString() const
{
    return "sin(";
}
//////////////////////////////////////////////////////////////
// Methods for AvgNode
//////////////////////////////////////////////////////////////

AvgNode::AvgNode()
{
}

AvgNode::~AvgNode()
{
}


double AvgNode::evaluate(double x, double y) const
{
    return (x*y)/2;
}

std::string AvgNode::exprAsString() const
{
    return "avg(";
}