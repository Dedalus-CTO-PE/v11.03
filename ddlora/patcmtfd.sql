create table patcmtaf
(
  ptcmccod    varchar2(3) default ' ' not null,
  ptcmhfun    varchar2(6) default ' ' not null,
  ptcmhfty    varchar2(3) default ' ' not null,
  ptcmcntr    varchar2(6) default ' ' not null,
  ptcmspre    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcmta1 primary key( 
ptcmccod,
ptcmhfun,
ptcmhfty,
ptcmcntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patcmta2 on patcmtaf
(
ptcmcntr,
ptcmccod,
ptcmhfun,
ptcmhfty
)
  tablespace pas_indx; 
