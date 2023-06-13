#include "DictInfo.h"



DictInfo::DictInfo(const QString &filename)
{
    // 读取字典信息

    _error = false;
    QFile infofile(filename);
    if(!infofile.open(QIODevice::ReadOnly)){
        qInfo() << "不能打开字典信息文件";
        _error = true;
        return;
    }

    QString line;
    while(!infofile.atEnd()){
        line = infofile.readLine();
        qInfo() << line;
    }

    infofile.close();

}

QString DictInfo::version() const
{
    return _version;
}

QString DictInfo::bookname() const
{
    return _bookname;
}

int DictInfo::wordcount() const
{
    return _wordcount;
}

int DictInfo::synwordcount() const
{
    return _synwordcount;
}

int DictInfo::idxfilesize() const
{
    return _idxfilesize;
}

int DictInfo::idxoffsetbits() const
{
    return _idxoffsetbits;
}

QString DictInfo::author() const
{
    return _author;
}

QString DictInfo::email() const
{
    return _email;
}

QString DictInfo::website() const
{
    return _website;
}

QString DictInfo::description() const
{
    return _description;
}

QString DictInfo::date() const
{
    return _date;
}

QString DictInfo::sametypesequence() const
{
    return _sametypesequence;
}

bool DictInfo::error() const
{
    return _error;
}

