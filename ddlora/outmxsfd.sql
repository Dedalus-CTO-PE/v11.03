create table outmxsaf
(
  otxssite    varchar2(6) default ' ' not null,
  otxsclin    varchar2(6) default ' ' not null,
  dotxsday    varchar2(1) default ' ' not null,
  otxstime    varchar2(5) default ' ' not null,
  dotxscnt    varchar2(2) default ' ' not null,
  otxsdoct    varchar2(6) default ' ' not null,
  otxsspec    varchar2(3) default ' ' not null,
  otxcspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outmxsa1 primary key( 
filmxsa1,otxssite,
otxsclin,
dotxsday,
otxstime,
dotxscnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
