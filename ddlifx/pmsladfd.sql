create table pmsladaf
(
  pmlavisn    char(8) default ' ' not null,
  pmlaadat    char(8) default ' ' not null,
  pmlaatim    char(8) default ' ' not null,
  pmlafone    char(1) default ' ' not null,
  pmlashop    char(1) default ' ' not null,
  pmlafdpr    char(1) default ' ' not null,
  pmlahkep    char(1) default ' ' not null,
  pmlalaun    char(1) default ' ' not null,
  pmlamtrn    char(1) default ' ' not null,
  pmlarmed    char(1) default ' ' not null,
  pmlafinc    char(1) default ' ' not null,
  pmlacdat    char(8) default ' ' not null,
  pmlactim    char(8) default ' ' not null,
  pmlacuid    char(10) default ' ' not null,
  pmlaudat    char(8) default ' ' not null,
  pmlautim    char(8) default ' ' not null,
  pmlauuid    char(10) default ' ' not null,
  pmlaspar    char(80) default ' ' not null,
  lf          char(1)
);
create unique index pmslada1 on pmsladaf
(
pmlavisn,
pmlaadat,
pmlaatim
);
revoke all on pmsladaf from public ; 
grant select on pmsladaf to public ; 
