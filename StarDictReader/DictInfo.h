#ifndef DICTINFO_H
#define DICTINFO_H

#include <QtCore>

class DictInfo
{
public:
    DictInfo(const QString& filename);



    QString version() const;
    QString bookname() const;
    int wordcount() const;
    int synwordcount() const;
    int idxfilesize() const;
    int idxoffsetbits() const;
    QString author() const;
    QString email() const;
    QString website() const;
    QString description() const;
    QString date() const;
    QString sametypesequence() const;
    bool error() const;

protected:
    QString _version;
    QString _bookname;
    int     _wordcount;
    int     _synwordcount;
    int     _idxfilesize;
    int     _idxoffsetbits=32;
    QString _author;
    QString _email;
    QString _website;
    QString _description;
    QString _date;
    QString _sametypesequence;

    bool    _error;
};

#endif // DICTINFO_H
