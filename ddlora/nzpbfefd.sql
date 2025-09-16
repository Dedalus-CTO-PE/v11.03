create table nzpbfeaf
(
  nzbfhosp    varchar2(3) default ' ' not null,
  nzbfclmc    varchar2(3) default ' ' not null,
  nzbfcntr    varchar2(6) default ' ' not null,
  nzbfftab    varchar2(8) default ' ' not null,
  nzbfatyp    varchar2(3) default ' ' not null,
  nzbfbtyp    varchar2(3) default ' ' not null,
  nzbfefdt    varchar2(8) default ' ' not null,
  nzbfeday    varchar2(3) default ' ' not null,
  nzbfrate    number(16,2) default 0 not null,
  nzbfreba    number(16,2) default 0 not null,
  nzbfdesc    varchar2(30) default ' ' not null,
  nzbfcdat    varchar2(8) default ' ' not null,
  nzbfctim    varchar2(8) default ' ' not null,
  nzbfcuid    varchar2(10) default ' ' not null,
  nzbfudat    varchar2(8) default ' ' not null,
  nzbfutim    varchar2(8) default ' ' not null,
  nzbfuuid    varchar2(10) default ' ' not null,
  nzbfspar    varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nzpbfea1 primary key( 
nzbfhosp,
nzbfclmc,
nzbfcntr,
nzbfftab,
nzbfatyp,
nzbfbtyp,
nzbfefdt,
nzbfeday)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
