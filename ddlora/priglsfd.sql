create table priglsaf
(
  prglseid    varchar2(4) default ' ' not null,
  prglsedc    varchar2(35) default ' ' not null,
  prgldbfr    varchar2(8) default ' ' not null,
  prgldbto    varchar2(8) default ' ' not null,
  prglsnfr    varchar2(20) default ' ' not null,
  prglsnto    varchar2(20) default ' ' not null,
  prglvdfr    varchar2(8) default ' ' not null,
  prglvdto    varchar2(8) default ' ' not null,
  prglppfr    varchar2(6) default ' ' not null,
  prglppto    varchar2(6) default ' ' not null,
  prglsdfr    varchar2(10) default ' ' not null,
  prglsdto    varchar2(10) default ' ' not null,
  prglccfr    varchar2(3) default ' ' not null,
  prglccto    varchar2(3) default ' ' not null,
  prglltyp    varchar2(3) default ' ' not null,
  prglscan    varchar2(1) default ' ' not null,
  prglspar    varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint priglsa1 primary key( 
prglseid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
