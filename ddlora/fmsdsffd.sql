create table fmsdyyyy
(
  fmdfledg    varchar2(2) default ' ' not null,
  fmdfacct    varchar2(12) default ' ' not null,
  fmdfdiss    varchar2(5) default ' ' not null,
  fmdfresp    varchar2(4) default ' ' not null,
  fmdfbf      number(14,2) default 0 not null,
  fmdf01      number(14,2) default 0 not null,
  fmdf02      number(14,2) default 0 not null,
  fmdf03      number(14,2) default 0 not null,
  fmdf04      number(14,2) default 0 not null,
  fmdf05      number(14,2) default 0 not null,
  fmdf06      number(14,2) default 0 not null,
  fmdf07      number(14,2) default 0 not null,
  fmdf08      number(14,2) default 0 not null,
  fmdf09      number(14,2) default 0 not null,
  fmdf10      number(14,2) default 0 not null,
  fmdf11      number(14,2) default 0 not null,
  fmdf12      number(14,2) default 0 not null,
  fmdf13      number(14,2) default 0 not null,
  fmdfspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsdsfa1 primary key( 
fmdfledg,
fmdfacct,
fmdfdiss,
fmdfresp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsdsfa2 on fmsdyyyy
(
fmdfledg,
fmdfacct,
fmdfresp,
fmdfdiss
)
  tablespace pas_indx; 
