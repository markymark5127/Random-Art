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


// TODO: implement method(s), e.g., to add a child node, to get a child node, etc

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
    return cos(M_PI * center->evaluate(x,y));
}

std::string CosNode::exprAsString() const
{
    return "cos(pi*" + center->exprAsString() + ")";
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
    return sin(M_PI* center->evaluate(x,y));
}

std::string SinNode::exprAsString() const
{
    return "sin(pi*" + center->exprAsString() + ")";
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
    double eval;
    if(right != NULL)
    {
        eval =(center->evaluate(x,y)*left->evaluate(x,y) * right->evaluate(x,y))/3;
    }
    else
    {
        eval = (center->evaluate(x,y)*left->evaluate(x,y))/2;
    }
    return eval;
}

std::string AvgNode::exprAsString() const
{
    std::string eval;
    if(right != NULL)
    {
        eval ="avg(" + center->exprAsString() + "," + right->exprAsString()+ "," + left->exprAsString() + ")";
    }
    else
    {
        eval = "avg(" +center->exprAsString() + "," + right->exprAsString() + ")";
    }
    return eval;
}