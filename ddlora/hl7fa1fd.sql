create table hl7fa1af
(
  hla1rsid    varchar2(64) default ' ' not null,
  hla1vrid    varchar2(10) default ' ' not null,
  hla1cnt1    varchar2(4) default ' ' not null,
  hla1tsys    varchar2(255) default ' ' not null,
  hla1tver    varchar2(200) default ' ' not null,
  hla1tcod    varchar2(50) default ' ' not null,
  hla1tdis    varchar2(200) default ' ' not null,
  hla1tusl    varchar2(10) default ' ' not null,
  hla1tsy2    varchar2(255) default ' ' not null,
  hla1tve2    varchar2(200) default ' ' not null,
  hla1tco2    varchar2(50) default ' ' not null,
  hla1tdi2    varchar2(200) default ' ' not null,
  hla1tus2    varchar2(10) default ' ' not null,
  hla1clst    varchar2(200) default ' ' not null,
  hla1curi    varchar2(255) default ' ' not null,
  hla1cver    varchar2(200) default ' ' not null,
  hla1ccod    varchar2(50) default ' ' not null,
  hla1cdis    varchar2(200) default ' ' not null,
  hla1cusl    varchar2(10) default ' ' not null,
  hla1vlst    varchar2(200) default ' ' not null,
  hla1vuri    varchar2(255) default ' ' not null,
  hla1vver    varchar2(200) default ' ' not null,
  hla1vcod    varchar2(50) default ' ' not null,
  hla1vdis    varchar2(200) default ' ' not null,
  hla1vusl    varchar2(10) default ' ' not null,
  hla1type    varchar2(50) default ' ' not null,
  hla1spar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7fa1a1 primary key( 
hla1rsid,
hla1vrid,
hla1cnt1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hl7fa1a2 on hl7fa1af
(
hla1cnt1,
hla1rsid,
hla1vrid
)
  tablespace pas_indx; 
