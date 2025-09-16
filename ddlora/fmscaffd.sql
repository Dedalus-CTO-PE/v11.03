create table fmscafaf
(
  fmcaled     varchar2(2) default ' ' not null,
  fmcaacc     varchar2(12) default ' ' not null,
  fmcatyp     number(1,0) default 0 not null,
  fmcajnl     number(1,0) default 0 not null,
  fmcachq     varchar2(15) default ' ' not null,
  fmcaspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmscafa1 primary key( 
fmcaled,
fmcaacc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmscafa2 on fmscafaf
(
fmcachq,
fmcaled,
fmcaacc
)
  tablespace pas_indx; 
