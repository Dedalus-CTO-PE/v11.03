create table visucmaf
(
  vsucvisn    char(8) default ' ' not null,
  vsucctyp    char(3) default ' ' not null,
  vsucucnt    char(3) default ' ' not null,
  vsuclnum    char(3) default ' ' not null,
  vsucline    char(100) default ' ' not null,
  vsuccdat    char(8) default ' ' not null,
  vsucctim    char(8) default ' ' not null,
  vsuccuid    char(10) default ' ' not null,
  vsucudat    char(8) default ' ' not null,
  vsucutim    char(8) default ' ' not null,
  vsucuuid    char(10) default ' ' not null,
  vsucspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index visucma1 on visucmaf
(
vsucvisn,
vsucctyp,
vsucucnt,
vsuclnum
);
revoke all on visucmaf from public ; 
grant select on visucmaf to public ; 
