create table hl7fp7af
(
  hlp7rsid    varchar2(64) default ' ' not null,
  hlp7vrid    varchar2(10) default ' ' not null,
  hlp7cnt1    varchar2(4) default ' ' not null,
  hlp7cnt2    varchar2(4) default ' ' not null,
  hlp7nuse    varchar2(50) default ' ' not null,
  hlp7ntex    varchar2(200) default ' ' not null,
  hlp7nfam    varchar2(200) default ' ' not null,
  hlp7ngv1    varchar2(200) default ' ' not null,
  hlp7ngv2    varchar2(200) default ' ' not null,
  hlp7ngv3    varchar2(200) default ' ' not null,
  hlp7npr1    varchar2(200) default ' ' not null,
  hlp7npr2    varchar2(200) default ' ' not null,
  hlp7npr3    varchar2(200) default ' ' not null,
  hlp7nsf1    varchar2(200) default ' ' not null,
  hlp7nsf2    varchar2(200) default ' ' not null,
  hlp7nsf3    varchar2(200) default ' ' not null,
  hlp7pstr    varchar2(40) default ' ' not null,
  hlp7pend    varchar2(40) default ' ' not null,
  hlp7spar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7fp7a1 primary key( 
hlp7rsid,
hlp7vrid,
hlp7cnt1,
hlp7cnt2)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
