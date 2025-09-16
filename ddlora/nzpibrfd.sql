create table nzpibraf
(
  nzibhosp    varchar2(3) default ' ' not null,
  nzibclmc    varchar2(3) default ' ' not null,
  nzibcntr    varchar2(6) default ' ' not null,
  nzibftab    varchar2(8) default ' ' not null,
  nzibcprc    varchar2(9) default ' ' not null,
  nzibefdt    varchar2(8) default ' ' not null,
  nzibbrcd    varchar2(3) default ' ' not null,
  nzibamnt    number(16,2) default 0 not null,
  nzibspar    varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nzpibra1 primary key( 
nzibhosp,
nzibclmc,
nzibcntr,
nzibftab,
nzibcprc,
nzibefdt,
nzibbrcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
