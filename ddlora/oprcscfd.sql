create table oprcscaf
(
  opccdate    varchar2(6) default ' ' not null,
  opccdoct    varchar2(6) default ' ' not null,
  opcctype    varchar2(1) default ' ' not null,
  opcctime    varchar2(3) default ' ' not null,
  dopcccty    varchar2(1) default ' ' not null,
  opcccode    varchar2(3) default ' ' not null,
  opccnumb    number(6,0) default 0 not null,
  opccdura    number(6,0) default 0 not null,
  opccbrkt    number(6,0) default 0 not null,
  opccspar    varchar2(5) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprcsca1 primary key( 
opccdate,
opccdoct,
opcctype,
opcctime,
dopcccty,
opcccode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
