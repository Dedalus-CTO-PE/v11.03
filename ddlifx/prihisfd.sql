create table prithisf
(
prthdebt    char(8),
dprthscn    char(2),
prthdate    char(8),
prthtime    char(5),
dprthflg    char(2),
prthitem    char(9),
prthsubn    char(3),
prthnumb    decimal(4,0),
prthspar    char(9),
lf          char(1)
);
create unique index prithis1 on prithisf
(
prthdebt,
dprthscn,
prthdate,
prthtime,
dprthflg,
prthitem,
prthsubn
);
revoke all on prithisf from public ; 
grant select on prithisf to public ; 
