create table nzprbraf
(
  nzrbhosp    varchar2(3) default ' ' not null,
  nzrbclmc    varchar2(3) default ' ' not null,
  nzrbcntr    varchar2(6) default ' ' not null,
  nzrbftab    varchar2(8) default ' ' not null,
  nzrbcprc    varchar2(9) default ' ' not null,
  nzrbefdt    varchar2(8) default ' ' not null,
  nzrbbrcd    varchar2(3) default ' ' not null,
  nzrbamnt    number(16,2) default 0 not null,
  nzrbspar    varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nzprbra1 primary key( 
nzrbhosp,
nzrbclmc,
nzrbcntr,
nzrbftab,
nzrbcprc,
nzrbefdt,
nzrbbrcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
