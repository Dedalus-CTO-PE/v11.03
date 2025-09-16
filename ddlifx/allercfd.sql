create table allercaf
(
  alerphot    char(8) default ' ' not null,
  alerlasr    char(1) default ' ' not null,
  alerposs    char(1) default ' ' not null,
  alercar     char(1) default ' ' not null,
  alercarh    char(1) default ' ' not null,
  alernvie    decimal(3,0) default 0 not null,
  alerntra    decimal(3,0) default 0 not null,
  alernneg    decimal(3,0) default 0 not null,
  alernbwp    decimal(3,0) default 0 not null,
  alernclp    decimal(3,0) default 0 not null,
  alernvid    decimal(3,0) default 0 not null,
  alervisn    char(8) default ' ' not null,
  alerenct    char(8) default ' ' not null,
  alercdat    char(8) default ' ' not null,
  alerctim    char(8) default ' ' not null,
  alercuid    char(10) default ' ' not null,
  alerudat    char(8) default ' ' not null,
  alerutim    char(8) default ' ' not null,
  aleruuid    char(10) default ' ' not null,
  alerdsnt    char(8) default ' ' not null,
  alerstff    char(20) default ' ' not null,
  alerndig    decimal(3,0) default 0 not null,
  alerspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index allerca1 on allercaf
(
alerphot
);
create unique index allerca2 on allercaf
(
alervisn,
alerenct,
alerphot
);
revoke all on allercaf from public ; 
grant select on allercaf to public ; 
