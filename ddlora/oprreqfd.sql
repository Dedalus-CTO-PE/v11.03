create table opraudrq
(
  oprqaudd    varchar2(8) default ' ' not null,
  oprqaudt    varchar2(8) default ' ' not null,
  oprqaudp    varchar2(2) default ' ' not null,
  oprqaudr    varchar2(1) default ' ' not null,
  oprqauds    number(1,0) default 0 not null,
  oprqaudo    varchar2(4) default ' ' not null,
  oprquniq    varchar2(10) default ' ' not null,
  oprqteam    varchar2(1) default ' ' not null,
  oprqclss    varchar2(3) default ' ' not null,
  oprqtype    varchar2(1) default ' ' not null,
  oprqitem    varchar2(15) default ' ' not null,
  oprqamnt    number(3,0) default 0 not null,
  oprqdcod    varchar2(6) default ' ' not null,
  oprqchrg    varchar2(1) default ' ' not null,
  oprqspar    varchar2(29) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index opraudrq on opraudrq
(
oprqaudd,
oprqaudt,
oprqaudp,
oprqaudr
)
tablespace pas_indx; 
create table oprreqaf
(
  oprquniq    varchar2(10) default ' ' not null,
  oprqteam    varchar2(1) default ' ' not null,
  oprqclss    varchar2(3) default ' ' not null,
  oprqtype    varchar2(1) default ' ' not null,
  oprqitem    varchar2(15) default ' ' not null,
  oprqamnt    number(3,0) default 0 not null,
  oprqdcod    varchar2(6) default ' ' not null,
  oprqchrg    varchar2(1) default ' ' not null,
  oprqspar    varchar2(29) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprreqa1 primary key( 
oprquniq,
oprqteam,
oprqdcod,
oprqclss,
oprqtype,
oprqitem)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprreqa2 on oprreqaf
(
oprquniq,
oprqteam,
oprqdcod,
oprqitem,
oprqtype,
oprqclss
)
  tablespace pas_indx; 
create unique index oprreqa3 on oprreqaf
(
oprquniq,
oprqteam,
oprqdcod,
oprqtype,
oprqitem,
oprqclss
)
  tablespace pas_indx; 
