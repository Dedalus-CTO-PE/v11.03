create table scrincaf
(
  scinpid     varchar2(8) default ' ' not null,
  scintyp     varchar2(1) default ' ' not null,
  scininc     varchar2(12) default ' ' not null,
  scingen     number(1,0) default 0 not null,
  scinspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint scrinca1 primary key( 
scinpid,
scintyp,
scininc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
