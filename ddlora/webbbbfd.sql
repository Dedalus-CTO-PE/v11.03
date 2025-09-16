create table webbbbaf
(
  wbbbbthn    varchar2(8) default ' ' not null,
  wbbbbthl    number(14,2) default 0 not null,
  wbbbtrib    number(6,0) default 0 not null,
  wbbbdtbc    varchar2(8) default ' ' not null,
  wbbbtmbc    varchar2(8) default ' ' not null,
  wbbboper    varchar2(10) default ' ' not null,
  wbbbefnm    varchar2(18) default ' ' not null,
  wbbblocn    varchar2(65) default ' ' not null,
  wbbbsnid    varchar2(60) default ' ' not null,
  wbbbspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webbbba1 primary key( 
wbbbbthn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webbbba2 on webbbbaf
(
wbbbdtbc,
wbbbbthn
)
  tablespace pas_indx; 
