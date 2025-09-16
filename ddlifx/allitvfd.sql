create table allitvaf
(
  alivvisn    char(8) default ' ' not null,
  alivenct    char(8) default ' ' not null,
  alivicnt    char(8) default ' ' not null,
  alivcode    char(9) default ' ' not null,
  alivdura    char(5) default ' ' not null,
  alivcdat    char(8) default ' ' not null,
  alivctim    char(8) default ' ' not null,
  alivcuid    char(10) default ' ' not null,
  alivudat    char(8) default ' ' not null,
  alivutim    char(8) default ' ' not null,
  alivuuid    char(10) default ' ' not null,
  alivspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allitva1 on allitvaf
(
alivvisn,
alivenct,
alivicnt
);
revoke all on allitvaf from public ; 
grant select on allitvaf to public ; 
