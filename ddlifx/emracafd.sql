create table emracaaf
(
  emaacode    char(30) default ' ' not null,
  emaafdat    char(8) default ' ' not null,
  emaatdat    char(8) default ' ' not null,
  emaaag04    decimal(9,6) default 0 not null,
  emaaag59    decimal(9,6) default 0 not null,
  emaaag14    decimal(9,6) default 0 not null,
  emaaag69    decimal(9,6) default 0 not null,
  emaaag74    decimal(9,6) default 0 not null,
  emaaag79    decimal(9,6) default 0 not null,
  emaaag84    decimal(9,6) default 0 not null,
  emaaag85    decimal(9,6) default 0 not null,
  emaacdat    char(8) default ' ' not null,
  emaactim    char(8) default ' ' not null,
  emaacuid    char(10) default ' ' not null,
  emaaudat    char(8) default ' ' not null,
  emaautim    char(8) default ' ' not null,
  emaauuid    char(10) default ' ' not null,
  emaaaflg    char(1) default ' ' not null,
  emaaspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index emracaa1 on emracaaf
(
emaacode,
emaafdat
);
revoke all on emracaaf from public ; 
grant select on emracaaf to public ; 
