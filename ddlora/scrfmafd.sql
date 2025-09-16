create table scrfmaaf
(
  scfmfid     varchar2(8) default ' ' not null,
  scfmpid     varchar2(8) default ' ' not null,
  scfmdes     varchar2(35) default ' ' not null,
  scfmtyp     number(2,0) default 0 not null,
  scfmsfi     varchar2(5) default ' ' not null,
  scfmspa     varchar2(32) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint scrfmaa1 primary key( 
scfmfid,
scfmpid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index scrfmaa2 on scrfmaaf
(
scfmpid,
scfmfid
)
  tablespace pas_indx; 
