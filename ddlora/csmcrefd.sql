create table csmaudcr
(
  cscraudd    varchar2(8) default ' ' not null,
  cscraudt    varchar2(8) default ' ' not null,
  cscraudp    varchar2(2) default ' ' not null,
  cscraudr    varchar2(1) default ' ' not null,
  cscrauds    number(1,0) default 0 not null,
  cscraudo    varchar2(4) default ' ' not null,
  cscrcrd     varchar2(5) default ' ' not null,
  cscrtyp     varchar2(3) default ' ' not null,
  cscrsky     varchar2(6) default ' ' not null,
  cscrcn1     varchar2(30) default ' ' not null,
  cscrcn2     varchar2(30) default ' ' not null,
  cscrca1     varchar2(25) default ' ' not null,
  cscrca2     varchar2(25) default ' ' not null,
  cscrca3     varchar2(25) default ' ' not null,
  cscrcpc     varchar2(6) default ' ' not null,
  cscrctel    varchar2(15) default ' ' not null,
  cscrcfax    varchar2(15) default ' ' not null,
  cscrcon     varchar2(30) default ' ' not null,
  cscrhor     number(1,0) default 0 not null,
  cscrhin     number(1,0) default 0 not null,
  cscrhcr     number(1,0) default 0 not null,
  cscrhpy     number(1,0) default 0 not null,
  cscrur1     varchar2(25) default ' ' not null,
  cscrur2     varchar2(25) default ' ' not null,
  cscrud1     varchar2(8) default ' ' not null,
  cscrud2     varchar2(8) default ' ' not null,
  cscruy1     varchar2(1) default ' ' not null,
  cscruy2     varchar2(1) default ' ' not null,
  cscrspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index csmaudcr on csmaudcr
(
cscraudd,
cscraudt,
cscraudp,
cscraudr
)
tablespace pas_indx; 
create table csmcreaf
(
  cscrcrd     varchar2(5) default ' ' not null,
  cscrtyp     varchar2(3) default ' ' not null,
  cscrsky     varchar2(6) default ' ' not null,
  cscrcn1     varchar2(30) default ' ' not null,
  cscrcn2     varchar2(30) default ' ' not null,
  cscrca1     varchar2(25) default ' ' not null,
  cscrca2     varchar2(25) default ' ' not null,
  cscrca3     varchar2(25) default ' ' not null,
  cscrcpc     varchar2(6) default ' ' not null,
  cscrctel    varchar2(15) default ' ' not null,
  cscrcfax    varchar2(15) default ' ' not null,
  cscrcon     varchar2(30) default ' ' not null,
  cscrhor     number(1,0) default 0 not null,
  cscrhin     number(1,0) default 0 not null,
  cscrhcr     number(1,0) default 0 not null,
  cscrhpy     number(1,0) default 0 not null,
  cscrur1     varchar2(25) default ' ' not null,
  cscrur2     varchar2(25) default ' ' not null,
  cscrud1     varchar2(8) default ' ' not null,
  cscrud2     varchar2(8) default ' ' not null,
  cscruy1     varchar2(1) default ' ' not null,
  cscruy2     varchar2(1) default ' ' not null,
  cscrspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint csmcrea1 primary key( 
cscrcrd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
