create table fmsaudsq
(
  fmsqaudd    varchar2(8) default ' ' not null,
  fmsqaudt    varchar2(8) default ' ' not null,
  fmsqaudp    varchar2(2) default ' ' not null,
  fmsqaudr    varchar2(1) default ' ' not null,
  fmsqauds    number(1,0) default 0 not null,
  fmsqaudo    varchar2(4) default ' ' not null,
  fmsqsec     varchar2(4) default ' ' not null,
  fmsqledg    varchar2(2) default ' ' not null,
  fmsqacct    varchar2(12) default ' ' not null,
  fmsqseq     varchar2(3) default ' ' not null,
  fmsqspar    varchar2(7) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index fmsaudsq on fmsaudsq
(
fmsqaudd,
fmsqaudt,
fmsqaudp,
fmsqaudr
)
tablespace pas_indx; 
create table fmssquaf
(
  fmsqsec     varchar2(4) default ' ' not null,
  fmsqledg    varchar2(2) default ' ' not null,
  fmsqacct    varchar2(12) default ' ' not null,
  fmsqseq     varchar2(3) default ' ' not null,
  fmsqspar    varchar2(7) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmssqua1 primary key( 
fmsqsec,
fmsqledg,
fmsqseq,
fmsqacct)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
