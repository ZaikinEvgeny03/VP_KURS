// taskdelegate.cpp
#include "taskdelegate.h"
#include <QTextDocument>

TaskDelegate::TaskDelegate(QObject *parent)
    : QItemDelegate(parent)
{
}

QSize TaskDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QString text = index.data(Qt::DisplayRole).toString();

    QTextDocument doc;
    doc.setHtml(text);

    return QSize(doc.size().toSize());
}
