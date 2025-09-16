create table pcpaudnu
(
  pcnuaudd    varchar2(8) default ' ' not null,
  pcnuaudt    varchar2(8) default ' ' not null,
  pcnuaudp    varchar2(2) default ' ' not null,
  pcnuaudr    varchar2(1) default ' ' not null,
  pcnuauds    number(1,0) default 0 not null,
  pcnuaudo    varchar2(4) default ' ' not null,
  pcnucode    varchar2(6) default ' ' not null,
  pcnuname    varchar2(20) default ' ' not null,
  pcnuclss    varchar2(3) default ' ' not null,
  dpcnusec    varchar2(1) default ' ' not null,
  pcnuspar    varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index pcpaudnu on pcpaudnu
(
pcnuaudd,
pcnuaudt,
pcnuaudp,
pcnuaudr
)
tablespace pas_indx; 
create table pcpnuraf
(
  pcnucode    varchar2(6) default ' ' not null,
  pcnuname    varchar2(20) default ' ' not null,
  pcnuclss    varchar2(3) default ' ' not null,
  dpcnusec    varchar2(1) default ' ' not null,
  pcnuspar    varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pcpnura1 primary key( 
pcnucode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pcpnura2 on pcpnuraf
(
pcnuname,
pcnucode
)
  tablespace pas_indx; 
create unique index pcpnura3 on pcpnuraf
(
pcnuclss,
pcnuname,
pcnucode
)
  tablespace pas_indx; 
