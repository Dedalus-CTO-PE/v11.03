create table fmsaudcc
(
  fmccaudd    varchar2(8) default ' ' not null,
  fmccaudt    varchar2(8) default ' ' not null,
  fmccaudp    varchar2(2) default ' ' not null,
  fmccaudr    varchar2(1) default ' ' not null,
  fmccauds    number(1,0) default 0 not null,
  fmccaudo    varchar2(4) default ' ' not null,
  fmccledg    varchar2(2) default ' ' not null,
  fmcccoce    varchar2(12) default ' ' not null,
  fmccdesc    varchar2(35) default ' ' not null,
  fmccades    varchar2(35) default ' ' not null,
  fmccppos    varchar2(5) default ' ' not null,
  fmccsecc    varchar2(3) default ' ' not null,
  fmcctele    varchar2(15) default ' ' not null,
  fmcccont    varchar2(35) default ' ' not null,
  fmcciday    varchar2(7) default ' ' not null,
  fmccstat    varchar2(2) default ' ' not null,
  fmccspar    varchar2(38) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index fmsaudcc on fmsaudcc
(
fmccaudd,
fmccaudt,
fmccaudp,
fmccaudr
)
tablespace pas_indx; 
create table fmsccaaf
(
  fmccledg    varchar2(2) default ' ' not null,
  fmcccoce    varchar2(12) default ' ' not null,
  fmccdesc    varchar2(35) default ' ' not null,
  fmccades    varchar2(35) default ' ' not null,
  fmccppos    varchar2(5) default ' ' not null,
  fmccsecc    varchar2(3) default ' ' not null,
  fmcctele    varchar2(15) default ' ' not null,
  fmcccont    varchar2(35) default ' ' not null,
  fmcciday    varchar2(7) default ' ' not null,
  fmccstat    varchar2(2) default ' ' not null,
  fmccspar    varchar2(38) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsccaa1 primary key( 
fmccledg,
fmcccoce)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsccaa2 on fmsccaaf
(
fmccledg,
fmccdesc,
fmcccoce
)
  tablespace pas_indx; 
