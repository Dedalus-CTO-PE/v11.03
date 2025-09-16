create table webimdaf
(
  wbidfbid    varchar2(3) default ' ' not null,
  wbidarid    varchar2(20) default ' ' not null,
  wbidclid    varchar2(6) default ' ' not null,
  wbidrptc    varchar2(3) default ' ' not null,
  wbidtrst    varchar2(50) default ' ' not null,
  wbidrpst    varchar2(50) default ' ' not null,
  wbidmstc    varchar2(4) default ' ' not null,
  wbidmstt    varchar2(80) default ' ' not null,
  wbidmcmn    varchar2(10) default ' ' not null,
  wbidmcrn    varchar2(1) default ' ' not null,
  wbidmcgn    varchar2(40) default ' ' not null,
  wbidhfsc    varchar2(4) default ' ' not null,
  wbidhfst    varchar2(80) default ' ' not null,
  wbidmafl    varchar2(8) default ' ' not null,
  wbidmald    varchar2(8) default ' ' not null,
  wbidmamn    varchar2(10) default ' ' not null,
  wbidmarn    varchar2(1) default ' ' not null,
  wbidmafn    varchar2(40) default ' ' not null,
  wbidmagn    varchar2(40) default ' ' not null,
  wbidhfac    varchar2(1) default ' ' not null,
  wbidhfap    varchar2(1) default ' ' not null,
  wbidhfec    varchar2(4) default ' ' not null,
  wbidhfet    varchar2(80) default ' ' not null,
  wbidtrid    varchar2(24) default ' ' not null,
  wbidmsid    varchar2(36) default ' ' not null,
  wbidcuid    varchar2(10) default ' ' not null,
  wbidcdat    varchar2(8) default ' ' not null,
  wbidctim    varchar2(8) default ' ' not null,
  wbiduuid    varchar2(10) default ' ' not null,
  wbidudat    varchar2(8) default ' ' not null,
  wbidutim    varchar2(8) default ' ' not null,
  wbidspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webimda1 primary key( 
wbidfbid,
wbidarid,
wbidclid,
wbidrptc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webimda2 on webimdaf
(
wbidtrid,
wbidfbid,
wbidarid,
wbidclid,
wbidrptc
)
  tablespace pas_indx; 
create unique index webimda3 on webimdaf
(
wbidmsid,
wbidfbid,
wbidarid,
wbidclid,
wbidrptc
)
  tablespace pas_indx; 
