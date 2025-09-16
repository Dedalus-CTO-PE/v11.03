create table allsupaf
(
  alspvisn    char(8) default ' ' not null,
  alspenct    char(8) default ' ' not null,
  alspscnt    char(8) default ' ' not null,
  alspscod    char(7) default ' ' not null,
  alspcdat    char(8) default ' ' not null,
  alspctim    char(8) default ' ' not null,
  alspcuid    char(10) default ' ' not null,
  alspudat    char(8) default ' ' not null,
  alsputim    char(8) default ' ' not null,
  alspuuid    char(10) default ' ' not null,
  alspqnty    decimal(3,0) default 0 not null,
  alspprce    decimal(18,6) default 0 not null,
  alspappn    char(20) default ' ' not null,
  alspspar    char(10) default ' ' not null,
  lf          char(1)
);
create unique index allsupa1 on allsupaf
(
alspvisn,
alspenct,
alspscnt
);
revoke all on allsupaf from public ; 
grant select on allsupaf to public ; 
