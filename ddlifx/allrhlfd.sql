create table allrhlaf
(
  alrhvisn    char(8) default ' ' not null,
  alrhtype    char(2) default ' ' not null,
  alrhuniq    char(3) default ' ' not null,
  alrhcode    char(9) default ' ' not null,
  alrhdate    char(8) default ' ' not null,
  alrhcdat    char(8) default ' ' not null,
  alrhctim    char(8) default ' ' not null,
  alrhcuid    char(10) default ' ' not null,
  alrhcod2    char(9) default ' ' not null,
  alrhspar    char(41) default ' ' not null,
  lf          char(1)
);
create unique index allrhla1 on allrhlaf
(
alrhvisn,
alrhtype,
alrhuniq
);
create unique index allrhla2 on allrhlaf
(
alrhcode,
alrhvisn,
alrhtype,
alrhuniq
);
revoke all on allrhlaf from public ; 
grant select on allrhlaf to public ; 
