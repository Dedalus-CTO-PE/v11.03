create table bokletrf
(
  dbletno     char(3) default ' ' not null,
  dblinno     char(3) default ' ' not null,
  bltext      char(70) default ' ' not null,
  blvar       decimal(1,0) default 0 not null,
  bletpbot    decimal(2,0) default 0 not null,
  bletptop    decimal(2,0) default 0 not null,
  bletppag    decimal(3,0) default 0 not null,
  bletptab    decimal(2,0) default 0 not null,
  bletactv    char(1) default ' ' not null,
  bletcomm    char(1) default ' ' not null,
  bletspar    char(11) default ' ' not null,
  lf          char(1)
);
create unique index bokletr1 on bokletrf
(
dbletno,
dblinno
);
create unique index bokletr2 on bokletrf
(
dblinno,
dbletno
);
revoke all on bokletrf from public ; 
grant select on bokletrf to public ; 
