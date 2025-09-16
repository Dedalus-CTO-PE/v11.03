create table outsipaf
(
  otspsite    varchar2(6) default ' ' not null,
  otspxc01    varchar2(2) default ' ' not null,
  otspxc02    varchar2(2) default ' ' not null,
  otspxc03    varchar2(2) default ' ' not null,
  otspxc04    varchar2(2) default ' ' not null,
  otspxc05    varchar2(2) default ' ' not null,
  otspxc06    varchar2(2) default ' ' not null,
  otspxc07    varchar2(2) default ' ' not null,
  otspxc08    varchar2(2) default ' ' not null,
  otspxc09    varchar2(2) default ' ' not null,
  otspxc10    varchar2(2) default ' ' not null,
  otspxc11    varchar2(2) default ' ' not null,
  otspxc12    varchar2(2) default ' ' not null,
  otspxc13    varchar2(2) default ' ' not null,
  otspxc14    varchar2(2) default ' ' not null,
  otspxc15    varchar2(2) default ' ' not null,
  otspxc16    varchar2(2) default ' ' not null,
  otspxc17    varchar2(2) default ' ' not null,
  otspxc18    varchar2(2) default ' ' not null,
  otspxc19    varchar2(2) default ' ' not null,
  otspxc20    varchar2(2) default ' ' not null,
  otspspar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outsipa1 primary key( 
otspsite)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
