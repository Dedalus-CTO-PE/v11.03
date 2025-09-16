create table ceaaudps
(
  cepsaudd    varchar2(8) default ' ' not null,
  cepsaudt    varchar2(8) default ' ' not null,
  cepsaudp    varchar2(2) default ' ' not null,
  cepsaudr    varchar2(1) default ' ' not null,
  cepsauds    number(1,0) default 0 not null,
  cepsaudo    varchar2(4) default ' ' not null,
  cepspsc     varchar2(7) default ' ' not null,
  cepsdes     varchar2(35) default ' ' not null,
  cepstyp     varchar2(1) default ' ' not null,
  cepsqty     number(8,2) default 0 not null,
  cepsqdes    varchar2(5) default ' ' not null,
  cepsst1     number(10,2) default 0 not null,
  cepsst2     number(10,2) default 0 not null,
  cepsst3     number(10,2) default 0 not null,
  cepsst4     number(10,2) default 0 not null,
  cepsst5     number(10,2) default 0 not null,
  cepsur1     varchar2(30) default ' ' not null,
  cepsur2     varchar2(30) default ' ' not null,
  cepsud1     varchar2(8) default ' ' not null,
  cepsud2     varchar2(8) default ' ' not null,
  cepsact     varchar2(1) default ' ' not null,
  cepsdrg     varchar2(1) default ' ' not null,
  cepsvsc     varchar2(2) default ' ' not null,
  cepsuy1     varchar2(1) default ' ' not null,
  cepsuy2     varchar2(1) default ' ' not null,
  cepsspa     varchar2(16) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index ceaaudps on ceaaudps
(
cepsaudd,
cepsaudt,
cepsaudp,
cepsaudr
)
tablespace pas_indx; 
create table ceapscaf
(
  cepspsc     varchar2(7) default ' ' not null,
  cepsdes     varchar2(35) default ' ' not null,
  cepstyp     varchar2(1) default ' ' not null,
  cepsqty     number(8,2) default 0 not null,
  cepsqdes    varchar2(5) default ' ' not null,
  cepsst1     number(10,2) default 0 not null,
  cepsst2     number(10,2) default 0 not null,
  cepsst3     number(10,2) default 0 not null,
  cepsst4     number(10,2) default 0 not null,
  cepsst5     number(10,2) default 0 not null,
  cepsur1     varchar2(30) default ' ' not null,
  cepsur2     varchar2(30) default ' ' not null,
  cepsud1     varchar2(8) default ' ' not null,
  cepsud2     varchar2(8) default ' ' not null,
  cepsact     varchar2(1) default ' ' not null,
  cepsdrg     varchar2(1) default ' ' not null,
  cepsvsc     varchar2(2) default ' ' not null,
  cepsuy1     varchar2(1) default ' ' not null,
  cepsuy2     varchar2(1) default ' ' not null,
  cepsspa     varchar2(16) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceapsca1 primary key( 
cepspsc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
