create table webomsaf
(
  wbomvisn    char(8) default ' ' not null,
  wbomcntr    char(3) default ' ' not null,
  wbomscnt    char(3) default ' ' not null,
  wbomrtyp    char(1) default ' ' not null,
  wbomitem    char(9) default ' ' not null,
  wbomquan    char(3) default ' ' not null,
  wbompdte    char(8) default ' ' not null,
  wbomcdte    char(8) default ' ' not null,
  wbomctim    char(8) default ' ' not null,
  wbomtrid    char(24) default ' ' not null,
  wbommsid    char(36) default ' ' not null,
  wbomeleg    char(8) default ' ' not null,
  wbomacoi    char(1) default ' ' not null,
  wbomdsoi    char(1) default ' ' not null,
  wbomfqnt    char(1) default ' ' not null,
  wbomitmn    char(5) default ' ' not null,
  wbomnopt    char(2) default ' ' not null,
  wbomrsoi    char(1) default ' ' not null,
  wbomtdoi    char(1) default ' ' not null,
  wbomspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webomsa1 on webomsaf
(
wbomvisn,
wbomcntr,
wbomscnt
);
create unique index webomsa2 on webomsaf
(
wbomtrid,
wbomvisn,
wbomcntr,
wbomscnt
);
create unique index webomsa3 on webomsaf
(
wbommsid,
wbomvisn,
wbomcntr,
wbomscnt
);
create unique index webomsa4 on webomsaf
(
wbomeleg,
wbomvisn,
wbomcntr,
wbomscnt
);
revoke all on webomsaf from public ; 
grant select on webomsaf to public ; 
