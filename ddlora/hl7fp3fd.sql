create table hl7fp3af
(
  hlp3rsid    varchar2(64) default ' ' not null,
  hlp3vrid    varchar2(10) default ' ' not null,
  hlp3cnt1    varchar2(4) default ' ' not null,
  hlp3cnt2    varchar2(4) default ' ' not null,
  hlp3refe    varchar2(200) default ' ' not null,
  hlp3type    varchar2(255) default ' ' not null,
  hlp3idus    varchar2(20) default ' ' not null,
  hlp3idsy    varchar2(255) default ' ' not null,
  hlp3idve    varchar2(50) default ' ' not null,
  hlp3idcd    varchar2(50) default ' ' not null,
  hlp3iddi    varchar2(200) default ' ' not null,
  hlp3idsl    varchar2(10) default ' ' not null,
  hlp3idtx    varchar2(200) default ' ' not null,
  hlp3syst    varchar2(255) default ' ' not null,
  hlp3idva    varchar2(200) default ' ' not null,
  hlp3psta    varchar2(40) default ' ' not null,
  hlp3pend    varchar2(40) default ' ' not null,
  hlp3spar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7fp3a1 primary key( 
hlp3rsid,
hlp3vrid,
hlp3cnt1,
hlp3cnt2)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hl7fp3a2 on hl7fp3af
(
hlp3idus,
hlp3rsid,
hlp3vrid,
hlp3cnt1,
hlp3cnt2
)
  tablespace pas_indx; 
