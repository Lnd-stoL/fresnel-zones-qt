#ifndef QVECTORMAX_H
#define QVECTORMAX_H

template<typename T>
T maximum(QVector<T> &vec)
{
    T max = vec[0];
    for (typename QVector<T>::iterator elem = vec.begin(); elem < vec.end(); elem++)
    {
        max = qMax (max, *elem);
    }

    return max;
}

#endif // QVECTORMAX_H
