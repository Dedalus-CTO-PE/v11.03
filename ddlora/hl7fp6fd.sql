create table hl7fp6af
(
  hlp6rsid    varchar2(64) default ' ' not null,
  hlp6vrid    varchar2(10) default ' ' not null,
  hlp6cnt1    varchar2(4) default ' ' not null,
  hlp6cnt2    varchar2(4) default ' ' not null,
  hlp6rtxt    varchar2(200) default ' ' not null,
  hlp6rsys    varchar2(255) default ' ' not null,
  hlp6rver    varchar2(50) default ' ' not null,
  hlp6rcod    varchar2(200) default ' ' not null,
  hlp6rdsp    varchar2(200) default ' ' not null,
  hlp6ruse    varchar2(10) default ' ' not null,
  hlp6rtx2    varchar2(200) default ' ' not null,
  hlp6rsy2    varchar2(255) default ' ' not null,
  hlp6rve2    varchar2(50) default ' ' not null,
  hlp6rco2    varchar2(200) default ' ' not null,
  hlp6rds2    varchar2(200) default ' ' not null,
  hlp6rus2    varchar2(10) default ' ' not null,
  hlp6nuse    varchar2(50) default ' ' not null,
  hlp6ntxt    varchar2(200) default ' ' not null,
  hlp6nfam    varchar2(200) default ' ' not null,
  hlp6ngiv    varchar2(200) default ' ' not null,
  hlp6npre    varchar2(200) default ' ' not null,
  hlp6nsuf    varchar2(200) default ' ' not null,
  hlp6nstr    varchar2(40) default ' ' not null,
  hlp6nend    varchar2(40) default ' ' not null,
  hlp6spar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7fp6a1 primary key( 
hlp6rsid,
hlp6vrid,
hlp6cnt1,
hlp6cnt2)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
