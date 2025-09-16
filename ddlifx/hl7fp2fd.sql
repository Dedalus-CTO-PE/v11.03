create table hl7fp2af
(
  hlp2rsid    char(64) default ' ' not null,
  hlp2vrid    char(10) default ' ' not null,
  hlp2cnt1    char(4) default ' ' not null,
  hlp2cnt2    char(4) default ' ' not null,
  hlp2idus    char(20) default ' ' not null,
  hlp2idsy    char(255) default ' ' not null,
  hlp2idve    char(50) default ' ' not null,
  hlp2idcd    char(50) default ' ' not null,
  hlp2iddi    char(200) default ' ' not null,
  hlp2idsl    char(1) default ' ' not null,
  hlp2idtx    char(200) default ' ' not null,
  hlp2syst    char(255) default ' ' not null,
  hlp2idva    char(200) default ' ' not null,
  hlp2psta    char(40) default ' ' not null,
  hlp2pend    char(40) default ' ' not null,
  hlp2aref    char(200) default ' ' not null,
  hlp2atyp    char(255) default ' ' not null,
  hlp2adis    char(200) default ' ' not null,
  hlp2iuse    char(40) default ' ' not null,
  hlp2isys    char(255) default ' ' not null,
  hlp2ival    char(200) default ' ' not null,
  hlp2itxt    char(200) default ' ' not null,
  hlp2csys    char(255) default ' ' not null,
  hlp2cver    char(200) default ' ' not null,
  hlp2ccod    char(50) default ' ' not null,
  hlp2cdis    char(200) default ' ' not null,
  hlp2cuss    char(10) default ' ' not null,
  hlp2pstr    char(40) default ' ' not null,
  hlp2pren    char(40) default ' ' not null,
  hlp2spar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7fp2a1 on hl7fp2af
(
hlp2rsid,
hlp2vrid,
hlp2cnt1,
hlp2cnt2
);
create unique index hl7fp2a2 on hl7fp2af
(
hlp2idus,
hlp2rsid,
hlp2vrid,
hlp2cnt1,
hlp2cnt2
);
revoke all on hl7fp2af from public ; 
grant select on hl7fp2af to public ; 
