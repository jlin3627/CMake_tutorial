
class Node
{
    public:
        Node();
        Node(const Node& oldNode);
        virtual ~Node();
        bool    hasNext();
        Node*   getNext();
        int     getValue();
        void    setNext(Node* nextNode);
        void    setValue(int val);

    private:
        int value;
        Node* next;
};

