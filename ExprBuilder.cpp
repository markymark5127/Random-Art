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
    ExprNode *root;
    int random = rand() % 5 +1;
    switch(random){
        case 1:
            root = new XNode();
            break;
        case 2:
            root = new YNode();
            break;
        case 3:
            root = new CosNode();
            break;
        case 4:
            root = new SinNode();
            break;
        case 5:
            root = new AvgNode();
            break;
    }
    int countr=0;
    ExprNode *curr = root;
    while(countr <= MAX_LEVEL || random !=1 || random !=2)
    {
        countr++;
        if(random == 5)
        {
            ExprBuilder builder;
            int r = rand() % 2 + 1;
            if( r== 2)
            {
                curr->right = builder.build();
            }
            curr->left = builder.build();
        }
        random = rand() % 5 + 1;
        switch(random){
            case 1:
                curr->center = new XNode();
                break;
            case 2:
                curr->center = new YNode();
                break;
            case 3:
                curr->center = new CosNode();
                break;
            case 4:
                curr->center = new SinNode();
                break;
            case 5:
                curr->center = new AvgNode();
                break;
        }
        curr = curr->center;
    }
    // TODO: return a random expression tree instead of this XNode
    return root;
}
