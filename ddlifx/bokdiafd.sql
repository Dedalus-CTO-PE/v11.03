create table bokdiaaf
(
  dbkdiboo    char(8) default ' ' not null,
  bkdicode    char(9) default ' ' not null,
  bkdides1    char(80) default ' ' not null,
  bkdides2    char(80) default ' ' not null,
  bkdicomm    char(80) default ' ' not null,
  bkdiuniq    char(10) default ' ' not null,
  bkdides3    char(80) default ' ' not null,
  bkdides4    char(80) default ' ' not null,
  bkdides5    char(80) default ' ' not null,
  bkdides6    char(80) default ' ' not null,
  bkdispar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index bokdiaa1 on bokdiaaf
(
dbkdiboo,
bkdiuniq
);
revoke all on bokdiaaf from public ; 
grant select on bokdiaaf to public ; 
