create table mehrevaf
(
  dmhrvadm    varchar2(8) default ' ' not null,
  mhrvdate    varchar2(8) default ' ' not null,
  mhrvtime    varchar2(5) default ' ' not null,
  mhrvdeci    number(1,0) default 0 not null,
  mhrvldat    varchar2(8) default ' ' not null,
  mhrvltim    varchar2(5) default ' ' not null,
  mhrvreas    varchar2(3) default ' ' not null,
  mhrvndat    varchar2(8) default ' ' not null,
  mhrvspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehreva1 primary key( 
dmhrvadm,
mhrvdate,
mhrvtime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
