create table apsppdaf
(
  apppter     char(2) default ' ' not null,
  apppdes     char(30) default ' ' not null,
  appptyp     decimal(1,0) default 0 not null,
  apppda1     decimal(4,0) default 0 not null,
  appppe1     decimal(4,2) default 0 not null,
  apppda2     decimal(4,0) default 0 not null,
  appppe2     decimal(4,2) default 0 not null,
  apppda3     decimal(4,0) default 0 not null,
  appppe3     decimal(4,2) default 0 not null,
  appppin     char(1) default ' ' not null,
  apppmdi     char(3) default ' ' not null,
  apppspa     char(16) default ' ' not null,
  lf          char(1)
);
create unique index apsppda1 on apsppdaf
(
apppter
);
revoke all on apsppdaf from public ; 
grant select on apsppdaf to public ; 
