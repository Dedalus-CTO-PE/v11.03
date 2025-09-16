create table pricdtaf
(
  prcduniq    varchar2(8) default ' ' not null,
  prcdprac    varchar2(6) default ' ' not null,
  prcddoct    varchar2(10) default ' ' not null,
  prcdpind    varchar2(3) default ' ' not null,
  prcdctyp    varchar2(3) default ' ' not null,
  prcdnote    varchar2(6) default ' ' not null,
  prcdidat    varchar2(8) default ' ' not null,
  prcditim    varchar2(8) default ' ' not null,
  prcdiusr    varchar2(10) default ' ' not null,
  prcdiocg    varchar2(3) default ' ' not null,
  prcddind    varchar2(1) default ' ' not null,
  prcdddat    varchar2(8) default ' ' not null,
  prcddtim    varchar2(8) default ' ' not null,
  prcddusr    varchar2(10) default ' ' not null,
  prcddocg    varchar2(3) default ' ' not null,
  prcdspar    varchar2(127) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pricdta1 primary key( 
prcduniq,
prcdprac,
prcddoct,
prcdpind,
prcdctyp,
prcdnote)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
