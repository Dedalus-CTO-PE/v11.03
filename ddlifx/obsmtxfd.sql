create table obsmtxaf
(
obmturno    char(8),
obmtnote    char(6),
obmtuniq    char(3),
obmtcmnt    char(100),
obmtspar    char(30),
lf          char(1)
);
create unique index obsmtxa1 on obsmtxaf
(
obmturno,
obmtnote,
obmtuniq
);
revoke all on obsmtxaf from public ; 
grant select on obsmtxaf to public ; 
