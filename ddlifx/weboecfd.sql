create table weboecaf
(
  wbocvisn    char(8) default ' ' not null,
  wboccntr    char(3) default ' ' not null,
  wbocstat    char(2) default ' ' not null,
  wbocurno    char(8) default ' ' not null,
  wbocarid    char(20) default ' ' not null,
  wboctrid    char(24) default ' ' not null,
  wbocrqdt    char(8) default ' ' not null,
  wbocetyp    char(2) default ' ' not null,
  wbocerrc    char(4) default ' ' not null,
  wbocerrd    char(500) default ' ' not null,
  wboccdte    char(8) default ' ' not null,
  wbocctim    char(8) default ' ' not null,
  wbocudte    char(8) default ' ' not null,
  wbocutim    char(8) default ' ' not null,
  wbochosp    char(3) default ' ' not null,
  wboceleg    char(8) default ' ' not null,
  wbocmsid    char(36) default ' ' not null,
  wbocspar    char(101) default ' ' not null,
  lf          char(1)
);
create unique index weboeca1 on weboecaf
(
wbocvisn,
wboccntr
);
create unique index weboeca2 on weboecaf
(
wbocstat,
wbochosp,
wbocvisn,
wboccntr
);
create unique index weboeca3 on weboecaf
(
wboctrid,
wbocvisn,
wboccntr
);
create unique index weboeca4 on weboecaf
(
wbocmsid,
wbocvisn,
wboccntr
);
create unique index weboeca5 on weboecaf
(
wboceleg,
wbocvisn,
wboccntr
);
create unique index weboeca6 on weboecaf
(
wbochosp,
wbocvisn,
wboccntr
);
revoke all on weboecaf from public ; 
grant select on weboecaf to public ; 
