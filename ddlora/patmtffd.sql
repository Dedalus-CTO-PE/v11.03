create table patmtfaf
(
  ptmtclam    varchar2(3) default ' ' not null,
  ptmthfnd    varchar2(6) default ' ' not null,
  ptmtcntr    varchar2(6) default ' ' not null,
  ptmtusid    varchar2(10) default ' ' not null,
  ptmtspar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patmtfa1 primary key( 
ptmtclam,
ptmthfnd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patmtfa2 on patmtfaf
(
ptmthfnd,
ptmtclam
)
  tablespace pas_indx; 
create unique index patmtfa3 on patmtfaf
(
ptmtcntr,
ptmtclam,
ptmthfnd
)
  tablespace pas_indx; 
