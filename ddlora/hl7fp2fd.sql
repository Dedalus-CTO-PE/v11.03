create table hl7fp2af
(
  hlp2rsid    varchar2(64) default ' ' not null,
  hlp2vrid    varchar2(10) default ' ' not null,
  hlp2cnt1    varchar2(4) default ' ' not null,
  hlp2cnt2    varchar2(4) default ' ' not null,
  hlp2idus    varchar2(20) default ' ' not null,
  hlp2idsy    varchar2(255) default ' ' not null,
  hlp2idve    varchar2(50) default ' ' not null,
  hlp2idcd    varchar2(50) default ' ' not null,
  hlp2iddi    varchar2(200) default ' ' not null,
  hlp2idsl    varchar2(1) default ' ' not null,
  hlp2idtx    varchar2(200) default ' ' not null,
  hlp2syst    varchar2(255) default ' ' not null,
  hlp2idva    varchar2(200) default ' ' not null,
  hlp2psta    varchar2(40) default ' ' not null,
  hlp2pend    varchar2(40) default ' ' not null,
  hlp2aref    varchar2(200) default ' ' not null,
  hlp2atyp    varchar2(255) default ' ' not null,
  hlp2adis    varchar2(200) default ' ' not null,
  hlp2iuse    varchar2(40) default ' ' not null,
  hlp2isys    varchar2(255) default ' ' not null,
  hlp2ival    varchar2(200) default ' ' not null,
  hlp2itxt    varchar2(200) default ' ' not null,
  hlp2csys    varchar2(255) default ' ' not null,
  hlp2cver    varchar2(200) default ' ' not null,
  hlp2ccod    varchar2(50) default ' ' not null,
  hlp2cdis    varchar2(200) default ' ' not null,
  hlp2cuss    varchar2(10) default ' ' not null,
  hlp2pstr    varchar2(40) default ' ' not null,
  hlp2pren    varchar2(40) default ' ' not null,
  hlp2spar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7fp2a1 primary key( 
hlp2rsid,
hlp2vrid,
hlp2cnt1,
hlp2cnt2)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hl7fp2a2 on hl7fp2af
(
hlp2idus,
hlp2rsid,
hlp2vrid,
hlp2cnt1,
hlp2cnt2
)
  tablespace pas_indx; 
