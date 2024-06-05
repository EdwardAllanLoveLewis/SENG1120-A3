/*
 * bs_tree.hpp
 * Written by : Edward Lewis c3429715
 * Modified : 18/5/24
 *
 * Write something here Edward
 */

template <typename T>
BSTree<T>::BSTree()
{
    root = nullptr;
    count = 0;
}

template <typename T>
BSTree<T>::~BSTree()
{
    this->clear();
    root = nullptr;
    count = 0;
}

template <typename T>
void BSTree<T>::insert(const T &data)
{
    root = insert(data, root);
}

template <typename T>
BTNode<T> *BSTree<T>::insert(const T &data, BTNode<T> *node)
{
    if (!node)
    {
        count++;
        return new BTNode<T>(data);
    }
    else if (data < node->get_data())
        node->set_left(insert(data, node->get_left()));
    else if (data > node->get_data())
        node->set_right(insert(data, node->get_right()));
    else
        node->set_data(data);

    return node;
} // Helper Method

template <typename T>
void BSTree<T>::remove(const std::string &key)
{
    return remove(key, root);
}

template <typename T>
BTNode<T> *BSTree<T>::remove(const std::string &key, BTNode<T> *node)
{
    if (node->get_left() == nullptr && node->get_right() == nullptr)
    {
        if (node->get_data() == key)
        {
            node->delete node;
            // Set parent pointers to nullptr
        }
        if (node->get_left == key &&)
    }
    else if

} // Helper Method

template <typename T>
bool BSTree<T>::contains(const std::string &key) const
{
    return contains(key, root);
}

template <typename T>
bool BSTree<T>::contains(const std::string &key, BTNode<T> *node) const
{
    if (!node)
        return false;
    if (node->get_data().get_key() == key)
        return true;
    if (key < node->get_data().get_key())
        return contains(key, node->get_left());
    if (key > node->get_data().get_key())
        return contains(key, node->get_right());
} // Helper Method

template <typename T>
void BSTree<T>::clear()
{
    return clear(root);
}

template <typename T>
void BSTree<T>::clear(BTNode<T> *node)
{
    if (!node)
    {
    }
} // Helper method

template <typename T>
T *BSTree<T>::find(const std::string &key) const
{
    return find(key, root);
}

template <typename T>
BTNode<T> *BSTree<T>::find(const std::string &key, BTNode<T> *node) const
{
    if (!node)
        return nullptr;
    if (node->get_data().get_key() == key)
        return node->get_data();
    if (key < node->get_data().get_key())
        return find(key, node->get_left());
    if (key > node->get_data().get_key())
        return find(key, node->get_right());
} // Helper Method

template <typename T>
T &BSTree<T>::find_min() const
{
    if (empty() || !root)
        throw empty_collection_exception();

    return find_min(root)->get_data();
}

template <typename T>
BTNode<T> *BSTree<T>::find_min(BTNode<T> *node) const
{
    if (!node->get_left())
        return node;

    return find_min(node->get_left());
} // Helper Method

template <typename T>
T &BSTree<T>::find_max() const
{
    if (empty() || !root)
        throw empty_collection_exception();

    return find_max(root)->get_data();
}

template <typename T>
BTNode<T> *BSTree<T>::find_max(BTNode<T> *node) const
{
    if (!node->get_right())
        return node;

    return find_max(node->get_right());
} // Helper Method

template <typename T>
bool BSTree<T>::empty() const
{
    if (count == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <typename T>
int BSTree<T>::size() const
{
    return count;
}

template <typename T>
void BSTree<T>::print_inorder(std::ostream &out) const
{
    print_inorder(out, root);
}

template <typename T>
void BSTree<T>::print_inorder(std::ostream &out, BTNode<T> *node) const
{
    if (node)
    {
        print_inorder(out, node->get_left());
        out << node->get_data() << " ";
        print_inorder(out, node->get_right());
    }
} // Helper Method

template <typename T>
void BSTree<T>::print_preorder(std::ostream &out) const
{
    print_preorder(out, root);
}

template <typename T>
void BSTree<T>::print_preorder(std::ostream &out, BTNode<T> *node) const
{
    if (node)
    {
        out << node->get_data() << " ";
        print_preorder(out, node->get_left());
        print_preorder(out, node->get_right());
    }
} // Helper Method

template <typename T>
void BSTree<T>::print_postorder(std::ostream &out) const
{
    print_postorder(out, root);
}

template <typename T>
void BSTree<T>::print_postorder(std::ostream &out, BTNode<T> *node) const
{
    if (node)
    {
        print_postorder(out, node->get_left());
        print_postorder(out, node->get_right());
        out << node->get_data() << " ";
    }
} // Helper Method

template <typename T>
std::ostream &operator<<(std::ostream &out, const BSTree<T> &tree)
{
    if (tree.empty())
    {
        out << "Empty tree" << std::endl;
    }
    else
    {
        tree.print_inorder(out);
    }
    return out;
}
