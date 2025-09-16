create table hl7fp4af
(
  hlp4rsid    varchar2(64) default ' ' not null,
  hlp4vrid    varchar2(10) default ' ' not null,
  hlp4cnt1    varchar2(4) default ' ' not null,
  hlp4cnt2    varchar2(4) default ' ' not null,
  hlp4refe    varchar2(200) default ' ' not null,
  hlp4type    varchar2(255) default ' ' not null,
  hlp4idus    varchar2(20) default ' ' not null,
  hlp4idsy    varchar2(255) default ' ' not null,
  hlp4idve    varchar2(50) default ' ' not null,
  hlp4idcd    varchar2(50) default ' ' not null,
  hlp4iddi    varchar2(200) default ' ' not null,
  hlp4idsl    varchar2(10) default ' ' not null,
  hlp4idtx    varchar2(200) default ' ' not null,
  hlp4syst    varchar2(255) default ' ' not null,
  hlp4idva    varchar2(200) default ' ' not null,
  hlp4psta    varchar2(40) default ' ' not null,
  hlp4pend    varchar2(40) default ' ' not null,
  hlp4spar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7fp4a1 primary key( 
hlp4rsid,
hlp4vrid,
hlp4cnt1,
hlp4cnt2)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hl7fp4a2 on hl7fp4af
(
hlp4idus,
hlp4rsid,
hlp4vrid,
hlp4cnt1,
hlp4cnt2
)
  tablespace pas_indx; 
