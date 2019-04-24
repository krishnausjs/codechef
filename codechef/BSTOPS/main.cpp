#include <iostream>

using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;
};

class BST_Op {
private:
    node bNode;
public:
    void insert(int x) {
    }
    void remve(int x) {
    
    }
};
int main(int argc, char **argv)
{
	int T;
    BST_Op bst;
    int op;
    int x;
    
    cin >> T;
    
    while(T--)
    {
        cin >> op;
        cin >> x;
        if(x == i)
        {
            bst.insert(x);
        }
        else
        {
            bst.remve(x);
        }
    }
	return 0;
}
