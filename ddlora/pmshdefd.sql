create table pmshdeaf
(
  pmhecntr    varchar2(6) default ' ' not null,
  pmhehacg    varchar2(3) default ' ' not null,
  pmhehact    varchar2(3) default ' ' not null,
  pmhehacf    varchar2(3) default ' ' not null,
  pmhecomv    number(14,4) default 0 not null,
  pmhecdat    varchar2(8) default ' ' not null,
  pmhectim    varchar2(8) default ' ' not null,
  pmhecuid    varchar2(10) default ' ' not null,
  pmheudat    varchar2(8) default ' ' not null,
  pmheutim    varchar2(8) default ' ' not null,
  pmheuuid    varchar2(10) default ' ' not null,
  pmhespar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmshdea1 primary key( 
pmhecntr,
pmhehacg,
pmhehact,
pmhehacf)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
