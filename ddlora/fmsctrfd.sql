create table fmsryyyy
(
  fmctbat     varchar2(5) default ' ' not null,
  fmctuniq    varchar2(5) default ' ' not null,
  fmctledg    varchar2(2) default ' ' not null,
  fmctacct    varchar2(12) default ' ' not null,
  fmctcred    varchar2(5) default ' ' not null,
  fmctpdat    varchar2(8) default ' ' not null,
  fmcttdat    varchar2(8) default ' ' not null,
  fmcttype    varchar2(2) default ' ' not null,
  fmctdiss    varchar2(5) default ' ' not null,
  fmctpper    varchar2(2) default ' ' not null,
  fmctdocr    varchar2(15) default ' ' not null,
  fmctamt     number(14,2) default 0 not null,
  fmctord     varchar2(8) default ' ' not null,
  fmctresp    varchar2(4) default ' ' not null,
  fmctdesc    varchar2(30) default ' ' not null,
  fmctspar    varchar2(21) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsctra1 primary key( 
fmctbat,
fmctuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsctra2 on fmsryyyy
(
fmctledg,
fmctacct,
fmctpdat,
fmctbat,
fmctuniq
)
  tablespace pas_indx; 
