create table allbilaf
(
  albidept    char(3) default ' ' not null,
  albicomp    char(3) default ' ' not null,
  albiserv    char(6) default ' ' not null,
  albitime    char(4) default ' ' not null,
  albiitem    char(9) default ' ' not null,
  albicdat    char(8) default ' ' not null,
  albictim    char(8) default ' ' not null,
  albicuit    char(10) default ' ' not null,
  albiudat    char(8) default ' ' not null,
  albiutim    char(8) default ' ' not null,
  albiuuid    char(10) default ' ' not null,
  albispar    char(40) default ' ' not null,
  lf          char(1)
);
create unique index allbila1 on allbilaf
(
albidept,
albicomp,
albiserv,
albitime
);
revoke all on allbilaf from public ; 
grant select on allbilaf to public ; 
