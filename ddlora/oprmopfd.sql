create table oprmopaf
(
  opmouniq    varchar2(10) default ' ' not null,
  opmoteam    varchar2(1) default ' ' not null,
  dopmocnt    varchar2(2) default ' ' not null,
  opmocode    varchar2(9) default ' ' not null,
  opmobamt    number(14,2) default 0 not null,
  opmogsta    varchar2(1) default ' ' not null,
  opmogstc    varchar2(6) default ' ' not null,
  opmospar    varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprmopa1 primary key( 
opmouniq,
opmoteam,
dopmocnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
