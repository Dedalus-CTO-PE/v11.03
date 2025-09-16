create table nzppfeaf
(
  nzpfhosp    varchar2(3) default ' ' not null,
  nzpfclmc    varchar2(3) default ' ' not null,
  nzpfcntr    varchar2(6) default ' ' not null,
  nzpfftab    varchar2(8) default ' ' not null,
  nzpfcprc    varchar2(9) default ' ' not null,
  nzpfefdt    varchar2(8) default ' ' not null,
  nzpfcont    number(1,0) default 0 not null,
  nzpfhpor    number(16,2) default 0 not null,
  nzpfppor    number(16,2) default 0 not null,
  nzpfdes1    varchar2(50) default ' ' not null,
  nzpfdes2    varchar2(50) default ' ' not null,
  nzpfrbrk    number(1,0) default 0 not null,
  nzpfibrk    number(1,0) default 0 not null,
  nzpfcdat    varchar2(8) default ' ' not null,
  nzpfctim    varchar2(8) default ' ' not null,
  nzpfcuid    varchar2(10) default ' ' not null,
  nzpfudat    varchar2(8) default ' ' not null,
  nzpfutim    varchar2(8) default ' ' not null,
  nzpfuuid    varchar2(10) default ' ' not null,
  nzpfspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nzppfea1 primary key( 
nzpfhosp,
nzpfclmc,
nzpfcntr,
nzpfftab,
nzpfcprc,
nzpfefdt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
