#ifndef JOURNAL_H
#define JOURNAL_H

#include <QDialog>

namespace Ui {
class Journal;
}

class Journal : public QDialog
{
    Q_OBJECT

public:
    explicit Journal(QWidget *parent = 0);
    ~Journal();

private:
    Ui::Journal *ui;
};

#endif // JOURNAL_H
