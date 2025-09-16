create table vismtxaf
(
vsmtvisn    char(8),
vsmttype    char(3),
vsmtnote    char(6),
vsmtuniq    char(3),
vsmtcmnt    char(100),
vsmtspar    char(30),
lf          char(1)
);
create unique index vismtxa1 on vismtxaf
(
vsmtvisn,
vsmttype,
vsmtnote,
vsmtuniq
);
revoke all on vismtxaf from public ; 
grant select on vismtxaf to public ; 
