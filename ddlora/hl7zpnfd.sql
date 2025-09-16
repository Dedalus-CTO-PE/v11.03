create table hl7zpnaf
(
  dzpnin01    varchar2(20) default ' ' not null,
  zpnin02     varchar2(3) default ' ' not null,
  dzpnin03    varchar2(2) default ' ' not null,
  dzpnin04    varchar2(2) default ' ' not null,
  dzpnin05    varchar2(2) default ' ' not null,
  zpn001      varchar2(30) default ' ' not null,
  zpn002      varchar2(30) default ' ' not null,
  zpn003      varchar2(30) default ' ' not null,
  zpn004      varchar2(8) default ' ' not null,
  zpn005      varchar2(8) default ' ' not null,
  zpn006      varchar2(8) default ' ' not null,
  zpn007      varchar2(2) default ' ' not null,
  zpn008      varchar2(26) default ' ' not null,
  zpn009      varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7zpn01 primary key( 
dzpnin01,
zpnin02,
dzpnin03,
dzpnin04,
dzpnin05)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
