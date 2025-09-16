create table pmseeraf
(
  pmeruniq    char(20) default ' ' not null,
  pmerdate    char(8) default ' ' not null,
  pmertime    char(8) default ' ' not null,
  pmermess    char(200) default ' ' not null,
  pmerspar    char(200) default ' ' not null,
  lf          char(1)
);
create unique index pmseera1 on pmseeraf
(
pmeruniq
);
revoke all on pmseeraf from public ; 
grant select on pmseeraf to public ; 
