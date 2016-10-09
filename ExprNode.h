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
    ExprNode *left = NULL;
    ExprNode *right = NULL;
    ExprNode *center = NULL;
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
// y coordinate value.
class YNode : public ExprNode {
private:
    // copy constructor and assignment operator are forbidden
    YNode(const YNode &);
    YNode& operator=(const YNode &);

public:
    YNode();
    virtual ~YNode();

    virtual double evaluate(double x, double y) const;
    virtual std::string exprAsString() const;
};
//cos value.
class CosNode : public ExprNode {
private:
    // copy constructor and assignment operator are forbidden
    CosNode(const CosNode &);
    CosNode& operator=(const CosNode &);

public:
    CosNode();
    virtual ~CosNode();

    virtual double evaluate(double x, double y) const;
    virtual std::string exprAsString() const;
};
// sin value.
class SinNode : public ExprNode {
private:
    // copy constructor and assignment operator are forbidden
    SinNode(const SinNode &);
    SinNode& operator=(const SinNode &);

public:
    SinNode();
    virtual ~SinNode();

    virtual double evaluate(double x, double y) const;
    virtual std::string exprAsString() const;
};
// average of values.
class AvgNode : public ExprNode {
private:
    // copy constructor and assignment operator are forbidden
    AvgNode(const AvgNode &);
    AvgNode& operator=(const AvgNode &);

public:
    AvgNode();
    virtual ~AvgNode();

    virtual double evaluate(double x, double y) const;
    virtual std::string exprAsString() const;
};

#endif
