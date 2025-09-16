create table webbbfaf
(
  wbbfclid    varchar2(6) default ' ' not null,
  wbbfrptc    varchar2(3) default ' ' not null,
  wbbfmevc    varchar2(2) default ' ' not null,
  wbbfsrvc    varchar2(2) default ' ' not null,
  wbbfassc    varchar2(4) default ' ' not null,
  wbbfbepd    varchar2(9) default ' ' not null,
  wbbfcham    varchar2(9) default ' ' not null,
  wbbfsvid    varchar2(4) default ' ' not null,
  wbbfitmn    varchar2(5) default ' ' not null,
  wbbfnofp    varchar2(2) default ' ' not null,
  wbbfprov    varchar2(8) default ' ' not null,
  wbbftrid    varchar2(24) default ' ' not null,
  wbbfmsid    varchar2(36) default ' ' not null,
  wbbfrkey    varchar2(24) default ' ' not null,
  wbbfspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webbbfa1 primary key( 
wbbfclid,
wbbfrptc,
wbbfmevc,
wbbfsrvc,
wbbfrkey)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webbbfa2 on webbbfaf
(
wbbftrid,
wbbfclid,
wbbfrptc,
wbbfmevc,
wbbfsrvc,
wbbfrkey
)
  tablespace pas_indx; 
create unique index webbbfa3 on webbbfaf
(
wbbfmsid,
wbbfclid,
wbbfrptc,
wbbfmevc,
wbbfsrvc,
wbbfrkey
)
  tablespace pas_indx; 
create unique index webbbfa4 on webbbfaf
(
wbbfrkey,
wbbfclid,
wbbfrptc,
wbbfmevc,
wbbfsrvc
)
  tablespace pas_indx; 
