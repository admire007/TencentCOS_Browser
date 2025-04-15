--
-- SQLiteStudio v3.4.4 ���ɵ��ļ������� 11�� 6 09:12:06 2024
--
-- ���õ��ı����룺System
--
PRAGMA foreign_keys = off;
BEGIN TRANSACTION;

-- ����login_info

CREATE TABLE IF NOT EXISTS login_info (
    id         INTEGER    NOT NULL,
    name       TEXT (100) NOT NULL,
    secret_id  TEXT (100) NOT NULL,
    secret_key TEXT (100) NOT NULL,
    remark     TEXT (200),
    timestamp  INTEGER    NOT NULL,
    PRIMARY KEY (
        id
    ),
    CONSTRAINT secret_id UNIQUE (
        secret_id ASC
    ),
    CONSTRAINT name UNIQUE (
        name ASC
    )
);


COMMIT TRANSACTION;
PRAGMA foreign_keys = on;
