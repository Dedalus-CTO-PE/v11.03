create table legdisaf
(
  ladsnumb    varchar2(8) default ' ' not null,
  ladsdate    varchar2(8) default ' ' not null,
  ladstime    varchar2(5) default ' ' not null,
  ladssses    varchar2(60) default ' ' not null,
  ladsdisc    varchar2(3) default ' ' not null,
  ladsdiag    varchar2(7) default ' ' not null,
  ladsusd1    varchar2(3) default ' ' not null,
  ladsusd2    varchar2(3) default ' ' not null,
  ladsusd3    varchar2(3) default ' ' not null,
  ladsspar    varchar2(1) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legdisa1 primary key( 
ladsnumb)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
