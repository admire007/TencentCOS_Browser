#ifndef CONFIG_H
#define CONFIG_H

#include <QString>
#include <QDir>
#include "src/helper/filehelper.h"

namespace CONF {
namespace PATH {
static const QString WORK = QDir::currentPath();
static const QString TMP = filehelper::joinPath(WORK, "tmp");
};

namespace SQLITE {
static const QString NAME = filehelper::joinPath(PATH::TMP, "cos.db");
};

namespace SQL {
static const QString LOGIN_INFO_TABLE = ":/static/sql/login_info.sql";
};

namespace TABLES {
static const QString LOGIN_INFO = "login_info";
};

static bool init()
{
    return filehelper::mkPath(PATH::TMP);
}
static bool OK = init();
}

#endif // CONFIG_H
