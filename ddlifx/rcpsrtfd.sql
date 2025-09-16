create table rcpsrtaf
(
  rcsrrecn    char(12) default ' ' not null,
  rcsrtcnt    char(5) default ' ' not null,
  rcsrtdat    char(8) default ' ' not null,
  rcsrrect    char(1) default ' ' not null,
  rcsrregi    char(3) default ' ' not null,
  rcsrinvn    char(12) default ' ' not null,
  rcsrvist    char(8) default ' ' not null,
  rcsrname    char(50) default ' ' not null,
  rcsradd1    char(35) default ' ' not null,
  rcsradd2    char(35) default ' ' not null,
  rcsradd3    char(35) default ' ' not null,
  rcsradd4    char(35) default ' ' not null,
  rcsrpcod    char(8) default ' ' not null,
  rcsrsflg    char(1) default ' ' not null,
  rcsrrefr    char(17) default ' ' not null,
  rcsramnt    decimal(14,2) default 0 not null,
  rcsraldt    char(8) default ' ' not null,
  rcsrcdat    char(8) default ' ' not null,
  rcsrctim    char(8) default ' ' not null,
  rcsrcuid    char(10) default ' ' not null,
  rcsrudat    char(8) default ' ' not null,
  rcsrutim    char(8) default ' ' not null,
  rcsruuid    char(10) default ' ' not null,
  rcsrspar    char(28) default ' ' not null,
  lf          char(1)
);
create unique index rcpsrta1 on rcpsrtaf
(
rcsrrecn,
rcsrtcnt
);
create unique index rcpsrta2 on rcpsrtaf
(
rcsrtdat,
rcsrrecn,
rcsrtcnt
);
create unique index rcpsrta3 on rcpsrtaf
(
rcsraldt,
rcsrrecn,
rcsrtcnt
);
revoke all on rcpsrtaf from public ; 
grant select on rcpsrtaf to public ; 
