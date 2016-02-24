#ifndef MODELCLASS_H
#define MODELCLASS_H

#include <QObject>
#include <QAbstractListModel>
#include <QStringListModel>

#include <blockchain.h>

//class ModelClass : public QStringListModel
class ModelClass : public QAbstractListModel
{
    Q_OBJECT
protected:
    Blockchain bc{};
    int first;
public:
    ModelClass();
    void init();
    enum ModelRoles {
        BlockNum = Qt::UserRole + 1,
        CreationTime
    };

    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;

    QHash<int, QByteArray> roleNames() const;
};

#endif // MODELCLASS_H
