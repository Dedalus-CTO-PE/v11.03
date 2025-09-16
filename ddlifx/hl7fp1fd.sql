create table hl7fp1af
(
  hlp1stat    char(1) default ' ' not null,
  hlp1urno    char(8) default ' ' not null,
  hlp1rtyp    char(50) default ' ' not null,
  hlp1rsid    char(64) default ' ' not null,
  hlp1vrid    char(10) default ' ' not null,
  hlp1cnt1    char(4) default ' ' not null,
  hlp1imrl    char(255) default ' ' not null,
  hlp1lang    char(50) default ' ' not null,
  hlp1lsup    char(30) default ' ' not null,
  hlp1srce    char(255) default ' ' not null,
  hlp1prf1    char(255) default ' ' not null,
  hlp1prf2    char(255) default ' ' not null,
  hlp1ssys    char(255) default ' ' not null,
  hlp1sver    char(200) default ' ' not null,
  hlp1scod    char(50) default ' ' not null,
  hlp1sdis    char(200) default ' ' not null,
  hlp1susl    char(10) default ' ' not null,
  hlp1ssy2    char(255) default ' ' not null,
  hlp1sve2    char(200) default ' ' not null,
  hlp1sco2    char(50) default ' ' not null,
  hlp1sdi2    char(200) default ' ' not null,
  hlp1sus2    char(10) default ' ' not null,
  hlp1prds    char(500) default ' ' not null,
  hlp1crdt    char(8) default ' ' not null,
  hlp1crtm    char(8) default ' ' not null,
  hlp1crui    char(10) default ' ' not null,
  hlp1updt    char(8) default ' ' not null,
  hlp1uptm    char(8) default ' ' not null,
  hlp1upui    char(10) default ' ' not null,
  hlp1spar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7fp1a1 on hl7fp1af
(
hlp1rsid,
hlp1vrid,
hlp1cnt1
);
create unique index hl7fp1a2 on hl7fp1af
(
hlp1urno,
hlp1rsid,
hlp1vrid,
hlp1cnt1
);
create unique index hl7fp1a3 on hl7fp1af
(
hlp1lsup,
hlp1rsid,
hlp1vrid,
hlp1cnt1
);
create unique index hl7fp1a4 on hl7fp1af
(
hlp1stat,
hlp1rsid,
hlp1vrid,
hlp1cnt1
);
revoke all on hl7fp1af from public ; 
grant select on hl7fp1af to public ; 
