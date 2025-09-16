create table emrrslaf
(
  emrsresp    char(3) default ' ' not null,
  emrssdat    char(8) default ' ' not null,
  emrstype    char(2) default ' ' not null,
  emrsself    char(10) default ' ' not null,
  emrsselt    char(10) default ' ' not null,
  emrsstat    char(1) default ' ' not null,
  emrscuid    char(10) default ' ' not null,
  emrscdat    char(8) default ' ' not null,
  emrsctim    char(8) default ' ' not null,
  emrsuuid    char(10) default ' ' not null,
  emrsudat    char(8) default ' ' not null,
  emrsutim    char(8) default ' ' not null,
  emrsspar    char(60) default ' ' not null,
  lf          char(1)
);
create unique index emrrsla1 on emrrslaf
(
emrsresp,
emrssdat,
emrstype,
emrsself,
emrsselt
);
revoke all on emrrslaf from public ; 
grant select on emrrslaf to public ; 
