create table webihbaf
(
  wbijbthn    varchar2(8) default ' ' not null,
  wbijhfnd    varchar2(6) default ' ' not null,
  wbijbhtl    number(14,2) default 0 not null,
  wbijtrib    number(6,0) default 0 not null,
  wbijdtbc    varchar2(8) default ' ' not null,
  wbijtmbc    varchar2(8) default ' ' not null,
  wbijoper    varchar2(10) default ' ' not null,
  dwbijeet    varchar2(1) default ' ' not null,
  wbijefnm    varchar2(18) default ' ' not null,
  wbijlocn    varchar2(8) default ' ' not null,
  wbijsnid    varchar2(60) default ' ' not null,
  wbijspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webihba1 primary key( 
wbijbthn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webihba2 on webihbaf
(
wbijdtbc,
wbijbthn
)
  tablespace pas_indx; 
