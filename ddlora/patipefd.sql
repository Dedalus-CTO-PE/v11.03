create table patipenf
(
  dipadmno    varchar2(8) default ' ' not null,
  ipsystm     number(1,0) default 0 not null,
  ipsite      varchar2(6) default ' ' not null,
  ptiprhld    varchar2(3) default ' ' not null,
  ptiprdes    varchar2(80) default ' ' not null,
  ptiprsta    varchar2(1) default ' ' not null,
  ptipsvar    varchar2(49) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patipen1 primary key( 
dipadmno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
