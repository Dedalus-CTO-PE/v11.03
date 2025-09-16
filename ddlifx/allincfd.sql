create table allincaf
(
  alindept    char(3) default ' ' not null,
  alincode    char(9) default ' ' not null,
  alindesc    char(50) default ' ' not null,
  alinactv    char(1) default ' ' not null,
  alincdat    char(8) default ' ' not null,
  alinctim    char(8) default ' ' not null,
  alincuid    char(10) default ' ' not null,
  alinudat    char(8) default ' ' not null,
  alinutim    char(8) default ' ' not null,
  alinuuid    char(10) default ' ' not null,
  alinspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allinca1 on allincaf
(
alindept,
alincode
);
create unique index allinca2 on allincaf
(
alindept,
alindesc,
alincode
);
revoke all on allincaf from public ; 
grant select on allincaf to public ; 
