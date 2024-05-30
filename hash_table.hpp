/*
 * bs_tree.hpp
 * Written by : Edward Lewis c3429715
 * Modified : 18/5/24
 *
 * Write something here Edward
 */

template <typename T>
HashTable<T>::HashTable(int table_capacity)
{
    capacity = table_capacity;
    count = 0;
}

template <typename T>
HashTable<T>::~HashTable()
{
    clear();
}

template <typename T>
void HashTable<T>::insert(const T &data)
{
    int location = hash_function(data.get_key());
    table[location] = data;
    count++;
}

template <typename T>
void HashTable<T>::remove(const std::string &key)
{
    int location = hash_function(key);
    T result = table[location];
    table[location] = T();
    count--;
    return result;
}

template <typename T>
T *HashTable<T>::get(const std::string &key)
{
    int location = hash_function(key);
    return &table[location];
}

template <typename T>
bool HashTable<T>::contains(const std::string &key)
{
    for (int i = 0; i < capacity; i++)
    {
        bool cont = list_contains(table[i], key)
        {
            if (cont == true)
            {
                return true;
            }
        }
    }
    return false;
}

template <typename T>
void HashTable<T>::clear()
{
    table.clear();
}

template <typename T>
bool HashTable<T>::empty() const
{
    if (size() == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <typename T>
int HashTable<T>::size() const
{
    return count;
}

template <typename T>
void HashTable<T>::print(std::ostream &os) const
{
    for (int i = 0; i < contains; i++)
    {
        if (table[i] != NULL)
        {
            list_print(os, table[i]);
        }
    }
}
