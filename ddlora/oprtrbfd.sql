create table oprtrybf
(
  optdcode    varchar2(15) default ' ' not null,
  optditem    varchar2(15) default ' ' not null,
  optdqty     number(3,0) default 0 not null,
  optdhosp    varchar2(3) default ' ' not null,
  optdspar    varchar2(34) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprtryb1 primary key( 
optdcode,
optditem,
optdhosp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
