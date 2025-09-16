create table pmswdvaf
(
pmwddate    char(8),
pmwdvalu    decimal(8,0),
pmwdcdte    char(8),
pmwdctim    char(8),
pmwdcusr    char(10),
pmwdudte    char(8),
pmwdutim    char(8),
pmwduusr    char(10),
pmwdspar    char(30),
lf          char(1)
);
create unique index pmswdva1 on pmswdvaf
(
pmwddate
);
revoke all on pmswdvaf from public ; 
grant select on pmswdvaf to public ; 
