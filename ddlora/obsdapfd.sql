create table obsdapaf
(
  obdpvist    varchar2(8) default ' ' not null,
  obdpctyp    varchar2(3) default ' ' not null,
  obdpuniq    varchar2(3) default ' ' not null,
  obdpcode    varchar2(10) default ' ' not null,
  obdpdate    varchar2(8) default ' ' not null,
  obdptime    varchar2(8) default ' ' not null,
  obdpreas    varchar2(3) default ' ' not null,
  obdporea    varchar2(3) default ' ' not null,
  obdpspar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obsdapa1 primary key( 
obdpvist,
obdpctyp,
obdpuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
