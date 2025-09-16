create table ccsdptaf
(
  ccdphcd     varchar2(2) default ' ' not null,
  ccdpdpt     varchar2(8) default ' ' not null,
  ccdpdes     varchar2(35) default ' ' not null,
  ccdpdty     varchar2(1) default ' ' not null,
  ccdpseq     varchar2(5) default ' ' not null,
  ccdpaty     varchar2(4) default ' ' not null,
  ccdpspa     varchar2(31) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsdpta1 primary key( 
ccdphcd,
ccdpdpt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccsdpta2 on ccsdptaf
(
ccdphcd,
ccdpdes,
ccdpdpt
)
  tablespace pas_indx; 
create unique index ccsdpta3 on ccsdptaf
(
ccdphcd,
ccdpdty,
ccdpdpt
)
  tablespace pas_indx; 
create unique index ccsdpta4 on ccsdptaf
(
ccdphcd,
ccdpseq,
ccdpdpt
)
  tablespace pas_indx; 
