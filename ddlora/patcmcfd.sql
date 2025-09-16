create table pataudca
(
  ptcaaudd    varchar2(8) default ' ' not null,
  ptcaaudt    varchar2(8) default ' ' not null,
  ptcaaudp    varchar2(2) default ' ' not null,
  ptcaaudr    varchar2(1) default ' ' not null,
  ptcaauds    number(1,0) default 0 not null,
  ptcaaudo    varchar2(4) default ' ' not null,
  ptcacode    varchar2(9) default ' ' not null,
  ptcades1    varchar2(30) default ' ' not null,
  ptcades2    varchar2(30) default ' ' not null,
  ptcaelos    number(4,0) default 0 not null,
  ptcaactv    number(1,0) default 0 not null,
  ptcspare    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index pataudca on pataudca
(
ptcaaudd,
ptcaaudt,
ptcaaudp,
ptcaaudr
)
tablespace pas_indx; 
create table patcmcaf
(
  ptcacode    varchar2(9) default ' ' not null,
  ptcades1    varchar2(30) default ' ' not null,
  ptcades2    varchar2(30) default ' ' not null,
  ptcaelos    number(4,0) default 0 not null,
  ptcaactv    number(1,0) default 0 not null,
  ptcspare    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcmca1 primary key( 
ptcacode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patcmca2 on patcmcaf
(
ptcades1,
ptcades2,
ptcacode
)
  tablespace pas_indx; 
