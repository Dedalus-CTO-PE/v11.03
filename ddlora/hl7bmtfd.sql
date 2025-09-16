create table hl7bmtaf
(
  hlbmstat    varchar2(1) default ' ' not null,
  hlbmdate    varchar2(8) default ' ' not null,
  hlbmtime    varchar2(6) default ' ' not null,
  dhlbmmsg    varchar2(20) default ' ' not null,
  hlbmtype    varchar2(3) default ' ' not null,
  hlbmurno    varchar2(8) default ' ' not null,
  hlbmvisn    varchar2(8) default ' ' not null,
  hlbmtkey    varchar2(80) default ' ' not null,
  hlbmflag    varchar2(1) default ' ' not null,
  hlbmpgid    varchar2(8) default ' ' not null,
  hlbmeror    varchar2(40) default ' ' not null,
  hlbmspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7bmta1 primary key( 
hlbmstat,
hlbmdate,
hlbmtime,
dhlbmmsg)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
