create table accdiaaf
(
  acdiaccn    char(20) default ' ' not null,
  dacdicnt    char(3) default ' ' not null,
  acdicsyc    char(3) default ' ' not null,
  acdidiag    char(10) default ' ' not null,
  acdiside    char(1) default ' ' not null,
  acdispar    char(25) default ' ' not null,
  lf          char(1)
);
create unique index accdiaa1 on accdiaaf
(
acdiaccn,
dacdicnt
);
revoke all on accdiaaf from public ; 
grant select on accdiaaf to public ; 
