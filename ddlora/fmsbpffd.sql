create table fmsaudbp
(
  fmbpaudd    varchar2(8) default ' ' not null,
  fmbpaudt    varchar2(8) default ' ' not null,
  fmbpaudp    varchar2(2) default ' ' not null,
  fmbpaudr    varchar2(1) default ' ' not null,
  fmbpauds    number(1,0) default 0 not null,
  fmbpaudo    varchar2(4) default ' ' not null,
  fmbpledg    varchar2(2) default ' ' not null,
  fmbpyear    varchar2(4) default ' ' not null,
  fmbpcode    varchar2(3) default ' ' not null,
  fmbpdesc    varchar2(25) default ' ' not null,
  fmbppc1     number(6,2) default 0 not null,
  fmbppc2     number(6,2) default 0 not null,
  fmbppc3     number(6,2) default 0 not null,
  fmbppc4     number(6,2) default 0 not null,
  fmbppc5     number(6,2) default 0 not null,
  fmbppc6     number(6,2) default 0 not null,
  fmbppc7     number(6,2) default 0 not null,
  fmbppc8     number(6,2) default 0 not null,
  fmbppc9     number(6,2) default 0 not null,
  fmbppc10    number(6,2) default 0 not null,
  fmbppc11    number(6,2) default 0 not null,
  fmbppc12    number(6,2) default 0 not null,
  fmbppc13    number(6,2) default 0 not null,
  fmbpspar    varchar2(16) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index fmsaudbp on fmsaudbp
(
fmbpaudd,
fmbpaudt,
fmbpaudp,
fmbpaudr
)
tablespace pas_indx; 
create table fmsbpfaf
(
  fmbpledg    varchar2(2) default ' ' not null,
  fmbpyear    varchar2(4) default ' ' not null,
  fmbpcode    varchar2(3) default ' ' not null,
  fmbpdesc    varchar2(25) default ' ' not null,
  fmbppc1     number(6,2) default 0 not null,
  fmbppc2     number(6,2) default 0 not null,
  fmbppc3     number(6,2) default 0 not null,
  fmbppc4     number(6,2) default 0 not null,
  fmbppc5     number(6,2) default 0 not null,
  fmbppc6     number(6,2) default 0 not null,
  fmbppc7     number(6,2) default 0 not null,
  fmbppc8     number(6,2) default 0 not null,
  fmbppc9     number(6,2) default 0 not null,
  fmbppc10    number(6,2) default 0 not null,
  fmbppc11    number(6,2) default 0 not null,
  fmbppc12    number(6,2) default 0 not null,
  fmbppc13    number(6,2) default 0 not null,
  fmbpspar    varchar2(16) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsbpfa1 primary key( 
fmbpledg,
fmbpyear,
fmbpcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
