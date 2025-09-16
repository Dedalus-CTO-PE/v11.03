create table webimbaf
(
  wbibbthn    varchar2(8) default ' ' not null,
  wbibhfnd    varchar2(6) default ' ' not null,
  wbibbhtl    number(14,2) default 0 not null,
  wbibtrib    number(6,0) default 0 not null,
  wbibdtbc    varchar2(8) default ' ' not null,
  wbibtmbc    varchar2(8) default ' ' not null,
  wbiboper    varchar2(10) default ' ' not null,
  dwbibeet    varchar2(1) default ' ' not null,
  wbibefnm    varchar2(18) default ' ' not null,
  wbiblocn    varchar2(8) default ' ' not null,
  wbibsnid    varchar2(60) default ' ' not null,
  wbibspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webimba1 primary key( 
wbibbthn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webimba2 on webimbaf
(
wbibdtbc,
wbibbthn
)
  tablespace pas_indx; 
