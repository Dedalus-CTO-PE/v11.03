create table cciparaf
(
  dccpatyp    varchar2(3) default ' ' not null,
  ccpaauto    number(1,0) default 0 not null,
  ccpapcd1    number(3,0) default 0 not null,
  ccpapcd2    number(3,0) default 0 not null,
  ccpapcd3    number(3,0) default 0 not null,
  ccpadcd1    number(3,0) default 0 not null,
  ccpadcd2    number(3,0) default 0 not null,
  ccpaspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccipara1 primary key( 
dccpatyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
