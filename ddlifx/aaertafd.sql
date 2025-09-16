create table aaertaaf
(
  daertevn    char(8) default ' ' not null,
  aertdate    char(8) default ' ' not null,
  aerttime    char(5) default ' ' not null,
  aertlocn    char(30) default ' ' not null,
  aertadrv    char(30) default ' ' not null,
  aertaad1    char(35) default ' ' not null,
  aertaad2    char(35) default ' ' not null,
  aertaad3    char(35) default ' ' not null,
  aertaad4    char(35) default ' ' not null,
  aertapst    char(8) default ' ' not null,
  aertareg    char(8) default ' ' not null,
  aertbdrv    char(30) default ' ' not null,
  aertbad1    char(35) default ' ' not null,
  aertbad2    char(35) default ' ' not null,
  aertbad3    char(35) default ' ' not null,
  aertbad4    char(35) default ' ' not null,
  aertbpst    char(8) default ' ' not null,
  aertbreg    char(8) default ' ' not null,
  aertspar    char(26) default ' ' not null,
  lf          char(1)
);
create unique index aaertaa1 on aaertaaf
(
daertevn
);
revoke all on aaertaaf from public ; 
grant select on aaertaaf to public ; 
