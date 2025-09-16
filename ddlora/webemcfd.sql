create table webemcaf
(
  wbewarid    varchar2(20) default ' ' not null,
  wbewrptc    varchar2(3) default ' ' not null,
  wbewmevc    varchar2(2) default ' ' not null,
  wbewsrvc    varchar2(2) default ' ' not null,
  wbewsvid    varchar2(4) default ' ' not null,
  wbewsvbe    varchar2(9) default ' ' not null,
  wbewsvch    varchar2(9) default ' ' not null,
  wbewsvdt    varchar2(10) default ' ' not null,
  wbewsvex    varchar2(4) default ' ' not null,
  wbewsvit    varchar2(5) default ' ' not null,
  wbewsvsc    varchar2(9) default ' ' not null,
  wbewtrid    varchar2(24) default ' ' not null,
  wbewmsid    varchar2(36) default ' ' not null,
  wbewspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webemca1 primary key( 
wbewarid,
wbewrptc,
wbewmevc,
wbewsrvc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webemca2 on webemcaf
(
wbewtrid,
wbewarid,
wbewrptc,
wbewmevc,
wbewsrvc
)
  tablespace pas_indx; 
create unique index webemca3 on webemcaf
(
wbewmsid,
wbewarid,
wbewrptc,
wbewmevc,
wbewsrvc
)
  tablespace pas_indx; 
