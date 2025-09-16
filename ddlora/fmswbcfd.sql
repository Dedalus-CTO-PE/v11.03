create table fmswbcaf
(
  fmwbuid     varchar2(4) default ' ' not null,
  fmwbyr      varchar2(4) default ' ' not null,
  fmwbpr      varchar2(2) default ' ' not null,
  fmwblin     varchar2(3) default ' ' not null,
  fmwbcom     varchar2(60) default ' ' not null,
  fmwbspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmswbca1 primary key( 
fmwbuid,
fmwbyr,
fmwbpr,
fmwblin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
