create table emraudhi
(
  emhiaudd    varchar2(8) default ' ' not null,
  emhiaudt    varchar2(8) default ' ' not null,
  emhiaudp    varchar2(2) default ' ' not null,
  emhiaudr    varchar2(1) default ' ' not null,
  emhiauds    number(1,0) default 0 not null,
  emhiaudo    varchar2(4) default ' ' not null,
  emhivis     varchar2(8) default ' ' not null,
  emhidat     varchar2(8) default ' ' not null,
  emhitim     varchar2(6) default ' ' not null,
  emhiupt     varchar2(5) default ' ' not null,
  emhieus     varchar2(10) default ' ' not null,
  emhiloc     varchar2(3) default ' ' not null,
  emhidoc     varchar2(10) default ' ' not null,
  emhinur     varchar2(10) default ' ' not null,
  emhidsd     varchar2(8) default ' ' not null,
  emhidst     varchar2(6) default ' ' not null,
  emhinsd     varchar2(8) default ' ' not null,
  emhinst     varchar2(6) default ' ' not null,
  emhirhnd    varchar2(3) default ' ' not null,
  emhidrbc    varchar2(1) default ' ' not null,
  emhiodcd    varchar2(10) default ' ' not null,
  emhiodsd    varchar2(8) default ' ' not null,
  emhiodst    varchar2(6) default ' ' not null,
  emhicdat    varchar2(8) default ' ' not null,
  emhictim    varchar2(8) default ' ' not null,
  emhicuid    varchar2(10) default ' ' not null,
  emhiudat    varchar2(8) default ' ' not null,
  emhiutim    varchar2(8) default ' ' not null,
  emhiuuid    varchar2(10) default ' ' not null,
  emhispa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index emraudhi on emraudhi
(
emhiaudd,
emhiaudt,
emhiaudp,
emhiaudr
)
tablespace pas_indx; 
create index emraudh2 on emraudhi
(
emhivis,
emhiaudd,
emhiaudt,
emhiaudp,
emhiaudr
)
tablespace pas_indx; 
create table emrhisaf
(
  emhivis     varchar2(8) default ' ' not null,
  emhidat     varchar2(8) default ' ' not null,
  emhitim     varchar2(6) default ' ' not null,
  emhiupt     varchar2(5) default ' ' not null,
  emhieus     varchar2(10) default ' ' not null,
  emhiloc     varchar2(3) default ' ' not null,
  emhidoc     varchar2(10) default ' ' not null,
  emhinur     varchar2(10) default ' ' not null,
  emhidsd     varchar2(8) default ' ' not null,
  emhidst     varchar2(6) default ' ' not null,
  emhinsd     varchar2(8) default ' ' not null,
  emhinst     varchar2(6) default ' ' not null,
  emhirhnd    varchar2(3) default ' ' not null,
  emhidrbc    varchar2(1) default ' ' not null,
  emhiodcd    varchar2(10) default ' ' not null,
  emhiodsd    varchar2(8) default ' ' not null,
  emhiodst    varchar2(6) default ' ' not null,
  emhicdat    varchar2(8) default ' ' not null,
  emhictim    varchar2(8) default ' ' not null,
  emhicuid    varchar2(10) default ' ' not null,
  emhiudat    varchar2(8) default ' ' not null,
  emhiutim    varchar2(8) default ' ' not null,
  emhiuuid    varchar2(10) default ' ' not null,
  emhispa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrhisa1 primary key( 
emhivis,
emhidat,
emhitim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrhisa2 on emrhisaf
(
emhivis,
emhidoc,
emhidat,
emhitim
)
  tablespace pas_indx; 
create unique index emrhisa3 on emrhisaf
(
emhicdat,
emhictim,
emhivis,
emhidat,
emhitim
)
  tablespace pas_indx; 
create unique index emrhisa4 on emrhisaf
(
emhiudat,
emhiutim,
emhivis,
emhidat,
emhitim
)
  tablespace pas_indx; 
