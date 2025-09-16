create table patnzraf
(
  nzrresi     varchar2(3) default ' ' not null,
  nzrcomp     varchar2(3) default ' ' not null,
  nzrtype     varchar2(3) default ' ' not null,
  nzrcprdy    number(14,2) default 0 not null,
  nzrcpdes    varchar2(20) default ' ' not null,
  nzrcerdy    number(14,2) default 0 not null,
  nzrcedes    varchar2(20) default ' ' not null,
  nzrcspar    varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patnzra1 primary key( 
nzrresi,
nzrcomp,
nzrtype)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
