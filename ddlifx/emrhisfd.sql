create table emraudhi
(
  emhiaudd    char(8) default ' ' not null,
  emhiaudt    char(8) default ' ' not null,
  emhiaudp    char(2) default ' ' not null,
  emhiaudr    char(1) default ' ' not null,
  emhiauds    decimal(1,0) default 0 not null,
  emhiaudo    char(4) default ' ' not null,
  emhivis     char(8) default ' ' not null,
  emhidat     char(8) default ' ' not null,
  emhitim     char(6) default ' ' not null,
  emhiupt     char(5) default ' ' not null,
  emhieus     char(10) default ' ' not null,
  emhiloc     char(3) default ' ' not null,
  emhidoc     char(10) default ' ' not null,
  emhinur     char(10) default ' ' not null,
  emhidsd     char(8) default ' ' not null,
  emhidst     char(6) default ' ' not null,
  emhinsd     char(8) default ' ' not null,
  emhinst     char(6) default ' ' not null,
  emhirhnd    char(3) default ' ' not null,
  emhidrbc    char(1) default ' ' not null,
  emhiodcd    char(10) default ' ' not null,
  emhiodsd    char(8) default ' ' not null,
  emhiodst    char(6) default ' ' not null,
  emhicdat    char(8) default ' ' not null,
  emhictim    char(8) default ' ' not null,
  emhicuid    char(10) default ' ' not null,
  emhiudat    char(8) default ' ' not null,
  emhiutim    char(8) default ' ' not null,
  emhiuuid    char(10) default ' ' not null,
  emhispa     char(50) default ' ' not null,
  lf          char(1)
);
create index emraudhi on emraudhi
(
emhiaudd,
emhiaudt,
emhiaudp,
emhiaudr
);
create index emraudh2 on emraudhi
(
emhivis,
emhiaudd,
emhiaudt,
emhiaudp,
emhiaudr
);
revoke all on emraudhi from public ; 
grant select on emraudhi to public ; 
create table emrhisaf
(
  emhivis     char(8) default ' ' not null,
  emhidat     char(8) default ' ' not null,
  emhitim     char(6) default ' ' not null,
  emhiupt     char(5) default ' ' not null,
  emhieus     char(10) default ' ' not null,
  emhiloc     char(3) default ' ' not null,
  emhidoc     char(10) default ' ' not null,
  emhinur     char(10) default ' ' not null,
  emhidsd     char(8) default ' ' not null,
  emhidst     char(6) default ' ' not null,
  emhinsd     char(8) default ' ' not null,
  emhinst     char(6) default ' ' not null,
  emhirhnd    char(3) default ' ' not null,
  emhidrbc    char(1) default ' ' not null,
  emhiodcd    char(10) default ' ' not null,
  emhiodsd    char(8) default ' ' not null,
  emhiodst    char(6) default ' ' not null,
  emhicdat    char(8) default ' ' not null,
  emhictim    char(8) default ' ' not null,
  emhicuid    char(10) default ' ' not null,
  emhiudat    char(8) default ' ' not null,
  emhiutim    char(8) default ' ' not null,
  emhiuuid    char(10) default ' ' not null,
  emhispa     char(50) default ' ' not null,
  lf          char(1)
);
create unique index emrhisa1 on emrhisaf
(
emhivis,
emhidat,
emhitim
);
create unique index emrhisa2 on emrhisaf
(
emhivis,
emhidoc,
emhidat,
emhitim
);
create unique index emrhisa3 on emrhisaf
(
emhicdat,
emhictim,
emhivis,
emhidat,
emhitim
);
create unique index emrhisa4 on emrhisaf
(
emhiudat,
emhiutim,
emhivis,
emhidat,
emhitim
);
revoke all on emrhisaf from public ; 
grant select on emrhisaf to public ; 
