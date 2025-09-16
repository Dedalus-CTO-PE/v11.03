create table pritmpaf
(
  prtmuniq    varchar2(8) default ' ' not null,
  prtmprac    varchar2(6) default ' ' not null,
  prtmdoct    varchar2(10) default ' ' not null,
  prtmpind    varchar2(3) default ' ' not null,
  prtmcntr    varchar2(8) default ' ' not null,
  prtmdate    varchar2(8) default ' ' not null,
  prtmtime    varchar2(8) default ' ' not null,
  prtmityp    varchar2(1) default ' ' not null,
  prtmitem    varchar2(9) default ' ' not null,
  prtmsubi    varchar2(3) default ' ' not null,
  prtmdesc    varchar2(30) default ' ' not null,
  prtmtest    number(1,0) default 0 not null,
  prtms4fl    number(1,0) default 0 not null,
  prtmgsta    number(1,0) default 0 not null,
  prtmgstc    varchar2(6) default ' ' not null,
  prtmqunt    number(3,0) default 0 not null,
  prtmcamt    number(14,2) default 0 not null,
  prtmiamt    number(14,2) default 0 not null,
  prtmspar    varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pritmpa1 primary key( 
prtmuniq,
prtmprac,
prtmdoct,
prtmpind,
prtmcntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
