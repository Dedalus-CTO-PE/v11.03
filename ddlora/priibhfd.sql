create table priibhaf
(
  pribbthn    varchar2(8) default ' ' not null,
  pribhfnd    varchar2(6) default ' ' not null,
  pribbhtl    number(14,2) default 0 not null,
  pribtrib    number(6,0) default 0 not null,
  pribdtbc    varchar2(8) default ' ' not null,
  pribtmbc    varchar2(8) default ' ' not null,
  priboper    varchar2(10) default ' ' not null,
  dpiebeet    varchar2(1) default ' ' not null,
  pribefnm    varchar2(18) default ' ' not null,
  priblocn    varchar2(8) default ' ' not null,
  pribsnid    varchar2(60) default ' ' not null,
  pribspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint priibha1 primary key( 
pribbthn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index priibha2 on priibhaf
(
pribdtbc,
pribbthn
)
  tablespace pas_indx; 
