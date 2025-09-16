create table oprabiaf
(
  opaiuniq    char(10) default ' ' not null,
  opaiantb    char(3) default ' ' not null,
  opaicntr    char(2) default ' ' not null,
  opaipant    char(3) default ' ' not null,
  opaitgiv    char(8) default ' ' not null,
  opaitunk    char(3) default ' ' not null,
  opaiacnt    char(3) default ' ' not null,
  opaicomm    char(200) default ' ' not null,
  opaicdat    char(8) default ' ' not null,
  opaictim    char(8) default ' ' not null,
  opaicuid    char(10) default ' ' not null,
  opaiudat    char(8) default ' ' not null,
  opaiutim    char(8) default ' ' not null,
  opaiuuid    char(8) default ' ' not null,
  opaidelt    char(1) default ' ' not null,
  opaiudel    char(10) default ' ' not null,
  opaispar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index oprabia1 on oprabiaf
(
opaiuniq,
opaiantb,
opaicntr
);
create unique index oprabia2 on oprabiaf
(
opaiuniq,
opaicdat,
opaictim,
opaiantb,
opaicntr
);
revoke all on oprabiaf from public ; 
grant select on oprabiaf to public ; 
