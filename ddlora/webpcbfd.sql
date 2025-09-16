create table webpcbaf
(
  wbpbbthn    varchar2(8) default ' ' not null,
  wbpbbhtl    number(14,2) default 0 not null,
  wbpbtrib    number(6,0) default 0 not null,
  wbpbdtbc    varchar2(8) default ' ' not null,
  wbpbtmbc    varchar2(8) default ' ' not null,
  wbpboper    varchar2(10) default ' ' not null,
  wbpbefnm    varchar2(18) default ' ' not null,
  wbpblocn    varchar2(8) default ' ' not null,
  wbpbsnid    varchar2(60) default ' ' not null,
  wbpbspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webpcba1 primary key( 
wbpbbthn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webpcba2 on webpcbaf
(
wbpbdtbc,
wbpbbthn
)
  tablespace pas_indx; 
