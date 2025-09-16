create table comedfaf
(
  cmefdstr    varchar2(3) default ' ' not null,
  cmefcntn    varchar2(8) default ' ' not null,
  cmefobjt    varchar2(3) default ' ' not null,
  cmeffnam    varchar2(100) default ' ' not null,
  cmefmd5c    varchar2(100) default ' ' not null,
  cmefcntr    varchar2(8) default ' ' not null,
  cmefspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint comedfa1 primary key( 
cmefdstr,
cmefcntn,
cmefobjt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
