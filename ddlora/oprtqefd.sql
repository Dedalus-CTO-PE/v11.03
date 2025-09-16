create table oprtqeaf
(
  optqunid    varchar2(10) default ' ' not null,
  optqrtyp    varchar2(1) default ' ' not null,
  optqcntr    varchar2(2) default ' ' not null,
  optqadat    varchar2(8) default ' ' not null,
  optqatim    varchar2(8) default ' ' not null,
  optqrdat    varchar2(8) default ' ' not null,
  optqrtim    varchar2(8) default ' ' not null,
  optqcomm    varchar2(10) default ' ' not null,
  optqspar    varchar2(3) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprtqea1 primary key( 
optqunid,
optqrtyp,
optqcntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
