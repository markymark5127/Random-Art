//
//  ExprNode.h
//

#ifndef _EXPRNODE_H_
#define _EXPRNODE_H_

#include <string>

class ExprNode {
private:
    // TODO: add field(s), e.g., to keep track of child nodes

    // copy constructor and assignment are forbidden: do not implement them
    ExprNode(const ExprNode &);
    ExprNode& operator=(const ExprNode &);

public:
    ExprNode();
    virtual ~ExprNode();

    // Evaluate for given x and y values
    virtual double evaluate(double x, double y) const = 0;

    // Generate a textual representation of the function represented
    // by this node and return it as a string.
    virtual std::string exprAsString() const = 0;

    // TODO: add method(s), e.g., to add a child node, to get a child node, etc.
};



// Example ExprNode implementation: XNode, which just returns the
// x coordinate value.
class XNode : public ExprNode {
private:
    // copy constructor and assignment operator are forbidden
    XNode(const XNode &);
    XNode& operator=(const XNode &);

public:
    XNode();
    virtual ~XNode();

    virtual double evaluate(double x, double y) const;
    virtual std::string exprAsString() const;
};



// TODO: add classes for other types of ExprNode

#endif
