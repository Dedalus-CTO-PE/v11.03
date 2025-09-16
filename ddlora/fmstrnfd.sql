create table fmstyyyy
(
  fmtrbat     varchar2(5) default ' ' not null,
  fmtruniq    varchar2(5) default ' ' not null,
  fmtrledg    varchar2(2) default ' ' not null,
  fmtracct    varchar2(12) default ' ' not null,
  fmtrcred    varchar2(5) default ' ' not null,
  fmtrpdat    varchar2(8) default ' ' not null,
  fmtrtdat    varchar2(8) default ' ' not null,
  fmtrtype    varchar2(2) default ' ' not null,
  fmtrdiss    varchar2(5) default ' ' not null,
  fmtrpper    varchar2(2) default ' ' not null,
  fmtrdocr    varchar2(15) default ' ' not null,
  fmtramt     number(14,2) default 0 not null,
  fmtrord     varchar2(8) default ' ' not null,
  fmtrresp    varchar2(4) default ' ' not null,
  fmtrdesc    varchar2(30) default ' ' not null,
  fmtrspar    varchar2(21) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmstrna1 primary key( 
fmtrbat,
fmtruniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmstrna2 on fmstyyyy
(
fmtrledg,
fmtracct,
fmtrpdat,
fmtrbat,
fmtruniq
)
  tablespace pas_indx; 
