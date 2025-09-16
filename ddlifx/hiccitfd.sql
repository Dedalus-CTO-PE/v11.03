create table hiccitaf
(
  hcciclmn    char(8) default ' ' not null,
  hccivisn    char(8) default ' ' not null,
  hccitran    char(2) default ' ' not null,
  hccipmci    char(8) default ' ' not null,
  hccipyee    char(10) default ' ' not null,
  hccipsrv    char(10) default ' ' not null,
  hccibtch    char(5) default ' ' not null,
  hcciiflg    char(2) default ' ' not null,
  hcciitmn    char(9) default ' ' not null,
  hccisubn    char(3) default ' ' not null,
  hcciidat    char(8) default ' ' not null,
  hccicamt    decimal(14,2) default 0 not null,
  hccircva    decimal(14,2) default 0 not null,
  hccireja    decimal(14,2) default 0 not null,
  hcciwoff    decimal(14,2) default 0 not null,
  hccitrin    decimal(14,2) default 0 not null,
  hcciadjm    decimal(14,2) default 0 not null,
  hccirejr    char(3) default ' ' not null,
  hccirejd    char(8) default ' ' not null,
  hccirwof    char(3) default ' ' not null,
  hcciwofd    char(8) default ' ' not null,
  hccitrnd    char(8) default ' ' not null,
  hccicdat    char(8) default ' ' not null,
  hccictim    char(8) default ' ' not null,
  hccicuid    char(10) default ' ' not null,
  hcciudat    char(8) default ' ' not null,
  hcciutim    char(8) default ' ' not null,
  hcciuuid    char(10) default ' ' not null,
  hcciides    char(30) default ' ' not null,
  hccirdat    char(8) default ' ' not null,
  hcciadjr    char(3) default ' ' not null,
  hcciadjd    char(8) default ' ' not null,
  hcciipos    char(2) default ' ' not null,
  hccipuse    char(20) default ' ' not null,
  hccispar    char(25) default ' ' not null,
  lf          char(1)
);
create unique index hiccita1 on hiccitaf
(
hcciclmn,
hccivisn,
hccitran
);
create unique index hiccita2 on hiccitaf
(
hccivisn,
hccitran,
hcciclmn
);
revoke all on hiccitaf from public ; 
grant select on hiccitaf to public ; 
