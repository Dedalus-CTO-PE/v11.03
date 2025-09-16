create table fmsnreaf
(
  fmnecode    char(3) default ' ' not null,
  fmnetcod    char(12) default ' ' not null,
  fmnetlev    char(3) default ' ' not null,
  fmnedesc    char(40) default ' ' not null,
  fmneprtc    char(3) default ' ' not null,
  fmnespar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsnrea1 on fmsnreaf
(
fmnecode,
fmnetcod
);
create unique index fmsnrea2 on fmsnreaf
(
fmnecode,
fmnetlev,
fmnetcod
);
revoke all on fmsnreaf from public ; 
grant select on fmsnreaf to public ; 
