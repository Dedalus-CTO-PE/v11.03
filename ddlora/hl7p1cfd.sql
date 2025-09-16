create table hl7p1caf
(
  hl1crsid    varchar2(64) default ' ' not null,
  hl1cvrid    varchar2(10) default ' ' not null,
  hl1ccnt1    varchar2(4) default ' ' not null,
  hl1cmair    varchar2(200) default ' ' not null,
  hl1cmait    varchar2(255) default ' ' not null,
  hl1cmaid    varchar2(200) default ' ' not null,
  hl1cmaiu    varchar2(50) default ' ' not null,
  hl1cmais    varchar2(255) default ' ' not null,
  hl1cmaiv    varchar2(200) default ' ' not null,
  hl1cmitx    varchar2(200) default ' ' not null,
  hl1cmisy    varchar2(255) default ' ' not null,
  hl1cmive    varchar2(200) default ' ' not null,
  hl1cmicd    varchar2(50) default ' ' not null,
  hl1cmidi    varchar2(200) default ' ' not null,
  hl1cmius    varchar2(10) default ' ' not null,
  hl1cmips    varchar2(40) default ' ' not null,
  hl1cmipe    varchar2(40) default ' ' not null,
  hl1cspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7p1ca1 primary key( 
hl1crsid,
hl1cvrid,
hl1ccnt1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
