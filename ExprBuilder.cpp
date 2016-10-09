//
//  ExprBuilder.cpp
//

#include <cstdlib>
#include <cassert>
#include "ExprBuilder.h"
#include "ExprNode.h"

// Each random expression tree can have up to this many levels
const int MAX_LEVEL = 12;

ExprBuilder::ExprBuilder()
{
}

ExprBuilder::~ExprBuilder()
{
}

ExprNode *ExprBuilder::build() const
{
    // Suggestion: call a recursive helper method that takes the
    // maximum number of tree levels as a parameter

    // TODO: return a random expression tree instead of this XNode
    return new XNode();
}
