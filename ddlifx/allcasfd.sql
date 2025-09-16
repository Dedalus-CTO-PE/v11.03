create table allcasaf
(
  alcateam    char(10) default ' ' not null,
  alcadesc    char(40) default ' ' not null,
  alcalpat    char(10) default ' ' not null,
  alcalref    char(10) default ' ' not null,
  alcacdep    char(5) default ' ' not null,
  alcalcod    char(2) default ' ' not null,
  alcaacod    char(12) default ' ' not null,
  alcaactv    char(1) default ' ' not null,
  alcahosp    char(3) default ' ' not null,
  alcacdat    char(8) default ' ' not null,
  alcactim    char(8) default ' ' not null,
  alcacuid    char(10) default ' ' not null,
  alcaudat    char(8) default ' ' not null,
  alcautim    char(8) default ' ' not null,
  alcauuid    char(10) default ' ' not null,
  alcaorid    char(8) default ' ' not null,
  alcaspar    char(42) default ' ' not null,
  lf          char(1)
);
create unique index allcasa1 on allcasaf
(
alcateam
);
create unique index allcasa2 on allcasaf
(
alcadesc,
alcateam
);
revoke all on allcasaf from public ; 
grant select on allcasaf to public ; 
