create table webbbdaf
(
  wbbdclid    varchar2(6) default ' ' not null,
  wbbdrptc    varchar2(3) default ' ' not null,
  wbbdclbp    varchar2(9) default ' ' not null,
  wbbdclca    varchar2(9) default ' ' not null,
  wbbdsrvp    varchar2(8) default ' ' not null,
  wbbdstat    varchar2(50) default ' ' not null,
  wbbdtrid    varchar2(24) default ' ' not null,
  wbbdmsid    varchar2(36) default ' ' not null,
  wbbdrkey    varchar2(24) default ' ' not null,
  wbbdcuid    varchar2(10) default ' ' not null,
  wbbdcdat    varchar2(8) default ' ' not null,
  wbbdctim    varchar2(8) default ' ' not null,
  wbbduuid    varchar2(10) default ' ' not null,
  wbbdudat    varchar2(8) default ' ' not null,
  wbbdutim    varchar2(8) default ' ' not null,
  wbbdspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webbbda1 primary key( 
wbbdclid,
wbbdrptc,
wbbdrkey)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webbbda2 on webbbdaf
(
wbbdtrid,
wbbdclid,
wbbdrptc,
wbbdrkey
)
  tablespace pas_indx; 
create unique index webbbda3 on webbbdaf
(
wbbdmsid,
wbbdclid,
wbbdrptc,
wbbdrkey
)
  tablespace pas_indx; 
create unique index webbbda4 on webbbdaf
(
wbbdrkey,
wbbdclid,
wbbdrptc
)
  tablespace pas_indx; 
