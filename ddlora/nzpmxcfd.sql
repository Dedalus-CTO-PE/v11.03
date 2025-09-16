create table nzpmxcaf
(
  nzmxhosp    varchar2(3) default ' ' not null,
  nzmxclmc    varchar2(3) default ' ' not null,
  nzmxcntr    varchar2(6) default ' ' not null,
  nzmxftab    varchar2(8) default ' ' not null,
  nzmxmchg    varchar2(9) default ' ' not null,
  nzmxefdt    varchar2(8) default ' ' not null,
  nzmxuniq    varchar2(3) default ' ' not null,
  nzmxqnty    varchar2(3) default ' ' not null,
  nzmxitmn    varchar2(9) default ' ' not null,
  nzmxcdat    varchar2(8) default ' ' not null,
  nzmxctim    varchar2(8) default ' ' not null,
  nzmxcuid    varchar2(10) default ' ' not null,
  nzmxudat    varchar2(8) default ' ' not null,
  nzmxutim    varchar2(8) default ' ' not null,
  nzmxuuid    varchar2(10) default ' ' not null,
  nzmxspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nzpmxca1 primary key( 
nzmxhosp,
nzmxclmc,
nzmxcntr,
nzmxftab,
nzmxmchg,
nzmxefdt,
nzmxuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
