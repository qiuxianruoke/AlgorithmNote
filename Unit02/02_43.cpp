#include <cstdio>

struct Node {
    int id;
    Node* left;
    Node* right;
    Node(int _id, Node* _left, Node* _right) :id(_id), left(_left), right(_right) {}
};

int main() {
    int id1, id2, id3;
    scanf("%d%d%d", &id1, &id2, &id3);
    Node node1 = Node(id1, nullptr, nullptr);
    Node node2 = Node(id2, nullptr, nullptr);
    Node node3 = Node(id3, &node1, &node2);
    printf("%d %d", node3.left->id, node3.right->id);
    return 0;
}