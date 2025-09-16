create table watmhdaf
(
  wtmhurno    varchar2(8) default ' ' not null,
  wtmhproc    varchar2(9) default ' ' not null,
  wtmhpcnt    varchar2(2) default ' ' not null,
  wtmhtype    varchar2(3) default ' ' not null,
  wtmhnote    varchar2(6) default ' ' not null,
  wtmhdate    varchar2(8) default ' ' not null,
  wtmhtime    varchar2(8) default ' ' not null,
  wtmhuser    varchar2(10) default ' ' not null,
  wtmhoccg    varchar2(3) default ' ' not null,
  wtmhdelt    varchar2(1) default ' ' not null,
  wtmhddat    varchar2(8) default ' ' not null,
  wtmhdtim    varchar2(8) default ' ' not null,
  wtmhduse    varchar2(10) default ' ' not null,
  wtmhdocc    varchar2(3) default ' ' not null,
  wtmhspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint watmhda1 primary key( 
wtmhurno,
wtmhproc,
wtmhpcnt,
wtmhtype,
wtmhnote)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym watmhdaf for watmhdaf;
