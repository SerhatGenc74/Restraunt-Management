#ifndef REPOSITORY_H
#define REPOSITORY_H
#include <QVector>

template<typename T>
class Repository
{
public:
    Repository();

    //virtual fonksiyonu default olarak ayarlama sebebimiz
    //bu class kalıtım alıcağı için eğer ki pointer kullandığımız
    //zaman ve değişkeni özgür bıraktıktan sonra kalıtım aldığı classıda
    //özgür bırakması için
    virtual ~Repository() = default;

    virtual bool add(T name) = 0;
    virtual bool update(T name) = 0;
    virtual bool remove(int ID) = 0;
    virtual QVector<T> getAll() = 0;
    virtual T getByID(int ID) = 0;
};

#endif // REPOSITORY_H
