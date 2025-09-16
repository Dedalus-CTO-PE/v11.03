create table outuseaf
(
  oussite     varchar2(6) default ' ' not null,
  ousclin     varchar2(6) default ' ' not null,
  ousdate     varchar2(8) default ' ' not null,
  ousstrt     varchar2(5) default ' ' not null,
  ousacst     varchar2(5) default ' ' not null,
  ousacend    varchar2(5) default ' ' not null,
  ousdly      varchar2(3) default ' ' not null,
  ousspare    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outusea1 primary key( 
oussite,
ousclin,
ousdate,
ousstrt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
