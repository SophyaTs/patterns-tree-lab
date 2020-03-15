#pragma once

#include "Tree.h"

/**
* @brief Class for implementing Bplus Tree
*/
template<typename T>
class BplusTree : public Tree<T> {
public:
    BplusTree();
    ~BplusTree();

    void insert(const T& key) override;
    void remove(const T& key) override;
    bool find(const T& key) const override;

    void print() override;

private:
    class BplusNode :public Node {
    public:
        BplusNode(const T& key);
        ~BplusNode();
    private:
        T data;
    };
};

#include "BplusTree.tpp"

