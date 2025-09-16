create table pmsupdaf
(
  pmudurno    varchar2(8) default ' ' not null,
  pmuddate    varchar2(8) default ' ' not null,
  pmudtime    varchar2(8) default ' ' not null,
  pmuduser    varchar2(10) default ' ' not null,
  pmuddatc    varchar2(8) default ' ' not null,
  pmudtimc    varchar2(8) default ' ' not null,
  pmudwebc    varchar2(10) default ' ' not null,
  pmudspar    varchar2(200) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsupda1 primary key( 
pmudurno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
