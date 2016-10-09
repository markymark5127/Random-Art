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
