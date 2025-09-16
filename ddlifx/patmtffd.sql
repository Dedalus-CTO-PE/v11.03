create table patmtfaf
(
  ptmtclam    char(3) default ' ' not null,
  ptmthfnd    char(6) default ' ' not null,
  ptmtcntr    char(6) default ' ' not null,
  ptmtusid    char(10) default ' ' not null,
  ptmtspar    char(40) default ' ' not null,
  lf          char(1)
);
create unique index patmtfa1 on patmtfaf
(
ptmtclam,
ptmthfnd
);
create unique index patmtfa2 on patmtfaf
(
ptmthfnd,
ptmtclam
);
create unique index patmtfa3 on patmtfaf
(
ptmtcntr,
ptmtclam,
ptmthfnd
);
revoke all on patmtfaf from public ; 
grant select on patmtfaf to public ; 
