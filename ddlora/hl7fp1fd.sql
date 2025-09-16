create table hl7fp1af
(
  hlp1stat    varchar2(1) default ' ' not null,
  hlp1urno    varchar2(8) default ' ' not null,
  hlp1rtyp    varchar2(50) default ' ' not null,
  hlp1rsid    varchar2(64) default ' ' not null,
  hlp1vrid    varchar2(10) default ' ' not null,
  hlp1cnt1    varchar2(4) default ' ' not null,
  hlp1imrl    varchar2(255) default ' ' not null,
  hlp1lang    varchar2(50) default ' ' not null,
  hlp1lsup    varchar2(30) default ' ' not null,
  hlp1srce    varchar2(255) default ' ' not null,
  hlp1prf1    varchar2(255) default ' ' not null,
  hlp1prf2    varchar2(255) default ' ' not null,
  hlp1ssys    varchar2(255) default ' ' not null,
  hlp1sver    varchar2(200) default ' ' not null,
  hlp1scod    varchar2(50) default ' ' not null,
  hlp1sdis    varchar2(200) default ' ' not null,
  hlp1susl    varchar2(10) default ' ' not null,
  hlp1ssy2    varchar2(255) default ' ' not null,
  hlp1sve2    varchar2(200) default ' ' not null,
  hlp1sco2    varchar2(50) default ' ' not null,
  hlp1sdi2    varchar2(200) default ' ' not null,
  hlp1sus2    varchar2(10) default ' ' not null,
  hlp1prds    varchar2(500) default ' ' not null,
  hlp1crdt    varchar2(8) default ' ' not null,
  hlp1crtm    varchar2(8) default ' ' not null,
  hlp1crui    varchar2(10) default ' ' not null,
  hlp1updt    varchar2(8) default ' ' not null,
  hlp1uptm    varchar2(8) default ' ' not null,
  hlp1upui    varchar2(10) default ' ' not null,
  hlp1spar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7fp1a1 primary key( 
hlp1rsid,
hlp1vrid,
hlp1cnt1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hl7fp1a2 on hl7fp1af
(
hlp1urno,
hlp1rsid,
hlp1vrid,
hlp1cnt1
)
  tablespace pas_indx; 
create unique index hl7fp1a3 on hl7fp1af
(
hlp1lsup,
hlp1rsid,
hlp1vrid,
hlp1cnt1
)
  tablespace pas_indx; 
create unique index hl7fp1a4 on hl7fp1af
(
hlp1stat,
hlp1rsid,
hlp1vrid,
hlp1cnt1
)
  tablespace pas_indx; 
