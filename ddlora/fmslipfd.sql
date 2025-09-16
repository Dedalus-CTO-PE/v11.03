create table fmslipaf
(
  fmlicode    varchar2(3) default ' ' not null,
  fmliledg    varchar2(2) default ' ' not null,
  fmlidesc    varchar2(30) default ' ' not null,
  fmliref     varchar2(15) default ' ' not null,
  fmlidiss    varchar2(5) default ' ' not null,
  fmliresp    varchar2(4) default ' ' not null,
  fmlicrac    varchar2(12) default ' ' not null,
  fmlicraa    varchar2(12) default ' ' not null,
  fmlispar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmslipa1 primary key( 
fmlicode,
fmliledg)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
