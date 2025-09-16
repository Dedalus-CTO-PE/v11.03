create table pmsfedaf
(
  pmfdquot    varchar2(12) default ' ' not null,
  pmfdurno    varchar2(8) default ' ' not null,
  pmfdnons    number(5,0) default 0 not null,
  pmfdadat    varchar2(8) default ' ' not null,
  pmfdhfun    varchar2(6) default ' ' not null,
  pmfdhftb    varchar2(8) default ' ' not null,
  pmfdcmcd    varchar2(9) default ' ' not null,
  pmfdclty    varchar2(3) default ' ' not null,
  pmfdbdty    varchar2(3) default ' ' not null,
  pmfdatyp    varchar2(3) default ' ' not null,
  pmfdagst    number(1,0) default 0 not null,
  pmfdbdt2    varchar2(3) default ' ' not null,
  pmfdbdt3    varchar2(3) default ' ' not null,
  pmfdbdt4    varchar2(3) default ' ' not null,
  pmfdbdt5    varchar2(3) default ' ' not null,
  pmfdnds2    number(5,0) default 0 not null,
  pmfdnds3    number(5,0) default 0 not null,
  pmfdnds4    number(5,0) default 0 not null,
  pmfdnds5    number(5,0) default 0 not null,
  pmfdcmn1    varchar2(70) default ' ' not null,
  pmfdcmn2    varchar2(70) default ' ' not null,
  pmfdcmn3    varchar2(70) default ' ' not null,
  pmfdcmn4    varchar2(70) default ' ' not null,
  pmfdcmn5    varchar2(70) default ' ' not null,
  pmfdxcss    number(14,2) default 0 not null,
  pmfdexpd    varchar2(8) default ' ' not null,
  pmfdcdat    varchar2(8) default ' ' not null,
  pmfdctim    varchar2(8) default ' ' not null,
  pmfdcuid    varchar2(10) default ' ' not null,
  pmfddoct    varchar2(10) default ' ' not null,
  pmfdachr    varchar2(1) default ' ' not null,
  pmfdubas    varchar2(1) default ' ' not null,
  pmfdspar    varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsfeda1 primary key( 
pmfdquot)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsfeda2 on pmsfedaf
(
pmfdurno,
pmfdquot
)
  tablespace pas_indx; 
