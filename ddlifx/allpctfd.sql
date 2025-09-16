create table allpctaf
(
  alpcurno    char(8) default ' ' not null,
  alpctype    char(2) default ' ' not null,
  alpccode    char(10) default ' ' not null,
  alpcsite    char(6) default ' ' not null,
  alpcadfl    char(1) default ' ' not null,
  alpccdat    char(8) default ' ' not null,
  alpcctim    char(8) default ' ' not null,
  alpccuid    char(10) default ' ' not null,
  alpcspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index allpcta1 on allpctaf
(
alpcurno,
alpctype,
alpccode,
alpcsite
);
revoke all on allpctaf from public ; 
grant select on allpctaf to public ; 
