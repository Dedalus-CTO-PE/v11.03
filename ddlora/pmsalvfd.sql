create table pmsalvaf
(
  pmvavisn    varchar2(8) default ' ' not null,
  pmvaavis    varchar2(20) default ' ' not null,
  pmvatype    varchar2(2) default ' ' not null,
  pmvadate    varchar2(8) default ' ' not null,
  pmvatime    varchar2(8) default ' ' not null,
  pmvacuid    varchar2(10) default ' ' not null,
  pmvaactn    varchar2(1) default ' ' not null,
  pmvacomm    varchar2(300) default ' ' not null,
  pmvaspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsalva1 primary key( 
pmvavisn,
pmvadate,
pmvatime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsalva2 on pmsalvaf
(
pmvaavis,
pmvadate,
pmvatime,
pmvavisn
)
  tablespace pas_indx; 
