create table paturcaf
(
  dpturadm    varchar2(8) default ' ' not null,
  pturdate    varchar2(8) default ' ' not null,
  pturtime    varchar2(8) default ' ' not null,
  pturourn    varchar2(8) default ' ' not null,
  pturspar    varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint paturca1 primary key( 
dpturadm,
pturdate,
pturtime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index paturca2 on paturcaf
(
pturdate,
pturtime,
dpturadm
)
  tablespace pas_indx; 
