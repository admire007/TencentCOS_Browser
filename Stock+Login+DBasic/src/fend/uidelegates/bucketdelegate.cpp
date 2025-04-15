#include "bucketdelegate.h"

BucketDelegate::BucketDelegate(QObject*parent):
    QStyledItemDelegate(parent)
{}

QWidget *BucketDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    if(index.column()==1)
    {
        QComboBox* box=new QComboBox(parent);
        box->addItem("ap-guangzhou");
        box->addItem("ap-shanghai");
        box->addItem("ap-beijing");
        box->setFrame(false);
        return box;
    }else
    {
        return QStyledItemDelegate::createEditor(parent,option,index);
    }

}

void BucketDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    if(index.column()==1)
    {
        QComboBox *box=static_cast<QComboBox* >(editor);
        QString text =index.data(Qt::EditRole).toString();
        box->setCurrentText(text);
    }else
    {
        QStyledItemDelegate::setEditorData(editor,index);
    }

}

void BucketDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    if(index.column()==1)
    {
        QComboBox*box=static_cast<QComboBox*>(editor);
        model->setData(index,box->currentText());
    }else
    {
        QStyledItemDelegate::setModelData(editor,model,index);
    }

}
