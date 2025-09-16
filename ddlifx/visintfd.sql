create table visintaf
(
  vsinvisn    char(8) default ' ' not null,
  vsindate    char(8) default ' ' not null,
  vsintime    char(8) default ' ' not null,
  vsintype    decimal(2,0) default 0 not null,
  vsinsubk    char(50) default ' ' not null,
  vsinwuid    char(10) default ' ' not null,
  vsinnotf    char(1) default ' ' not null,
  vsinudc1    char(3) default ' ' not null,
  vsinudc2    char(3) default ' ' not null,
  vsinudc3    char(3) default ' ' not null,
  vsinudc4    char(3) default ' ' not null,
  vsinintp    char(10) default ' ' not null,
  vsinconf    char(1) default ' ' not null,
  vsinchon    char(1) default ' ' not null,
  vsinspar    char(25) default ' ' not null,
  lf          char(1)
);
create unique index visinta1 on visintaf
(
vsinvisn
);
create unique index visinta2 on visintaf
(
vsindate,
vsintime,
vsinvisn
);
revoke all on visintaf from public ; 
grant select on visintaf to public ; 
